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
* $FileName: hidkeyboard.c$
* $Version : 
* $Date    : Jan-09-2013$
*
* Comments:
*END************************************************************************/
/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "usb_otg.h"
#include "USB_LDD.h"
#include "OTG_MAX3353_INT_PIN.h"
#include "OTG_MAX3353.h"
#include "PTC5.h"
#include "CsIO1.h"
#include "UART_PDD.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "stdio.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "types.h"
#include "usb.h"
#include "usbprv.h"
#include "host_common.h"
#include "usb_otg_main.h"
#include "usb_otg_max3353.h"
#include "IO_Map.h"
#include "usb_devapi.h"
#include "usb_dci.h"
#include "khci.h"
#include "usb_hid.h"        /* USB-HID class Header File */
#include "keyboard_dev.h"   /* Device Keyboard Application Header File */
#include "keyboard_host.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mqx_tasks.h"
/* Private functions prototypes *********************************************/
static void App_OtgCallback(_usb_otg_handle handle, OTG_EVENT event);
static void App_HandleUserInput(void);
static void App_PrintMenu(void);
static void App_ActiveStackUninit(void);
/* Private variables ********************************************************/
/* buffer for receive character from key board */
uint_8 buffer[8];
extern LDD_TDeviceData  *USB_LDD_DevDataPtr;
/* OTG initialization structure */
static const OTG_INIT_STRUCT otg_init=
{
 TRUE,                           /* Use external circuit */
 _otg_max3353_enable_disable,
 _otg_max3353_get_status,
 _otg_max3353_get_interrupts,
 _otg_max3353_set_VBUS,
 _otg_max3353_set_pdowns,
 App_Host_Init,
 App_PeripheralInit,
 App_Host_Shut_Down,
 App_PeripheralUninit,
 App_ActiveStackUninit
};

typedef enum
{
  dev_b = 0,
  dev_a
} dev_type_t;

_usb_otg_handle   otg_handle;
uint_8            host_stack_active = FALSE;  /* TRUE if the host stack is active */
uint_8            dev_stack_active = FALSE;   /* TRUE if the peripheral stack is active */
dev_type_t        dev_type;           /* dev_type = 0 (device B); dev_type = 1 (device A) */
boolean           sess_vld;           /* TRUE if session is valid */
boolean           vbus_err;           /* VBUS overcurrent */

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : otg_task_init
* Returned Value : none
* Comments       :
*
*
*END*--------------------------------------------------------------------*/
void otg_task_init(uint32_t task_init_data)
{
    /* Write your local variable definition here */
	uint_8 status = USB_OK;
    USB_lock();
	status = _usb_otg_init(0, (OTG_INIT_STRUCT*)&otg_init, &otg_handle);    
	if(status == USB_OK)
    {
       status = _usb_otg_register_callback(otg_handle, App_OtgCallback);
    }    
    USB_unlock();
    printf(" Initialization passed. Plug-in HID device to USB port\n");
    printf(" Press P to print the menu:\n");
    for(;;) {
        App_HandleUserInput();
    } /* loop forever */
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : App_ActiveStackUninit
* Returned Value : none
* Comments       :
*
*
*END*--------------------------------------------------------------------*/
static void App_ActiveStackUninit(void)
{
    if(dev_stack_active)
    {
        App_PeripheralUninit();
    }
    if(host_stack_active)
    {
        App_Host_Shut_Down();
    }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : App_OtgCallback
* Returned Value : none
* Comments       :
*
*
*END*--------------------------------------------------------------------*/
void App_OtgCallback(_usb_otg_handle handle, OTG_EVENT event)
{
    (void)handle; /* not used */        
    
    if(event == OTG_B_IDLE)
    {
        printf(" >B: OTG state change to B idle\n\n");
        dev_type = dev_b;               /* Device type: B */
        sess_vld = FALSE;           /* session not valid */
    }
    
    if(event == OTG_B_IDLE_SRP_READY)
    {
        printf(" >B: OTG is ready to initialize SRP\n\n");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_SRP_INIT)
    {
        printf(" >B: OTG has initialized SRP\n\n");
        dev_type = dev_b;               /* Device type: B */
    }    
    
    if(event == OTG_B_SRP_FAIL)
    {
        printf(" >B: OTG SRP failed to get a response from the Host\n\n");
        dev_type = dev_b;               /* Device type: B */
    }    
    
    if(event == OTG_B_PERIPHERAL)
    {
        printf(" >B: OTG state change to B peripheral.\n");
        printf(" >B: USB peripheral stack initialized.\n");
        dev_type = dev_b;               /* Device type: B */
    
        if(sess_vld == FALSE)
        {
            sess_vld = TRUE;      /* session valid */
        }    
    }
    
    if(event == OTG_B_PERIPHERAL_LOAD_ERROR)    
    {
        printf(" >B: OTG state change to B peripheral.\n");
        printf(" >B: USB peripheral stack initialization failed.\n");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_PERIPHERAL_HNP_READY)
    {
        printf(" >B: OTG is ready to initialize HNP. Press SW1 to request the bus.\n");    
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_PERIPHERAL_HNP_START)
    {
        printf(" >B: OTG has initialized the HNP to request the bus from Host\n");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_PERIPHERAL_HNP_FAIL)
    {
        printf(" >B: HNP failed. OTG is back into peripheral state\n");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_HOST)
    {     
        printf(" >B: OTG is in the Host state\n");
        printf(" >B: USB host stack initialized.\n");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_HOST_LOAD_ERROR)
    {
        printf(" >B: OTG is in the Host state\n");
        printf(" >B: USB host stack initialization failed.\n");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_A_HNP_REQ)
    {
        if(_usb_otg_bus_release(otg_handle) == USB_OK)
        {
            printf(" Bus release\n");
        }
        else
        {
            printf(" Error releasing the bus\n");
        }
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_A_WAIT_BCON_TMOUT)
    {
        printf(" >A: OTG_A_WAIT_BCON_TMOUT\n");
        _usb_otg_set_a_bus_req(otg_handle , FALSE);
        dev_type = dev_a;               /* Device type: A */
    
    }
    
    if(event == OTG_A_BIDL_ADIS_TMOUT)
    {
        printf(" >A: OTG_A_BIDL_ADIS_TMOUT\n");
        _usb_otg_set_a_bus_req(otg_handle, TRUE);    
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_AIDL_BDIS_TMOUT)
    {
        printf(" >A: OTG_A_AIDL_BDIS_TMOUT\n");
        dev_type = dev_a;               /* Device type: A */
    }
    
    
    if(event == OTG_A_ID_TRUE)
    {
        printf(">A: ID = TRUE \n");
        dev_type = dev_a;               /* Device type: A */
    }
    
    
    if(event == OTG_A_WAIT_VRISE_TMOUT)
    {
        printf(">A: VBUS rise failed\n");
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_B_HNP_REQ)
    {
        printf(">A: OTG_A_B_HNP_REQ\n");
        _usb_otg_set_a_bus_req( handle , FALSE);
        dev_type = dev_a;               /* Device type: A */
    
    }
    
    if(event == OTG_A_IDLE)
    {
        printf(">A: OTG state change to A_IDLE\n");
        host_stack_active  = FALSE;
        dev_stack_active = FALSE;
        sess_vld = FALSE;
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_WAIT_VRISE)
    {
        printf(">A: OTG state change to A_WAIT_VRISE\n");
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_WAIT_BCON)
    {
        printf(">A: OTG state change to A_WAIT_BCON\n");
        dev_type = dev_a;               /* Device type: A */
        sess_vld = TRUE;
    }
    
    if(event == OTG_A_HOST)
    {
        dev_type = dev_a;               /* Device type: A */
        printf(">A: OTG state change to OTG_A_HOST\n");
        printf(">A: USB host stack initialized.\n");
    
    }
    if(event == OTG_A_HOST_LOAD_ERROR)
    {
        dev_type = dev_a;               /* Device type: A */
        printf(">A: OTG state change to OTG_A_HOST\n");
        printf(">A: USB host stack initialization failed.\n");
    }
    
    if(event == OTG_A_SUSPEND)
    {
        dev_type = dev_a;               /* Device type: A */
        printf(">A: OTG state change to A_SUSPEND\n");
    }    
    
    if(event == OTG_A_PERIPHERAL)
    {     
        dev_type = dev_a;               /* Device type: A */
        printf(">A: OTG state change to A_PERIPHERAL    \n");
        printf(">A: USB peripheral stack initialized.\n");
    }    
    
    if(event == OTG_A_PERIPHERAL_LOAD_ERROR)
    {
        dev_type = dev_a;               /* Device type: A */
        printf(">A: USB peripheral stack initialization failed.\n");
        printf(">A: OTG state change to A_PERIPHERAL    \n");
    }    
    
    if(event == OTG_A_WAIT_VFALL)
    {
        dev_type = dev_a;               /* Device type: A */
        printf(">A: OTG state change to OTG_A_WAIT_VFALL\n");
    
        if(vbus_err == TRUE)
        {
            vbus_err = FALSE;
        }
    }
    
    if(event == OTG_A_VBUS_ERR)
    {
        dev_type = dev_a;               /* Device type: A */
        printf(">A: VBUS falls below VBUS_Valid treshold\n");
        printf(">A: OTG state change to A_VBUS_ERR\n");
        
        vbus_err = TRUE;
    }     
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : App_HandleUserInput
* Returned Value : none
* Comments       :
*
*
*END*--------------------------------------------------------------------*/
static void App_HandleUserInput(void)
{
	*buffer = getchar();
    switch(buffer[0])
    {
        case '1': if(_usb_otg_hnp_enable(0, TRUE) == USB_OK)
            {
                printf("HNP enabled\n");
            }
            else
            {
                printf("Error enabling HNP\n");
            }
        break;
        
        case '2': if(_usb_otg_hnp_enable(0, FALSE) == USB_OK)
            {
            printf("HNP disabled\n");
            }
            else
            {
            printf("Error disabling HNP\n");
            }
        break;
        
        case '3': if(_usb_otg_bus_request(otg_handle) == USB_OK)
            {
            printf("Bus request\n");
            }
            else
            {
            printf("Error requesting the bus\n");
            }
        break;
        
        case '4': if(_usb_otg_bus_release(otg_handle) == USB_OK)
            {
            printf("Bus release\n");
            }
            else
            {
            printf("Error releasing the bus\n");
            }
        break;
        
        
        case '5': if(_usb_otg_session_request(otg_handle) == USB_OK)
            {
            printf("SRP request\n");
            }
            else
            {
            printf("Error rerequesting SRP\n");
            }
        break;
        
        case '6': _usb_otg_set_a_bus_req(otg_handle , TRUE);
        
            printf("A BUS REQ\n");
        
        break;
        case '7': _usb_otg_set_a_bus_req(otg_handle , FALSE);
        
            printf("A BUS RELEASE\n");
        break;
        
        case '8': _usb_otg_set_a_bus_drop(otg_handle , TRUE);
        
            printf("A BUS DROP TRUE\n");
        break;
        case '9': _usb_otg_set_a_bus_drop(otg_handle , FALSE);
        
            printf("A BUS DROP FALSE\n");
        break;
        case 'a':
        case 'A':
            _usb_otg_set_a_clear_err(otg_handle);
        break;
        
        case 'p':
        case 'P': App_PrintMenu();
        break;
        default: break;
    }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : App_PrintMenu
* Returned Value : none
* Comments       :
*
*
*END*--------------------------------------------------------------------*/
static void App_PrintMenu(void)
{
  printf("  OTG App User Input Menu\n");
  if(dev_type == dev_a)
  {
    if(vbus_err == FALSE)
    {
      if(sess_vld == TRUE)
      {
        if(dev_stack_active == TRUE)
        {
          printf("      6. A Bus request (HNP start)\n");
        }
        if(host_stack_active == TRUE)
        {
          printf("      7. A Bus release\n");
        }
        printf("      8. A Set Bus Drop TRUE (session end)\n");
      }
      else  /* session not valid */
      {
        printf("      9. A Set Bus Drop FALSE\n");
      }
    }
    else    /* no VBUS error */
    {
      printf("      8. A Set Bus Drop TRUE (session end)\n");
      printf("      a. A Clear Error\n");
    }
  }
  else if(dev_type == dev_b)
  {
    if(sess_vld == TRUE)
    {
      printf("      1. B Force HNP enable ON\n");
      printf("      2. B Force HNP enable OFF\n");
      if(dev_stack_active == TRUE)
      {
        printf("      3. B Bus request (HNP start)\n");
      }

      if(host_stack_active == TRUE)
      {
        printf("      4. B Bus release\n");
      }
    }
    else
    {
      printf("      5. B Session request (SRP start)\n");
    }
  }
}
