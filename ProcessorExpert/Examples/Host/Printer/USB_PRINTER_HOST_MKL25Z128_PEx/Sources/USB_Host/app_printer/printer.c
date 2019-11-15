/**HEADER********************************************************************
*
* Copyright (c) 2010 Freescale Semiconductor;
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
* $FileName: printer.c$
* $Version :
* $Date    :

*
* Comments:
*
*   This file is an example of device drivers for the HID class. This example
*   demonstrates the keyboard functionality. Note that a real keyboard driver also
*   needs to distinguish between intentionally repeated and unrepeated key presses.
*   This example simply demonstrates how to receive data from a USB Keyboard.
*   Interpretation of data is upto the application and customers can add the code
*   for it.
*
*END************************************************************************/
/* INCLUDE *---------------------------------------------------------------*/
#include "types.h"
#include "host_common.h"
#include "printer.h"
#include "host_driver.h"
#include "usb.h"
#include "khci.h"
#include "string.h"
#include "usbprv.h"
#include "psptypes.h"
#include "usbevent.h"
#include "usb_printer_language_common.h"
#include "device_driver_info.h"
#include "poll.h"
/* Global variables *------------------------------------------------------*/
/* Device structure contains information about the printer device */
volatile DEVICE_STRUCT printer_device = { 0 };
/* printer host_handle handles the host instance */
_usb_host_handle host_handle;
/* String contains Device ID */
uchar string_id_buffer[USB_PRINTER_DEVICE_ID_MAX_SIZE] = { 0 };
/* Printer language ID */
LANGUAGE_ID language_id = USB_PRINTER_LANGUAGE_PCL5;
/* send complete flag */
boolean b_callback = FALSE;
/* send complete status */
volatile USB_STATUS bStatus       = USB_OK;
/* Language supports */
boolean b_language = FALSE;
/* get string ID complete flag */
boolean get_string_ID_complete = FALSE;
/* Language string the device supports */
char* language_printer_device_support[6];
/* Structure contains the Printer setup information */
USB_PRINTER_HOST_SETUP printer_setup = 
{
    {100,100}, 				/* current_position */
    {20,COURIER_FONT,{0}}, 	/* font_setup */
    FALSE,					/* page_orientation */
};
/* The String to print */
char string_printer[APP_MAX_SIZE_STRING_PRINT];
char* string_to_print = NULL;
/* Demo string array */
char default_string[] = "FREESCALE USB HOST PRINTER PEX DEMO";
/* Printer language write pointer */
USB_PRINTER_LANGUAGE_FUNC g_printer_language_write = NULL;
/* PCL5 language */
char PJL_PCL5[] = "@PJL ENTER LANGUAGE = PCL \r\n";
/* POSTSCRIPT language */
char PJL_POSTSCRIPT[] = "@PJL ENTER LANGUAGE = POSTSCRIPT \r\n";
/* string information */
char str_info[100];

/* Local Function prototype *----------------------------------------------*/
static void usb_host_string_print(void);
static char* usb_host_string_get_field(char* key, char* string, uint_16* length);

/*FUNCTION*-------------------------------------------------------------------
*
* Function Name    : printer_init
* Returned Value   :
* Comments         :
*
*
*END*----------------------------------------------------------------------*/
void printer_init()
{
    USB_STATUS status = USB_OK;
    
    USB_lock();
    POLL_init(); 
    status = _usb_host_init(HOST_CONTROLLER_NUMBER, /* Use value in header file */
                            MAX_FRAME_SIZE,         /* Frame size per USB spec  */
                            &host_handle);          /* Returned pointer */
    if(status != USB_OK) 
    {
        printf("\nUSB Host initialization failed! STATUS: 0x%x",(unsigned int) status);
        fflush(stdout);
        exit(1);
    }
    
    /*
    ** Since we are going to act as the host driver, register the driver
    ** information for wanted class/subclass/protocols
    */
    status = _usb_host_driver_info_register(host_handle, (void *)DriverInfoTable);
    if(status != USB_OK) 
    {
        printf("\nUSB initialization driver info failed! STATUS: 0x%x", (int)status);
        fflush(stdout);      
        exit(1);
    }
    USB_unlock();

    printf("\nUSB Printer Host Demo\nWaiting for USB printer to be attached...\n");
    fflush(stdout);
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : Printer_Task
* Returned Value : none
* Comments       :
*     Execution starts here
*
*END*--------------------------------------------------------------------*/
void Printer_Task(uchar *buffer)
{
    USB_STATUS status = USB_OK;
    switch (printer_device.DEV_STATE) 
    {
        case USB_DEVICE_IDLE:
            break;
        case USB_DEVICE_ATTACHED:
            printer_device.DEV_STATE = USB_DEVICE_SET_INTERFACE_STARTED;
            status = _usb_hostdev_select_interface(printer_device.DEV_HANDLE, printer_device.INTF_HANDLE, (pointer) & printer_device.CLASS_INTF);
            if(status != USB_OK) 
            {
                printf("\nError in _usb_hostdev_select_interface! STATUS: 0x%x",(unsigned int) status);
                fflush(stdout);
                exit(1);
            }
            break;
        case USB_DEVICE_SET_INTERFACE_STARTED:
            break;
        case USB_DEVICE_INTERFACED:
            /* Get string ID */
            status = usb_printer_get_device_ID((pointer)&printer_device.CLASS_INTF,
                usb_host_printer_ctrl_callback, 
                NULL, 
                USB_PRINTER_DEVICE_ID_MAX_SIZE, 
                string_id_buffer);
            if(status != USB_STATUS_TRANSFER_QUEUED) 
            {
                printf("\nError in usb_printer_get_device_ID! STATUS: 0x%x", (int) status);
                fflush(stdout);
            }
            break;
        case USB_DEVICE_INUSE:
            if(FALSE == get_string_ID_complete)
            {
                get_string_ID_complete = TRUE;
                usb_host_show_info_device();
                usb_host_string_print();
            }
            break;
        case USB_DEVICE_DETACHED:
            get_string_ID_complete = FALSE;
            printf("Going to idle state\n");
            printer_device.DEV_STATE = USB_DEVICE_IDLE;
            break;
        default:
            printf ( "Unknown Printer Device State = %d\n",\
                (int)printer_device.DEV_STATE );
            break;
    }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_printer_event
* Returned Value : None
* Comments       :
*     Called when PRINTER device has been attached, detached, etc.
*END*--------------------------------------------------------------------*/
void usb_host_printer_event(
    /* [IN] pointer to device instance */
    _usb_device_instance_handle dev_handle,
    /* [IN] pointer to interface descriptor */
    _usb_interface_descriptor_handle intf_handle,
    /* [IN] code number for event causing callback */
    uint_32 event_code
)
{
    INTERFACE_DESCRIPTOR_PTR intf_ptr = (INTERFACE_DESCRIPTOR_PTR) intf_handle;
    fflush(stdout);
    switch (event_code) 
    {
        case USB_ATTACH_EVENT:
            printf("----- Attach Event -----\n");
            /* Drop through config event for the same processing */
        case USB_CONFIG_EVENT:
            printf("  State = %d\n", (int)printer_device.DEV_STATE);
            printf("  Class = %d\n", intf_ptr->bInterfaceClass);
            printf("  SubClass = %d\n", intf_ptr->bInterfaceSubClass);
            printf("  Protocol = %d\n", intf_ptr->bInterfaceProtocol);
            fflush(stdout);
    
            if(printer_device.DEV_STATE == USB_DEVICE_IDLE)
            {
                printer_device.DEV_HANDLE = dev_handle;
                printer_device.INTF_HANDLE = intf_handle;
                printer_device.DEV_STATE = USB_DEVICE_ATTACHED;
            }
            else 
            {
                printf("Printer device already attached\n");
                fflush(stdout);
            }
            break;
        case USB_INTF_EVENT:
            printf("----- Interfaced Event -----\n");
            printer_device.DEV_STATE = USB_DEVICE_INTERFACED;
            break;
        case USB_DETACH_EVENT:
            /* Use only the interface with desired protocol */
            printf("\n----- Detach Event -----\n");
            printf("  State = %d\n", (int)printer_device.DEV_STATE);
            printf("  Class = %d\n", intf_ptr->bInterfaceClass);
            printf("  SubClass = %d\n", intf_ptr->bInterfaceSubClass);
            printf("  Protocol = %d\n", intf_ptr->bInterfaceProtocol);
            fflush(stdout);
            printer_device.DEV_HANDLE = NULL;
            printer_device.INTF_HANDLE = NULL;
            printer_device.DEV_STATE = USB_DEVICE_DETACHED;
            break;
    }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_printer_ctrl_callback
* Returned Value : None
* Comments       :
*     Called when a control pipe command is completed.
*
*END*--------------------------------------------------------------------*/
void usb_host_printer_ctrl_callback(
    /* [IN] pointer to pipe */
    _usb_pipe_handle pipe_handle,
    /* [IN] user-defined parameter */
    pointer user_parm,
    /* [IN] buffer address */
    uchar_ptr buffer,
    /* [IN] length of data transferred */
    uint_32 buflen,
    /* [IN] status, hopefully USB_OK or USB_DONE */
    uint_32 status)
{
    UNUSED(pipe_handle)
    UNUSED(user_parm)
    UNUSED(buffer)
    UNUSED(buflen)
    
    printf("%s\n", buffer);
    if (printer_device.DEV_STATE == USB_DEVICE_INTERFACED){
        printer_device.DEV_STATE = USB_DEVICE_INUSE;
    }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_printer_recv_callback
* Returned Value : None
* Comments       :
*     Called when a interrupt pipe transfer is completed.
*
*END*--------------------------------------------------------------------*/
void usb_host_printer_recv_callback(
    /* [IN] pointer to pipe */
    _usb_pipe_handle pipe_handle,
    /* [IN] user-defined parameter */
    pointer user_parm,
    /* [IN] buffer address */
    uchar_ptr buffer,
    /* [IN] length of data transferred */
    uint_32 buflen,
    /* [IN] status, hopefully USB_OK or USB_DONE */
    uint_32 status)
{
    UNUSED(pipe_handle)
    UNUSED(user_parm)
    UNUSED(buffer)
    UNUSED(buflen)
    UNUSED(status)
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_printer_send_callback
* Returned Value : None
* Comments       :
*     Called when an interrupt pipe transfer is completed.
*
*END*--------------------------------------------------------------------*/
void usb_host_printer_send_callback(
    /* [IN] pointer to pipe */
    _usb_pipe_handle pipe_handle,
    /* [IN] user-defined parameter */
    pointer user_parm,
    /* [IN] buffer address */
    uchar_ptr buffer,
    /* [IN] length of data transferred */
    uint_32 buflen,
    /* [IN] status, hopefully USB_OK or USB_DONE */
    uint_32 status)
{
    UNUSED(pipe_handle)
    UNUSED(user_parm)
    UNUSED(buflen)
    UNUSED(status)
    UNUSED(buffer);
    b_callback = TRUE;
	bStatus = status;
}

static void usb_host_string_print(void)
{
    /* Init id language */
    g_printer_language_write = _usb_host_printer_language_init(language_id);
    if(USB_PRINTER_LANGUAGE_PCL5 == language_id)
	{
		(void)usb_printer_send_data((pointer)&printer_device.CLASS_INTF, 
									 usb_host_printer_send_callback, 
									 NULL, 
									 strlen(PJL_PCL5),
									 (uchar_ptr)PJL_PCL5);
	}
	else if(USB_PRINTER_LANGUAGE_POSTSCRIPT == language_id)
	{
		(void)usb_printer_send_data((pointer)&printer_device.CLASS_INTF, 
									 usb_host_printer_send_callback,
									 NULL, 
									 strlen(PJL_POSTSCRIPT),
									 (uchar_ptr)PJL_POSTSCRIPT);
	}
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	};
	if (bStatus) printf("Init id language ... FAILED \n");
	b_callback = FALSE;
	/* Set font */
	(void)g_printer_language_write((pointer)&printer_device.CLASS_INTF,
		usb_host_printer_send_callback,
		USB_PRINTER_COMMAND_FONT,
		sizeof(USB_PRINTER_FONT_STRUCT),
		(void*)&printer_setup.font_setup);
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	};
	if (bStatus) printf("Set font ... FAILED \n");
	b_callback = FALSE;
	/* Set position */
	(void)g_printer_language_write((pointer)&printer_device.CLASS_INTF,
		usb_host_printer_send_callback,
		USB_PRINTER_COMMAND_SET_POSITION,
		sizeof(USB_PRINER_POSITION_STRUCT),
		(void*)&printer_setup.current_position);
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	};
	if (bStatus) printf("Set position ... FAILED \n");
	b_callback = FALSE;
	/* Set orientation */
	(void)g_printer_language_write((pointer)&printer_device.CLASS_INTF,
		usb_host_printer_send_callback,
		USB_PRINTER_COMMAND_ORIENTATION,
		sizeof(boolean),
		(void*)&printer_setup.page_orientation);
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	};
	if (bStatus) printf("Set orientation ... FAILED \n");
	b_callback = FALSE;
	/* Start text */
	(void)g_printer_language_write((pointer)&printer_device.CLASS_INTF,
		usb_host_printer_send_callback,
		USB_PRINTER_COMMAND_TEXT_START,
		0,
		NULL);
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	};
	if (bStatus) printf("Start text ... FAILED \n");
	b_callback = FALSE;
	/* Print text */
	if(string_printer[0] == 0)
	{
		string_to_print = (char *)default_string;
	} 
	else 
	{
		string_to_print = string_printer;
	}
	/* Send text */
	(void)g_printer_language_write((pointer)&printer_device.CLASS_INTF,
		usb_host_printer_send_callback,
		USB_PRINTER_COMMAND_PRINT_TEXT,
		strlen(string_to_print),
		(void*)string_to_print);
 
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	}
	if (bStatus) printf("Send text ... FAILED \n");
	b_callback = FALSE;
	/* Stop text */
	(void)g_printer_language_write((pointer)&printer_device.CLASS_INTF,
		usb_host_printer_send_callback,
		USB_PRINTER_COMMAND_TEXT_STOP,
		0,
		NULL);
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	};
	if (!bStatus) printf("\nSend COMPLETE! \n\n");
	else printf("\nSend FAILED! \n\n");
	b_callback = FALSE;
	/* Clear all setting */
	(void)g_printer_language_write((pointer)&printer_device.CLASS_INTF,
		usb_host_printer_send_callback,
		USB_PRINTER_COMMAND_EJECT_PAGE,
		0,
		NULL);
	/* Wait for send complete */
	while(b_callback == FALSE){
		Poll();
	};
	if (bStatus) printf("Clear all settings ... FAILED \n");
	b_callback = FALSE;
}

/*FUNCTION*----------------------------------------------------------------
 *
 * Function Name  : usb_host_string_get_field
 * Returned Value : none
 * Comments       :
 *     Get all string fields
 *
 *END*--------------------------------------------------------------------*/
static char* usb_host_string_get_field(char* key, char* string, uint_16* length)
{
    char* p = NULL;
    *length = 0;
    p = strstr(string,key);
    if(NULL != p)
    {
        /* Copy field */
        while((p[*length] != ';'))
        {
            (*length)++;
            if(*length  > strlen(p))
            {
                return NULL;
            }
        };
        return p;
    }
    else
    {
        return NULL;
    }
}

/*FUNCTION*----------------------------------------------------------------
 *
 * Function Name  : usb_host_show_info_device
 * Returned Value : none
 * Comments       :
 *     This function display all information of usb printer device
 *
 *END*--------------------------------------------------------------------*/
void usb_host_show_info_device(void)
{
    /* There are two standards for printer device stringID */
    const char* printer_dev_IDkey[6] = {"MANUFACTURER","COMMAND SET","MODEL","MFG","CMD","MDL"};
    uint_8 i;
    uint_16 length;
    char* str = NULL;
    //char* str_info = NULL;
    /* Show printer device information */
    printf("\n________________PRINTER DEVICE INFORMATION________________\n\n"); 
    for(i = 0 ; i < 6 ; i++)
    {          
        str = usb_host_string_get_field((char*)printer_dev_IDkey[i],(char*)(string_id_buffer+2), &length);
        if(NULL != str)
        {
            strncpy(str_info, str, length);
            str_info[length] = '\0';
            printf("%s\n", str_info);
        }
    }
    printf("__________________________________________________________\n");
}



