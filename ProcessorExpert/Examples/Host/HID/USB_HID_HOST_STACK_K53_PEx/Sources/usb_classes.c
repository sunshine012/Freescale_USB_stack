/** ###################################################################
**     THIS USER MODULE IS GENERATED BY THE TOOL. MODIFY IT FOLLOW COMMENTS BELOW.
**     Filename  : usb_classes.c
**     Project   : ProcessorExpert
**     Processor : MK53N512LQ100
**     Component : USB_HOST_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-11-16, 15:51, # CodeGen: 19
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

/* Begin of class interface map definition, DO NOT MODIFY LINES BELOW*/
CLASS_MAP class_interface_map[] =
{
    {
        usb_class_hid_mouse_init,
        sizeof(USB_CLASS_HID_MOUSE_INTF_STRUCT),
        0x03,
        0x02,
        0x01,
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
void usb_class_hid_mouse_init(PIPE_BUNDLE_STRUCT_PTR pbs_ptr, CLASS_CALL_STRUCT_PTR ccs_ptr)
{
/* End <function_begin_1>, DO NOT MODIFY LINES ABOVE */
/* Write your own code of usb_class_hid_mouse_init function below */
	usb_class_hid_init(pbs_ptr,ccs_ptr);
/* End of <function_end_1>, DO NOT MODIFY LINES BELOW */
} /* End of usb_class_hid_mouse_init function */
/* DO NOT MODIFY LINES ABOVE */

/*
** ###################################################################
**
**     This file was created by Processor Expert 5.3 [05.01]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
