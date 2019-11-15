/**HEADER********************************************************************
*
* Copyright (c) 2010 Freescale Semiconductor;
* All Rights Reserved
*
* Copyright (c) 1989-2010 ARC International;
* All Rights Reserved
*
***************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
**************************************************************************
*
* $FileName: cdc_serial.c$
* $Version :
* $Date    :
*
* Comments:
*
*   This file is an example of device drivers for the CDC class. This example
*   demonstrates the virtual serial port capability with abstract control model.
*   Redirects the communication from CDC device, which is connected to the board,
*   to the serial port ttyB.
*
*END************************************************************************/
/*************************************************************************
* Includes
/*************************************************************************/
#include "usb_host_cdc.h"
#include "cdc_serial.h"
#include "device_driver_info.h"
#include "sci.h" 
#include "io.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "usb_classes.h"

/*************************************************************************
* Local variables
/*************************************************************************/
static uint_32                  check_open = 0;

/*************************************************************************
* Global variables
/*************************************************************************/
LWEVENT_STRUCT                device_registered;
_usb_device_instance_handle     reg_device = 0;
const CDC_SERIAL_INIT           usb_open_param =
{
    USB_UART_NO_BLOCKING | USB_UART_HW_FLOW
};
extern char buff[BUFF_SIZE];
char                            uart2usb[BUFF_SIZE];
char                            usb2uart[BUFF_SIZE];
extern int_32                          buff_index;
FILE_CDC_PTR                    f_usb;
FILE_CDC 						g_f_usb;
IO_DEVICE_STRUCT 				g_io_dev;
char_ptr                        device_name = "tty0:";
volatile int_32                 uart2usb_num = 0;
volatile int_32                 usb2uart_num = 0;
uchar * main_buffer;
volatile int_32                 num_done;
/* buffer for acm device */
ACM_DEVICE_STRUCT 				g_acm_device;
/* buffer for data device */
DATA_DEVICE_STRUCT 				g_data_device;
/*************************************************************************
* Global function prototypes
/*************************************************************************/
extern void _usb_khci_task(void);

/*************************************************************************
* Global functions
/*************************************************************************/
/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : CDC_init
* Returned Value : none
* Comments       :
*     Execution starts here
*
*END*--------------------------------------------------------------------*/
void CDC_init()
{
    USB_STATUS           status = USB_OK;
    _usb_host_handle     host_handle;
    /* Init polling global variable */
    sci2_init();
    
    /* Disable interrupts */
    USB_lock();
    
    status = _usb_host_init (
    HOST_CONTROLLER_NUMBER,   /* Use value in header file */
    MAX_FRAME_SIZE,            /* Frame size per USB spec  */
    &host_handle);             /* Returned pointer */
    if (status != USB_OK)
    {
        printf("\nUSB Host Initialization failed. STATUS: %x",(unsigned int) status);
        exit(1);
    }
    status = _usb_host_driver_info_register (
    host_handle,
    (void *)DriverInfoTable
    );
    if (status != USB_OK)
    {
        printf("\nDriver Registration failed. STATUS: %x", (unsigned int)status);
        exit(1);
    }
    
    /* Enable interrupts */
    USB_unlock();
    printf("\nInitialization passed. Plug-in CDC device to USB port.\nUse ttyb: as the in/out port for CDC device data.\n");
    _lwevent_create(&device_registered, LWEVENT_AUTO_CLEAR); 
    /* reset number of bytes in buffers */
    uart2usb_num = usb2uart_num = 0; 
    f_usb = &g_f_usb; 
    memset(f_usb, 0, sizeof(FILE_CDC));
    f_usb->DEV_PTR = &g_io_dev;
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : CDC_Task
* Returned Value : none
* Comments       :
*     Execution starts here
*
*END*--------------------------------------------------------------------*/
void CDC_Task ()
{
    /* Body */
    uint_32              i = 0;
    static uint_32       char_to_recv = 0;
    /* due to the fact that uart driver blocks task, we will check if char is available and then we read it */
    /* write them to USB */
    _lwevent_wait_ticks(&device_registered, 0x01, FALSE, 0); 

    if (0 == check_open)
    {
        _io_cdc_serial_open(f_usb, device_name, (char *)&usb_open_param);
        check_open = 1;
    }
    else
    {
        /* Read data from UART */
        USB_lock();
        uart2usb_num = buff_index;
        for (i = 0; i < buff_index; i++)
        uart2usb[i] = buff[i];
        buff_index = 0;
        USB_unlock();
        /* Write data to USB */
        if (uart2usb_num)
        {
            num_done = _io_cdc_serial_write(f_usb, uart2usb, (int_32)(sizeof(uart2usb[0]) * uart2usb_num));
            if(num_done > 0)
            {
                for (i = (uint_32)num_done; i < uart2usb_num; i++) /* move buffer data, remove the written ones */
                uart2usb[i - num_done] = uart2usb[i];
                uart2usb_num -= num_done;
                char_to_recv += num_done;
            }
        }
        /* Read data from USB */
        if(char_to_recv > 0){
            num_done = _io_cdc_serial_read(f_usb, usb2uart + usb2uart_num, (int_32)(sizeof(uart2usb) / sizeof(uart2usb[0]) - usb2uart_num));
            if(num_done > 0)
            {
                usb2uart_num += num_done;
                if(char_to_recv >= num_done)
                {
                    char_to_recv -= num_done;
                }
                else
                {
                    char_to_recv  = 0;
                }
            }
            else
            {
                char_to_recv  = 0;
            }
        }
        /* write them to UART */
        if (usb2uart_num > 0)
        {
            for (i = 0; i < usb2uart_num; i++) {
                sci2_PutChar(usb2uart[i]);
            }
            usb2uart_num = 0;
        }
    }
} /* Endbody */

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_cdc_acm_event
* Returned Value : None
* Comments       :
*     Called when acm interface has been attached, detached, etc.
*END*--------------------------------------------------------------------*/
void usb_host_cdc_acm_app_event
(
/* [IN] pointer to device instance */
_usb_device_instance_handle      dev_handle,
/* [IN] pointer to interface descriptor */
_usb_interface_descriptor_handle intf_handle,
/* [IN] code number for event causing callback */
uint_32                          event_code
)
{ /* Body */
    INTERFACE_DESCRIPTOR_PTR   intf_ptr =
    (INTERFACE_DESCRIPTOR_PTR)intf_handle;
    ACM_DEVICE_STRUCT_PTR      acm_device;

    switch (event_code)
    {
    case USB_CONFIG_EVENT:
        /* Drop through into attach, same processing */
    case USB_ATTACH_EVENT:
        {
            USB_CDC_DESC_ACM_PTR     acm_desc = NULL;
            USB_CDC_DESC_CM_PTR      cm_desc = NULL;
            USB_CDC_DESC_HEADER_PTR header_desc = NULL;
            USB_CDC_DESC_UNION_PTR union_desc = NULL;
            int_32                      external_data = 0;

            /* finds all the descriptors in the configuration */
            if (USB_OK != usb_class_cdc_get_acm_descriptors(dev_handle,
                        intf_handle,
                        &acm_desc,
                        &cm_desc,
                        &header_desc,
                        &union_desc))
            break;
            /* we can allocate new acm device */
            acm_device = &g_acm_device;
            /* initialize new interface members and select this interface */
            if (USB_OK != _usb_hostdev_select_interface(dev_handle,
                        intf_handle, (pointer)&acm_device->CLASS_INTF))
            {
                break;
            }
            /* set all info got from descriptors to the class interface struct */
            usb_class_cdc_set_acm_descriptors((pointer)&acm_device->CLASS_INTF,
            acm_desc, cm_desc, header_desc, union_desc);
            /* link all already registered data interfaces to this ACM control, if needed */
            if (USB_OK != usb_class_cdc_bind_data_interfaces(dev_handle, (pointer)&acm_device->CLASS_INTF)) {
                break;
            }
            printf("----- CDC control interface attach Event -----\n");
            printf("State = attached");
            printf("  Class = %d", intf_ptr->bInterfaceClass);
            printf("  SubClass = %d", intf_ptr->bInterfaceSubClass);
           
            check_open = 0;
          
            break;
        }
    case USB_INTF_EVENT:
        {
            CLASS_CALL_STRUCT_PTR   acm_parser;
            USB_STATUS              status;

            if (NULL == (acm_parser = usb_class_cdc_get_ctrl_interface(intf_handle)))
            break;
            status = usb_class_cdc_init_ipipe(acm_parser);
            if ((status != USB_OK) && (status != USBERR_OPEN_PIPE_FAILED))
            break;
            printf("----- CDC control interface selected -----\n");
            break;
        }
    case USB_DETACH_EVENT:
        {
            CLASS_CALL_STRUCT_PTR acm_parser;
            USB_CLASS_ACM_INTF_STRUCT_PTR if_ptr;

            if (NULL == (acm_parser = usb_class_cdc_get_ctrl_interface(intf_handle)))
            break;
            if_ptr = (USB_CLASS_ACM_INTF_STRUCT_PTR) acm_parser->class_intf_handle;
            /* mark we are not using input pipe */
            _lwevent_set(&if_ptr->acm_event, USB_ACM_DETACH); 
            usb_class_cdc_unbind_data_interfaces(acm_parser);
            USB_unlock();
            _lwevent_destroy(&if_ptr->acm_event);
            /* Use only the interface with desired protocol */
            printf("----- CDC control interface detach event -----\n");
            printf("State = detached");
            printf("  Class = %d", intf_ptr->bInterfaceClass);
            printf("  SubClass = %d", intf_ptr->bInterfaceSubClass);
            printf("  Protocol = %d\n", intf_ptr->bInterfaceProtocol);
            break;
        }
        break;
    default:
        printf("CDC device: unknown control event\n");
        break;
    } /* EndSwitch */
} /* Endbody */

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_cdc_data_app_event
* Returned Value : None
* Comments       :
*     Called when data interface has been attached, detached, etc.
*END*--------------------------------------------------------------------*/
void usb_host_cdc_data_app_event
(
/* [IN] pointer to device instance */
_usb_device_instance_handle      dev_handle,
/* [IN] pointer to interface descriptor */
_usb_interface_descriptor_handle intf_handle,
/* [IN] code number for event causing callback */
uint_32                          event_code
)
{ /* Body */
    INTERFACE_DESCRIPTOR_PTR   intf_ptr =
    (INTERFACE_DESCRIPTOR_PTR)intf_handle;
    DATA_DEVICE_STRUCT_PTR     data_device;

    switch (event_code)
    {
    case USB_CONFIG_EVENT:
        /* Drop through into attach, same processing */
    case USB_ATTACH_EVENT:
        {
            INTERFACE_DESCRIPTOR_PTR   if_desc;
            if (USB_OK != usb_class_cdc_get_ctrl_descriptor(dev_handle,
                        intf_handle,
                        &if_desc))
            break;
            /* interface descriptor found, so we can allocate new data device */
            data_device = &g_data_device;
            /* initializes interface members and selects it */
            if (USB_OK != _usb_hostdev_select_interface(dev_handle,
                        intf_handle, (pointer)&data_device->CLASS_INTF))
            {
                break;
            }
            /* binds this data interface with its control interface, if possible */
            if (USB_OK != usb_class_cdc_bind_acm_interface((pointer)&data_device->CLASS_INTF,
                        if_desc))
            {
                break;
            }
            printf("----- CDC data interface attach event -----\n");
            printf("State = attached");
            printf("  Class = %d", intf_ptr->bInterfaceClass);
            printf("  SubClass = %d", intf_ptr->bInterfaceSubClass);
            printf("  Protocol = %d\n", intf_ptr->bInterfaceProtocol);
            check_open = 0;
            break;
        }
    case USB_INTF_EVENT:
        {
            CLASS_CALL_STRUCT_PTR data_parser;

            if (NULL == (data_parser = usb_class_cdc_get_data_interface(intf_handle)))
            break;
            if (USB_OK == usb_class_cdc_install_driver(data_parser, device_name))
            {
                if (((USB_CLASS_DATA_INTF_STRUCT_PTR) (data_parser->class_intf_handle))->BOUND_CONTROL_INTERFACE != NULL) {
                    if (reg_device == 0)
                    {
                        reg_device = dev_handle;
                        _lwevent_set(&device_registered, 0x01); 
                    }
                }
                printf("----- Device installed -----\n");
            }
            printf("----- CDC data interface selected -----\n");
            break;
        }
    case USB_DETACH_EVENT:
        {
            CLASS_CALL_STRUCT_PTR data_parser;
            USB_CLASS_DATA_INTF_STRUCT_PTR if_ptr;

            if (NULL == (data_parser = usb_class_cdc_get_data_interface(intf_handle)))
            break;
            if_ptr = (USB_CLASS_DATA_INTF_STRUCT_PTR) data_parser->class_intf_handle;
            if (if_ptr->in_pipe != NULL)
            _lwevent_set(&if_ptr->data_event, USB_DATA_DETACH); /* mark we are not using input pipe */ 
            /* unbind data interface */
            if (USB_OK != usb_class_cdc_unbind_acm_interface(data_parser))
            break;
         if (if_ptr->in_pipe != NULL) {
             _lwevent_destroy(&if_ptr->data_event);
         }
            if (reg_device == dev_handle)
            {
                reg_device = 0;
            }
            printf("----- CDC data interface detach Event -----\n");
            printf("State = detached");
            printf("  Class = %d", intf_ptr->bInterfaceClass);
            printf("  SubClass = %d", intf_ptr->bInterfaceSubClass);
            printf("  Protocol = %d\n", intf_ptr->bInterfaceProtocol);
            break;
        }
    default:
        printf("CDC device: unknown data event\n");
        break;
    } /* EndSwitch */
} /* Endbody */

/* EOF */


