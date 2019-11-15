/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2004-2010 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
**************************************************************************//*!
*
* @file keyboard_dev_kinetis.c
*
* @author
*
* @version
*
* @date
*
* @brief  The file emulates a keyboard
*         4 buttons are used on the demo board for the emulation
*         PTG0--------- Page Up (For JS16 PTG0 is inactive)
*         PTG1--------- Page Down
*         PTG2--------- Space Bar
*         PTG3--------- Print Screen
*
*****************************************************************************/

/******************************************************************************
* Includes
*****************************************************************************/
#include "types.h"      /* User Defined Data-types */
#include "IO_Map.h"
#include "usb_hid.h"    /* USB-HID class Header File */
#include "keyboard_dev.h"   /* Keyboard Application Header File */
#include "usb_dciapi.h" /* USB DCI API Header File */
#include "user_config.h"

/* skip the inclusion in dependency statge */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*****************************************************************************
* Constant and Macro's - None
*****************************************************************************/
#define TIMER_NOT_STARTED      0xFF

/*****************************************************************************
* Global Functions Prototypes
*****************************************************************************/
void TestApp_Init(void);
/****************************************************************************
* Global Variables - None
****************************************************************************/
extern uint_8       host_stack_active; /* TRUE if the host stack is active */
extern uint_8       dev_stack_active;  /* TRUE if the peripheral stack is active */
/*****************************************************************************
* Local Types - None
*****************************************************************************/

/*****************************************************************************
* Local Functions Prototypes
*****************************************************************************/
static void USB_App_Callback(uint_8 controller_ID,uint_8 event_type,void* val);
static uint_8 USB_App_Param_Callback(uint_8 request,uint_16 value,uint_8_ptr* data,USB_PACKET_SIZE* size);

/*****************************************************************************
* Local Variables
*****************************************************************************/
static boolean      keyboard_init=FALSE;              /* Keyboard App Init Flag */
static uint_8       rpt_buf[KEYBOARD_BUFF_SIZE];      /* Key Press Report Buffer */
static uint_8       null_buf[KEYBOARD_BUFF_SIZE];     /* Key Release Report Buffer */
static uint_8       g_app_request_params[2];          /* for get/set idle and
                                                      protocol requests */

/*****************************************************************************
* Local Functions
*****************************************************************************/
/******************************************************************************
* @name:         KeyBoard_Events_Process
*
* @brief:        This function gets the input from keyboard, the keyboard
*                does not include the code to filter the glitch on keys since
*                it is just for demo
*
* @param:        None
*
* @return:       None
*
*****************************************************************************
* This function sends the keyboard data depending on which key is pressed on
* the board
*****************************************************************************/
void KeyBoard_Events_Process(void)
{
	rpt_buf[2] = KEY_PAGEUP;
    (void)USB_Class_HID_Send_Data(CONTROLLER_ID,HID_ENDPOINT,&rpt_buf[0],KEYBOARD_BUFF_SIZE);	
    
    /* send null buffer */
    *((uint_32_ptr)null_buf) = 0;
    (void)USB_Class_HID_Send_Data(CONTROLLER_ID,HID_ENDPOINT,null_buf,KEYBOARD_BUFF_SIZE);
}

/******************************************************************************
*
*    @name        USB_App_Callback
*
*    @brief       This function handles USB Class callback
*
*    @param       controller_ID    : Controller ID
*    @param       event_type       : value of the event
*    @param       val              : gives the configuration value
*
*    @return      None
*
*****************************************************************************
* This function is called from the class layer whenever reset occurs or enum
* is complete. After the enum is complete this function sets a variable so
* that the application can start
*****************************************************************************/
static void USB_App_Callback (
    uint_8 controller_ID, /* [IN] Controller ID */
    uint_8 event_type,    /* [IN] value of the event */
    void* val             /* [IN] gives the configuration value */
)
{
    UNUSED (controller_ID)
    UNUSED (val)
    if((event_type == USB_APP_BUS_RESET) || (event_type == USB_APP_CONFIG_CHANGED))
    {
        keyboard_init=FALSE;
    }
    else if(event_type == USB_APP_ENUM_COMPLETE)
    {   /* if enumeration is complete set keyboard_init
        so that application can start */
        keyboard_init=TRUE;
    }
    else if(event_type == USB_APP_ERROR)
    {
        /* user may add code here for error handling */
    }

    return;
}

/******************************************************************************
*
*    @name        USB_App_Param_Callback
*
*    @brief       This function handles USB-HID Class callback
*
*    @param       request  :  request type
*    @param       value    :  give report type and id
*    @param       data     :  pointer to the data
*    @param       size     :  size of the transfer
*
*    @return      status
*                 USB_OK   :  Always
*
*****************************************************************************
* This function is called whenever a HID class request is received. This
* function handles these class requests.
*****************************************************************************/
static uint_8 USB_App_Param_Callback (
    uint_8 request,        /* [IN] request type */
    uint_16 value,         /* [IN] report type and ID */
    uint_8_ptr* data,      /* [OUT] pointer to the data */
    USB_PACKET_SIZE* size  /* [OUT] size of the transfer */
)
{
    uint_8 status = USB_OK;
    uint_8 index = (uint_8)((request - 2) & USB_HID_REQUEST_TYPE_MASK);
    /* index == 0 for get/set idle,
                                            index == 1 for get/set protocol
                                        */
    *size =0;
    /* handle the class request */
    switch(request)
    {
    case USB_HID_GET_REPORT_REQUEST :
        *data = &rpt_buf[0]; /* point to the report to send */
        *size = KEYBOARD_BUFF_SIZE; /* report size */
        break;

    case USB_HID_SET_REPORT_REQUEST :
        for(index = 0; index < KEYBOARD_BUFF_SIZE ; index++)
        {   /* copy the report sent by the host */
            rpt_buf[index] = *(*data + index);
        }
        *size = 0;
        break;

    case USB_HID_GET_IDLE_REQUEST :
        /* point to the current idle rate */
        *data = &g_app_request_params[index];
        *size = REQ_DATA_SIZE;
        break;

    case USB_HID_SET_IDLE_REQUEST :
        /* set the idle rate sent by the host */
        if(index <2)
        {
            g_app_request_params[index] =(uint_8)((value & MSB_MASK) >>
            HIGH_BYTE_SHIFT);
        }
        break;

    case USB_HID_GET_PROTOCOL_REQUEST :
        /* point to the current protocol code
            0 = Boot Protocol
            1 = Report Protocol*/
        *data = &g_app_request_params[index];
        *size = REQ_DATA_SIZE;
        break;

    case USB_HID_SET_PROTOCOL_REQUEST :
        /* set the protocol sent by the host
                0 = Boot Protocol
                1 = Report Protocol*/
        if(index < 2)
        {
            g_app_request_params[index] = (uint_8)(value);
        }
        break;
    }
    return status;
}

/******************************************************************************
*
*   @name        App_PeripheralInit
*
*   @brief       This function is the entry for Keyboard Application (Peripheral)
*
*   @param       None
*
*   @return      None
*
*****************************************************************************
* This function starts the keyboard application
*****************************************************************************/
uint_32 App_PeripheralInit(void)
{
    uint_32 error, i;
    host_stack_active  = FALSE;
    dev_stack_active = TRUE;
        
    /* Disable all interrupt */
    USB_lock();
    /* Set pull-up resistor for InPut-pin: PTE26 */  
    PORTE_PCR26 |= PORT_PCR_PE_MASK|PORT_PCR_PS_MASK;
    
    /* Initialize the USB interface */
    error = (uint_32)USB_Class_HID_Init(CONTROLLER_ID, USB_App_Callback,
    NULL, USB_App_Param_Callback);
    
    /* Enable all interrupt */
    USB_unlock();
    return error;
}

/******************************************************************************
*
*   @name        App_PeripheralUninit
*
*   @brief       This function is the entry for Keyboard Application (Peripheral)
*
*   @param       None
*
*   @return      None
*
*****************************************************************************
* This function starts the keyboard application
*****************************************************************************/
void App_PeripheralUninit(void)
{
	USB_lock();
    /* Uninitialize the USB interface */
    USB_DCI_DeInit();
    USB_unlock();
    host_stack_active  = FALSE;
    dev_stack_active = FALSE;
}

/******************************************************************************
*
*   @name        App_PeripheralTask
*
*   @brief       Application task function. It is called from the main loop
*
*   @param       None
*
*   @return      None
*
*****************************************************************************
* Application task function. It is called from the main loop
*****************************************************************************/
void App_PeripheralTask(void)
{
}
