/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : usbprv_host.h
**     Project   : ProcessorExpert
**     Processor : MK60FN1M0LQ15
**     Component : USB_HOST_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-11-19, 12:16, # CodeGen: 26
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

#ifndef __usbprv_host_h__
#define __usbprv_host_h__

#include "host_cnfg.h"
#include "hostapi.h"    /* needed for USB_SERVICE_STRUCT_PTR */

enum {
    TR_CTRL,
    TR_IN,
    TR_OUT,
    TR_OUT_HNDSK,
    TR_IN_HNDSK
};

typedef struct pipe_tr_struct {
    /* fields common to both pipe transfer structures and the structures
    * used to initialize new pipe transfer instances.
    */
    TR_INFO_FIELDS
    boolean  SEND_PHASE;
    USB_SETUP   setup_packet;
    uint_32  status;
    struct pipe_tr_struct _PTR_ next;
} PIPE_TR_STRUCT, _PTR_ PIPE_TR_STRUCT_PTR;

typedef struct pipe_descriptor_struct
{
    /* fields common to both pipe descriptors and the structures used to
    * initialize new pipe instances.
    */
    PIPE_INFO_FIELDS

    /* pipe descriptor-specific fields */
    int_16   PIPE_ID;
    boolean  OPEN;
    PIPE_TR_STRUCT_PTR   tr_list_ptr;

    /* driver-specific fields */
    uint_8   NEXTDATA01;

    uint_32 *bd_ptr;     /* pointer to used buffer descriptor */

    uint_32 *ep_ptr;
} PIPE_DESCRIPTOR_STRUCT, _PTR_ PIPE_DESCRIPTOR_STRUCT_PTR;

typedef struct usb_host_state_struct
{
    /* driver-specific fields */
    /* Generic device fields */
    uint_32                             vector;
    boolean                             endian_swap;

    /* Generic USB host controller fields */
    uint_32                             device_type;

    /* Generic USB hub fields */
    uint_32                             num_downstream_ports;
    uint_8                              power_on_to_power_good_time;
    boolean                             no_power_switching;
    uint_8                              power_switching_mode;

    /* fields common to both the VUSB32 and VUSBHS host device drivers */
    uint_32                             FRAME_LIST_SIZE;
    pointer                             DEV_PTR;
    pointer                             DEVICE_LIST_PTR;
    USB_SERVICE_STRUCT_PTR              SERVICE_HEAD_PTR;
    PIPE_DESCRIPTOR_STRUCT_PTR          PIPE_DESCRIPTOR_BASE_PTR;
    pointer                             CALLBACK_STRUCT_PTR;
    uint_8                              DEV_NUM;
    pointer                             DEVICE_INFO_TABLE;

    uint_32 speed;
} USB_HOST_STATE_STRUCT, _PTR_ USB_HOST_STATE_STRUCT_PTR;

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
