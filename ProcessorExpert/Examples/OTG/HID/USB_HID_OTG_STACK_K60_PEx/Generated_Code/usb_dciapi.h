/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : usb_dciapi.h
**     Project   : ProcessorExpert
**     Processor : MK60N512MD100
**     Component : USB_OTG_STACK
**     Version   : Driver 01.00, CPU db: 3.00.003
**     Compiler  : CodeWarrior ARM C Compiler
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

#ifndef _USB_DCIAPI_H
#define _USB_DCIAPI_H

/******************************************************************************
* Includes
*****************************************************************************/
#include "psptypes.h"
#include "usb_devapi.h"
/******************************************************************************
* Macro's
*****************************************************************************/
#define MAX_SUPPORTED_ENDPOINTS (USB_SERVICE_MAX_EP + 1)
/* Maximum endpoints supported */
#define MIN_SUPPORTED_ENDPOINTS (1)        /* Minimum endpoints supported */
#define DOUBLE_BUFFERED_ENPOINT_NUMBER (0) /* First double buffered endpoint */

/*****************************************************************************
* Global Functions
*****************************************************************************/
extern uint_8 USB_DCI_Init(
uint_8    controller_ID
);

extern uint_8 USB_DCI_DeInit(void);

extern uint_8 USB_DCI_Init_EndPoint(
uint_8                  controller_ID,
USB_EP_STRUCT_PTR       ep_ptr,
boolean                 double_buffered
);

extern uint_8 USB_DCI_Init_EndPoint(
uint_8                  controller_ID,
USB_EP_STRUCT_PTR       ep_ptr,
boolean                 flag
);

extern uint_8 USB_DCI_Cancel_Transfer(
uint_8                  controller_ID,
uint_8                  ep_num,
uint_8                  direction
);

extern uint_8 USB_DCI_Deinit_EndPoint(
uint_8                  controller_ID,
uint_8                  ep_num,
uint_8                  direction
);

extern void USB_DCI_Stall_EndPoint(
uint_8                  controller_ID,
uint_8                  ep_num,
uint_8                  direction
);

extern void USB_DCI_Unstall_EndPoint(
uint_8                  controller_ID,
uint_8                  ep_num,
uint_8                  direction
);

extern void USB_DCI_Get_Setup_Data(
uint_8                  controller_ID,
uint_8                  ep_num,
uchar_ptr               buff_ptr
);

extern uint_8 USB_DCI_Get_Transfer_Status(
uint_8                  controller_ID,
uint_8                  ep_num,
uint_8                  direction
);

extern uint_8 USB_DCI_Recv_Data(
uint_8                  controller_ID,
uint_8                  ep_num,
uchar_ptr               buff_ptr,
USB_PACKET_SIZE         size
);

extern uint_8 USB_DCI_Send_Data(
uint_8                  controller_ID,
uint_8                  ep_num,
uchar_ptr               buff_ptr,
USB_PACKET_SIZE         size
);

extern void  USB_DCI_Set_Address(
uint_8                  controller_ID,
uint_8                  address
);

extern void USB_DCI_Shutdown(
uint_8                  controller_ID
);

extern void USB_DCI_Assert_Resume(
uint_8                  controller_ID
);

extern void Clear_Mem(uint_8* start_addr,uint_32 count, uint_8 val);

#define USB_DCI_Cancel_Transfer _usb_device_cancel_transfer

#define USB_DCI_Recv_Data _usb_device_recv_data

#define USB_DCI_Send_Data _usb_device_send_data

#define USB_DCI_Shutdown _usb_device_shutdown

#define USB_DCI_Stall_EndPoint _usb_device_stall_endpoint

#define USB_DCI_Unstall_EndPoint _usb_device_unstall_endpoint

#define USB_DCI_Get_Transfer_Status _usb_device_get_transfer_status

#define USB_DCI_Get_Setup_Data _usb_device_read_setup_data

#define USB_DCI_Set_Address _usb_device_set_address

#define USB_DCI_Assert_Resume _usb_device_assert_resume
#endif
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
