/** ###################################################################
**     THIS USER MODULE IS GENERATED BY THE TOOL. MODIFY IT FOLLOW COMMENTS BELOW.
**     Filename  : usb_classes.c
**     Project   : ProcessorExpert
**     Processor : MCF51JF128_64
**     Component : USB_OTG_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-04-17, 15:31, # CodeGen: 59
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

#include "hostapi.h"
#include "host_ch9.h"
#include "host_common.h"

/* get application-specific configuration */
#include "usb_classes.h"
#include "usb_host_hub.h"
/* End of header definition, DO NOT MODIFY LINES ABOVE */
/* Write your own includes here ...*/
#include "usb_host_hid.h"
/* Begin of class interface map definition, DO NOT MODIFY LINES BELOW*/
CLASS_MAP class_interface_map[] =
{
    {
        usb_class_hid_keyboard_init,
        sizeof(USB_CLASS_HID_KEYBOARD_INTF_STRUCT),
        0x03,
        0x00,
        0x00,
        0xFF,
        0x00,
        0x00,
    },
    {
        usb_class_hub_init,
        sizeof(USB_HUB_CLASS_INTF_STRUCT),
        USB_CLASS_HUB,
        USB_SUBCLASS_HUB_NONE,
        USB_PROTOCOL_HUB_FS,
        0xFF, 0x00, 0x00
    },
    {
        NULL,
        0,
        0, 0, 0,
        0, 0, 0
    }
};
/* End of class interface map definition, DO NOT MODIFY LINES ABOVE*/

/* DO NOT MODIFY LINES BELOW */
/*
** ===================================================================
**     Method      :  usb_otg_usb_class_hid_keyboard_init (component USB_OTG_STACK)
**
**     Description :
**         usb_class_hid_keyboard_init routine
**         Called initialize the class driver
**         for hid_keyboard class.It is called in response to a select
**         interface call by application.
**     Parameters  :
**         NAME            - DESCRIPTION
**         pbs_ptr         - [IN]  structure with USB pipe
**                           information on the interface
**         ccs_ptr         - [IN] hid_keyboard call struct pointer
** ===================================================================
*/
void usb_class_hid_keyboard_init(PIPE_BUNDLE_STRUCT_PTR pbs_ptr, CLASS_CALL_STRUCT_PTR ccs_ptr)
{
/* End <function_begin_1>, DO NOT MODIFY LINES ABOVE */
/* Write your own code of usb_class_hid_keyboard_init function below */
	usb_class_hid_init(pbs_ptr, ccs_ptr);
/* End of <function_end_1>, DO NOT MODIFY LINES BELOW */
} /* End of usb_class_hid_keyboard_init function */
/* DO NOT MODIFY LINES ABOVE */

/*
** ###################################################################
**
**     This file was created by Processor Expert 5.3 [05.01]
**     for the Freescale ColdFirePlus series of microcontrollers.
**
** ###################################################################
*/
