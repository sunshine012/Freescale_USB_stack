/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : usb_framework.h
**     Project   : ProcessorExpert
**     Processor : MCF51JF128_64
**     Component : USB_DEVICE_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-11-19, 11:05, # CodeGen: 12
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/
#ifndef _USB_FRAMEWORK_H
#define _USB_FRAMEWORK_H
#include "types.h"
#include "usb_class.h"
#include "usb_descriptor.h"

/******************************************************************************
 * Macro's
 *****************************************************************************/
#define MAX_STRD_REQ                        (13)  /* Max value of standard request */
/* size of data to be returned for various Get Desc calls */
#define DEVICE_STATUS_SIZE                  (2)
#define INTERFACE_STATUS_SIZE               (1)
#define CONFIG_SIZE                         (1)
#define FRAME_SIZE                          (2)
#define ENDP_STATUS_SIZE                    (2)


#define DEVICE_FEATURE_REMOTE_WAKEUP        (0x0001)
#define DEVICE_SET_FEATURE_MASK             ((uint_16)(1<<(DEVICE_FEATURE_REMOTE_WAKEUP)))
#define DEVICE_CLEAR_FEATURE_MASK           ((uint_16)(1<<(DEVICE_FEATURE_REMOTE_WAKEUP)))


#define REPORT_DESCRIPTOR_TYPE              (0x22)
#define STRING_DESCRIPTOR_TYPE              (0x03)

/* masks and values for provides of Get Desc information */
#define USB_REQUEST_SRC_MASK                (0x03)
#define USB_REQUEST_SRC_DEVICE              (0x00)
#define USB_REQUEST_SRC_INTERFACE           (0x01)
#define USB_REQUEST_SRC_ENDPOINT            (0x02)

#define  USB_SET_REQUEST_MASK               (0x02)

/* wIndex values for GET_Status */

/* for transfer direction check */
#define USB_DATA_TO_HOST                    (0x80)
#define USB_DATA_TO_DEVICE                  (0x00)
#define USB_DATA_DIREC_MASK                 (0x80)

#define USB_uint_16_low(x)                  ((uint_8)x)       /* lsb byte */
#define USB_uint_16_high(x)                 ((uint_8)(x>>8))  /* msb byte */

#define BYTE_SWAP16(a)                      (uint_16)((((uint_16)(a)&0xFF00)>>8) | \
                                            (((uint_16)(a)&0x00FF)<<8))

/******************************************************************************
 * Types
 *****************************************************************************/

/******************************************************************************
 * Global Functions
 *****************************************************************************/
extern boolean USB_Frame_Remote_Wakeup(uint_8 controller_ID);

#define USB_Frame_Remote_Wakeup USB_Desc_Remote_Wakeup
uint_8 USB_Framework_Init(uint_8 controller_ID, USB_CLASS_CALLBACK class_callback, USB_REQ_FUNC other_req_callback);
/*
** ===================================================================
**     Method      :  usb_device_USB_Framework_Init (component USB_DEVICE_STACK)
**
**     Description :
**         This fuction registers the service on the control endpoint
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN] Controller ID
**         class_callback  - Class Callback
**         other_req_callback - Other
**                           Request Callback
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint_8 USB_Framework_DeInit(uint_8 controller_ID);
/*
** ===================================================================
**     Method      :  usb_device_USB_Framework_DeInit (component USB_DEVICE_STACK)
**
**     Description :
**         The funtion De-initializes the Class Module
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN] Controller ID
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint_8 USB_Framework_Reset(uint_8 controller_ID);
/*
** ===================================================================
**     Method      :  usb_device_USB_Framework_Reset (component USB_DEVICE_STACK)
**
**     Description :
**         This function is used to reset the framework module
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN] Controller ID
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

#endif
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale ColdFirePlus series of microcontrollers.
**
** ###################################################################
*/

