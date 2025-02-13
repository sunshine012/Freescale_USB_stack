/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : usb_host_hub.h
**     Project   : ProcessorExpert
**     Processor : MK60FN1M0LQ15
**     Component : USB_HOST_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-11-19, 13:19, # CodeGen: 28
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

#ifndef __usb_host_hub_h__
#define __usb_host_hub_h__

/* System Include files */
#include "usb.h"
#include "hostapi.h"
#include "host_ch9.h"
#include "host_dev_list.h"
#include "host_common.h"
#include "usbprv.h"

#define  USB_CLASS_HUB              9
#define  USB_SUBCLASS_HUB_NONE      0
#define  USB_PROTOCOL_HUB_LS        0
#define  USB_PROTOCOL_HUB_FS        0
#define  USB_PROTOCOL_HUB_HS_SINGLE 1
#define  USB_PROTOCOL_HUB_HS_MULTI  2

/*
** HUB Class Interface structure. This structure will be passed to
** all commands to this class driver.
*/
typedef struct {
    /* Each class must start with a GENERAL_CLASS struct */
    GENERAL_CLASS                             G;

    /* Pipes */
    _usb_pipe_handle                          P_CONTROL;
    _usb_pipe_handle                          P_INT_IN;
    /* Is command used? (only 1 command can be issued at one time) */
    boolean                                   IN_SETUP;
    /* Only 1 interrupt pipe can be opened at one time */
    boolean                                   INT_PIPE;

    /* Higher level callback and parameter */
    tr_callback                               USER_CALLBACK;
    pointer                                   USER_PARAM;
} USB_HUB_CLASS_INTF_STRUCT, _PTR_ USB_HUB_CLASS_INTF_STRUCT_PTR;

/* Class specific functions exported by hub class driver */
#ifdef __cplusplus
extern "C" {
#endif

extern void usb_class_hub_init(PIPE_BUNDLE_STRUCT_PTR, CLASS_CALL_STRUCT_PTR);

#ifdef __cplusplus
}
#endif

#endif
