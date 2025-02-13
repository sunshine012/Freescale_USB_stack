/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : device_driver_info.c
**     Project   : ProcessorExpert
**     Processor : MCF51JF128_64
**     Component : USB_AUDIO_CLASS
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/
/* Begin of code block <0>  auto generated code, DO NOT MODIFY LINES BELOW */
#include "device_driver_info.h"
#include "usb_host_hub_sm.h"
/* End code block <0>  auto generated code, DO NOT MODIFY LINES ABOVE */

/* Write your own includes here ... */
#include "audio.h"
/* Begin of code block <1>  auto generated code, DO NOT MODIFY LINES BELOW */
/* Table of driver capabilities this application wants to use */
const USB_HOST_DRIVER_INFO DriverInfoTable[] =
{
    {
        {0x00,0x00},                   /* Vendor ID per USB-IF             */
        {0x00,0x00},                   /* Product ID per manufacturer      */
        0x01,                          /* Class code                       */
        0x01,                          /* Sub-Class code                   */
        0x00,                          /* Protocol                         */
        0,                             /* Reserved                         */
        usb_host_audio_control_event   /* Application call back function   */
    },
    {
        {0x00,0x00},                   /* Vendor ID per USB-IF             */
        {0x00,0x00},                   /* Product ID per manufacturer      */
        0x01,                          /* Class code                       */
        0x02,                          /* Sub-Class code                   */
        0x00,                          /* Protocol                         */
        0,                             /* Reserved                         */
        usb_host_audio_stream_event    /* Application call back function   */
    },
    {
        {0x00,0x00},                   /* Vendor ID per USB-IF             */
        {0x00,0x00},                   /* Product ID per manufacturer      */
        USB_CLASS_HUB,                 /* Class code                       */
        USB_SUBCLASS_HUB_NONE,         /* Sub-Class code                   */
        USB_PROTOCOL_HUB_LS,           /* Protocol                         */
        0,                             /* Reserved                         */
        usb_host_hub_device_event      /* Application call back function   */
    },
    {
        {0x00,0x00},                   /* All-zero entry terminates        */
        {0x00,0x00},                   /* driver info list.                */
        0,
        0,
        0,
        0,
        NULL
    }
};
/* End code block <1>  auto generated code, DO NOT MODIFY LINES ABOVE */

/* Write code here ... */
/* Application call back function   */

/*
** ===================================================================
**     Method      :  usb_host_audio_usb_host_audio_control_event (component USB_AUDIO_CLASS)
**
**     Description :
**         The funtion initializes the Device and Controller layer
**     Parameters  :
**         NAME            - DESCRIPTION
**         dev_handle      - [IN] pointer to device instance
**         intf_handle     - [IN] pointer to interface descriptor
**         event_code      - [IN] code number for event causing callback
**     Returns     :
** ===================================================================
*/
/* Begin of code block <2>  auto generated code, DO NOT MODIFY LINES BELOW */
void usb_host_audio_control_event
(
/* [IN] pointer to device instance */
_usb_device_instance_handle      dev_handle,
/* [IN] pointer to interface descriptor */
_usb_interface_descriptor_handle intf_handle,
/* [IN] code number for event causing callback */
uint_32                          event_code
)
{
/* End code block <2>, DO NOT MODIFY LINES ABOVE */
/* Write your own code of usb_host_audio_control_event function below */
	usb_host_audio_control_app_event(dev_handle,intf_handle,event_code);
/* End of code block <3>, DO NOT MODIFY THE LINE BELOW */
} /* End of usb_host_audio_control_event function */
/* DO NOT MODIFY LINES ABOVE */

/*
** ===================================================================
**     Method      :  usb_host_audio_usb_host_audio_stream_event (component USB_AUDIO_CLASS)
**
**     Description :
**         The funtion initializes the Device and Controller layer
**     Parameters  :
**         NAME            - DESCRIPTION
**         dev_handle      - [IN] pointer to device instance
**         intf_handle     - [IN] pointer to interface descriptor
**         event_code      - [IN] code number for event causing callback
**     Returns     :
** ===================================================================
*/
/* Begin of code block <4>  auto generated code, DO NOT MODIFY LINES BELOW */
void usb_host_audio_stream_event
(
/* [IN] pointer to device instance */
_usb_device_instance_handle      dev_handle,
/* [IN] pointer to interface descriptor */
_usb_interface_descriptor_handle intf_handle,
/* [IN] code number for event causing callback */
uint_32                          event_code
)
{
/* End code block <4>, DO NOT MODIFY LINES ABOVE */
/* Write your own code of usb_host_audio_stream_event function below */
	usb_host_audio_stream_app_event(dev_handle,intf_handle, event_code);
/* End of code block <5>, DO NOT MODIFY THE LINE BELOW */
} /* End of usb_host_audio_stream_event function */
/* DO NOT MODIFY LINES ABOVE */

/*
** ###################################################################
**
**     This file was created by Processor Expert 5.3 [05.01]
**     for the Freescale ColdFirePlus series of microcontrollers.
**
** ###################################################################
*/
/*EOF*/
