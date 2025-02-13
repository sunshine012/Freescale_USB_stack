/** ###################################################################
**     THIS USER MODULE IS GENERATED BY THE TOOL. MODIFY IT FOLLOW COMMENTS BELOW.
**     Filename  : usb_classes.c
**     Project   : ProcessorExpert
**     Processor : MKL25Z128LK4
**     Component : USB_HOST_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-12-27, 14:36, # CodeGen: 33
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
/* End of header definition, DO NOT MODIFY LINES ABOVE */
/* Write your own includes here ...*/
#include "usb_host_printer.h"
/* Begin of class interface map definition, DO NOT MODIFY LINES BELOW*/
CLASS_MAP class_interface_map[] =
{
    {
        usb_class_printer_init,
        sizeof(USB_CLASS_PRINTER_INTF_STRUCT),
        0x07,
        0x01,
        0x02,
        0xFF,
        0xFF,
        0xFF,
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
void usb_class_printer_init(PIPE_BUNDLE_STRUCT_PTR pbs_ptr, CLASS_CALL_STRUCT_PTR ccs_ptr)
{
/* End <function_begin_1>, DO NOT MODIFY LINES ABOVE */
/* Write your own code of usb_class_printer_init function below */
	usb_printer_init(pbs_ptr, ccs_ptr);
/* End of <function_end_1>, DO NOT MODIFY LINES BELOW */
} /* End of usb_class_printer_init function */
/* DO NOT MODIFY LINES ABOVE */

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
