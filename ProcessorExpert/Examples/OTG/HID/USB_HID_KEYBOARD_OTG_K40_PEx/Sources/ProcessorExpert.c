/** ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MK40DN512ZVMD10
**     Version     : Driver 01.00
**     Compiler    : CodeWarrior ARM C Compiler
**     Date/Time   : 2012-03-05, 11:38, # CodeGen: 5
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "usb_otg.h"
#include "USB_LDD.h"
#include "OTG_MAX3353_INT_PIN.h"
#include "OTG_MAX3353.h"
#include "AS1.h"
#include "PTC5.h"
#include "usb_hid.h"
#include "CsIO1.h"
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
#include "usb_host_hub_sm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Private functions prototypes *********************************************/
static void App_OtgCallback(_usb_otg_handle handle, OTG_EVENT event);
static void App_HandleUserInput(void);
static void App_PrintMenu(void);
static void App_ActiveStackUninit(void);
/* Private variables ********************************************************/
uint_8 buffer[8];/* buffer for receive character from key board */
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
* Function Name  : Main
* Returned Value : none
* Comments       :
*
*
*END*--------------------------------------------------------------------*/
void main(void)
{
    /* Write your local variable definition here */
    USB_STATUS      status = USB_OK;
    /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
    PE_low_level_init();
    /*** End of Processor Expert internal initialization.                    ***/
    /* Write your code here */
    /* For example: for(;;) { } */
    CsIO1_Init();
    USB_lock();

    status = _usb_otg_init(0, (OTG_INIT_STRUCT*)&otg_init, &otg_handle);
    if(status == USB_OK)
    {
       status = _usb_otg_register_callback(otg_handle, App_OtgCallback);
    }    

    USB_unlock();
    
    printf("\n\rInitialization passed. Plug-in HID device to USB port");
    printf("\n\rPress P to print the menu:");

    for(;;) {
    
        _usb_otg_task();
        
        if(dev_stack_active)
        {    
            App_PeripheralTask();
        }
        if(host_stack_active)
        {
            App_Host_Task();
        }
        
        App_HandleUserInput();
    } /* loop forever */
    /* please make sure that you never leave main */
    /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
    /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
    /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
    /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/
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
        printf("\n\r>B: OTG state change to B idle");
        dev_type = dev_b;               /* Device type: B */
        sess_vld = FALSE;           /* session not valid */
    }
    
    if(event == OTG_B_IDLE_SRP_READY)
    {
        printf("\n\r>B: OTG is ready to initialize SRP");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_SRP_INIT)
    {
        printf("\n\r>B: OTG has initialized SRP");
        dev_type = dev_b;               /* Device type: B */
    }    
    
    if(event == OTG_B_SRP_FAIL)
    {
        printf("\n\r>B: OTG SRP failed to get a response from the Host");
        dev_type = dev_b;               /* Device type: B */
    }    
    
    if(event == OTG_B_PERIPHERAL)
    {
        printf("\n\r>B: OTG state change to B peripheral.");
        printf("\n\r>B: USB peripheral stack initialized.");
        dev_type = dev_b;               /* Device type: B */
    
        if(sess_vld == FALSE)
        {
            sess_vld = TRUE;      /* session valid */
        }    
    }
    
    if(event == OTG_B_PERIPHERAL_LOAD_ERROR)    
    {
        printf("\n\r>B: OTG state change to B peripheral.");
        printf("\n\r>B: USB peripheral stack initialization failed.");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_PERIPHERAL_HNP_READY)
    {
        printf("\n\r>B: OTG is ready to initialize HNP. Press SW1 to request the bus.");    
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_PERIPHERAL_HNP_START)
    {
        printf("\n\r>B: OTG has initialized the HNP to request the bus from Host");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_PERIPHERAL_HNP_FAIL)
    {
        printf("\n\r>B: HNP failed. OTG is back into peripheral state");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_HOST)
    {     
        printf("\n\r>B: OTG is in the Host state");
        printf("\n\r>B: USB host stack initialized.");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_HOST_LOAD_ERROR)
    {
        printf("\n\r>B: OTG is in the Host state");
        printf("\n\r>B: USB host stack initialization failed.");
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_B_A_HNP_REQ)
    {
        if(_usb_otg_bus_release(otg_handle) == USB_OK)
        {
            printf("\n\rBus release");
        }
        else
        {
            printf("\n\rError releasing the bus");
        }
        dev_type = dev_b;               /* Device type: B */
    }
    
    if(event == OTG_A_WAIT_BCON_TMOUT)
    {
        printf("\n\r>A: OTG_A_WAIT_BCON_TMOUT");
        _usb_otg_set_a_bus_req(otg_handle , FALSE);
        dev_type = dev_a;               /* Device type: A */
    
    }
    
    if(event == OTG_A_BIDL_ADIS_TMOUT)
    {
        printf("\n\r>A: OTG_A_BIDL_ADIS_TMOUT");
        _usb_otg_set_a_bus_req(otg_handle, TRUE);    
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_AIDL_BDIS_TMOUT)
    {
        printf("\n\r>A: OTG_A_AIDL_BDIS_TMOUT");
        dev_type = dev_a;               /* Device type: A */
    }
    
    
    if(event == OTG_A_ID_TRUE)
    {
        printf("\n\r>A: ID = TRUE ");
        dev_type = dev_a;               /* Device type: A */
    }
    
    
    if(event == OTG_A_WAIT_VRISE_TMOUT)
    {
        printf("\n\r>A: VBUS rise failed");
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_B_HNP_REQ)
    {
        printf("\n\r>A: OTG_A_B_HNP_REQ");
        _usb_otg_set_a_bus_req( handle , FALSE);
        dev_type = dev_a;               /* Device type: A */
    
    }
    
    if(event == OTG_A_IDLE)
    {
        printf("\n\r>A: OTG state change to A_IDLE");
        host_stack_active  = FALSE;
        dev_stack_active = FALSE;
        sess_vld = FALSE;
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_WAIT_VRISE)
    {
        printf("\n\r>A: OTG state change to A_WAIT_VRISE");
        dev_type = dev_a;               /* Device type: A */
    }
    
    if(event == OTG_A_WAIT_BCON)
    {
        printf("\n\r>A: OTG state change to A_WAIT_BCON");
        dev_type = dev_a;               /* Device type: A */
        sess_vld = TRUE;
    }
    
    if(event == OTG_A_HOST)
    {
        dev_type = dev_a;               /* Device type: A */
        printf("\n\r>A: OTG state change to OTG_A_HOST");
        printf("\n\r>A: USB host stack initialized.");
    
    }
    if(event == OTG_A_HOST_LOAD_ERROR)
    {
        dev_type = dev_a;               /* Device type: A */
        printf("\n\r>A: OTG state change to OTG_A_HOST");
        printf("\n\r>A: USB host stack initialization failed.");
    }
    
    if(event == OTG_A_SUSPEND)
    {
        dev_type = dev_a;               /* Device type: A */
        printf("\n\r>A: OTG state change to A_SUSPEND");
    }    
    
    if(event == OTG_A_PERIPHERAL)
    {     
        dev_type = dev_a;               /* Device type: A */
        printf("\n\r>A: OTG state change to A_PERIPHERAL    ");
        printf("\n\r>A: USB peripheral stack initialized.");
    }    
    
    if(event == OTG_A_PERIPHERAL_LOAD_ERROR)
    {
        dev_type = dev_a;               /* Device type: A */
        printf("\n\r>A: USB peripheral stack initialization failed.");
        printf("\n\r>A: OTG state change to A_PERIPHERAL    ");
    }    
    
    if(event == OTG_A_WAIT_VFALL)
    {
        dev_type = dev_a;               /* Device type: A */
        printf("\n\r>A: OTG state change to OTG_A_WAIT_VFALL");
    
        if(vbus_err == TRUE)
        {
            vbus_err = FALSE;
        }
    }
    
    if(event == OTG_A_VBUS_ERR)
    {
        dev_type = dev_a;               /* Device type: A */
        printf("\n\r>A: VBUS falls below VBUS_Valid treshold");
        printf("\n\r>A: OTG state change to A_VBUS_ERR");
        
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
    if (CsIO1_ReadLine((char *)buffer,8)==ERR_OK)
    switch(buffer[0])
    {
        case '1': if(_usb_otg_hnp_enable(0, TRUE) == USB_OK)
            {
                printf("\n\rHNP enabled");
            }
            else
            {
                printf("\n\rError enabling HNP");
            }
        break;
        
        case '2': if(_usb_otg_hnp_enable(0, FALSE) == USB_OK)
            {
            printf("\n\rHNP disabled");
            }
            else
            {
            printf("\n\rError disabling HNP");
            }
        break;
        
        case '3': if(_usb_otg_bus_request(otg_handle) == USB_OK)
            {
            printf("\n\rBus request");
            }
            else
            {
            printf("\n\rError requesting the bus");
            }
        break;
        
        case '4': if(_usb_otg_bus_release(otg_handle) == USB_OK)
            {
            printf("\n\rBus release");
            }
            else
            {
            printf("\n\rError releasing the bus");
            }
        break;
        
        
        case '5': if(_usb_otg_session_request(otg_handle) == USB_OK)
            {
            printf("\n\rSRP request");
            }
            else
            {
            printf("\n\rError rerequesting SRP");
            }
        break;
        
        case '6': _usb_otg_set_a_bus_req(otg_handle , TRUE);
        
            printf("\n\rA BUS REQ");
        
        break;
        case '7': _usb_otg_set_a_bus_req(otg_handle , FALSE);
        
            printf("\n\rA BUS RELEASE");
        break;
        
        case '8': _usb_otg_set_a_bus_drop(otg_handle , TRUE);
        
            printf("\n\rA BUS DROP TRUE");
        break;
        case '9': _usb_otg_set_a_bus_drop(otg_handle , FALSE);
        
            printf("\n\rA BUS DROP FALSE");
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
  printf("\n\r  OTG App User Input Menu");
  if(dev_type == dev_a)
  {
    if(vbus_err == FALSE)
    {
      if(sess_vld == TRUE)
      {
        if(dev_stack_active == TRUE)
        {
          printf("\n\r      6. A Bus request (HNP start)");
        }
        if(host_stack_active == TRUE)
        {
          printf("\n\r      7. A Bus release");
        }
        printf("\n\r      8. A Set Bus Drop TRUE (session end)");
      }
      else  /* session not valid */
      {
        printf("\n\r      9. A Set Bus Drop FALSE");
      }
    }
    else    /* no VBUS error */
    {
      printf("\n\r      8. A Set Bus Drop TRUE (session end)");
      printf("\n\r      a. A Clear Error");
    }
  }
  else if(dev_type == dev_b)
  {
    if(sess_vld == TRUE)
    {
      printf("\n\r      1. B Force HNP enable ON");
      printf("\n\r      2. B Force HNP enable OFF");
      if(dev_stack_active == TRUE)
      {
        printf("\n\r      3. B Bus request (HNP start)");
      }

      if(host_stack_active == TRUE)
      {
        printf("\n\r      4. B Bus release");
      }
    }
    else
    {
      printf("\n\r      5. B Session request (SRP start)");
    }
  }
}
