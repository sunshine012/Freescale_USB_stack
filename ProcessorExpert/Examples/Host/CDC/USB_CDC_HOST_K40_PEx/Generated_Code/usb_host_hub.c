/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : usb_host_hub.c
**     Project   : ProcessorExpert
**     Processor : MK40N512LQ100
**     Component : USB_HOST_STACK
**     Version   : Driver 01.00, CPU db: 3.00.001
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-11-19, 12:03, # CodeGen: 21
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

#include "usb_host_hub.h"
#include "usb_host_hub_prv.h"

static USB_HUB_CLASS_INTF_STRUCT_PTR hub_anchor = NULL;

/*
** ===================================================================
**     Method      :  usb_class_hub_init (component USB_HOST_STACK)
**     Description :
**         This function is called by common class to initialize the
**         class driver. It is called in response to a select interface
**         call by application
**     Parameters  :
**         NAME            - DESCRIPTION
**         pbs_ptr         - [IN] structure with USB pipe
**                           information on the interface
**         ccs_ptr         - [IN] hub call struct pointer
**     Returns     : Nothing
** ===================================================================
*/
void usb_class_hub_init(PIPE_BUNDLE_STRUCT_PTR pbs_ptr, CLASS_CALL_STRUCT_PTR ccs_ptr)
{
    /* Body */
    USB_STATUS                    status;
    USB_HUB_CLASS_INTF_STRUCT_PTR if_ptr = ccs_ptr->class_intf_handle;

    /* Make sure the device is still attached */

    status = usb_host_class_intf_init(pbs_ptr, if_ptr, &hub_anchor);
    if (status == USB_OK) {
        /*
    ** We generate a code_key based on the attached device. This is used to
    ** verify that the device has not been detached and replaced with another.
    */
        ccs_ptr->code_key = 0;
        ccs_ptr->code_key = usb_host_class_intf_validate(ccs_ptr);

        if_ptr->P_CONTROL = usb_hostdev_get_pipe_handle(pbs_ptr, USB_CONTROL_PIPE,
        0);
        if_ptr->P_INT_IN = usb_hostdev_get_pipe_handle(pbs_ptr,
        USB_INTERRUPT_PIPE, USB_RECV);
    } /* Endif */

    /* Signal that an error has occured by setting the "code_key" to 0 */
    if (status || !if_ptr->P_INT_IN || !if_ptr->P_CONTROL) {
        ccs_ptr->code_key = 0;
    } /* Endif */
}

/*
** ===================================================================
**     Method      :  usb_class_hub_cntrl_callback (component USB_HOST_STACK)
**     Description :
**         
**     Parameters  :
**         NAME            - DESCRIPTION
**       * pipe            - [IN] Unused
**       * param           - [IN] Pointer to the class interface
**                           instance
**         buffer          - [IN] Data buffer
**         len             - [IN] Length of buffer
**         status          - 
**     Returns     : Nothing
** ===================================================================
*/
void usb_class_hub_cntrl_callback(void* pipe, void* param, uchar_ptr buffer, uint_32 len, USB_STATUS status)
{

    USB_HUB_CLASS_INTF_STRUCT_PTR      if_ptr;

    /*
** There is need for USB_lock in the callback function, and there is also no
** need to check if the device is still attached (otherwise this callback
** would never have been called!
*/

    /* Get class interface handle, reset IN_SETUP and call callback */
    if_ptr = (USB_HUB_CLASS_INTF_STRUCT_PTR)param;

    if_ptr->IN_SETUP = FALSE;

    if (if_ptr->USER_CALLBACK) {
        if_ptr->USER_CALLBACK(pipe, if_ptr->USER_PARAM, buffer, len, status);
    }
}

/*
** ===================================================================
**     Method      :  usb_class_hub_cntrl_common (component USB_HOST_STACK)
**     Description :
**          This function is used to send a control request
**     Parameters  :
**         NAME            - DESCRIPTION
**         com_ptr         - [IN] The communication device
**                           common command structure
**         bmrequesttype   - [IN] Bitmask of the
**                           request type
**         brequest        - [IN] Request code
**         wvalue          - [IN] Value to copy into WVALUE field
**                           of the REQUEST
**         windex          - [IN] Length of the data associated
**                           with REQUEST
**         wlength         - [IN] Index field of CTRL packet
**         data            - [IN] Pointer to data buffer used to
**                           send/recv
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
USB_STATUS usb_class_hub_cntrl_common(HUB_COMMAND_PTR com_ptr, uint_8 bmrequesttype, uint_8 brequest, uint_16 wvalue, uint_16 windex, uint_16 wlength, uchar_ptr data)
{
    USB_HUB_CLASS_INTF_STRUCT_PTR    if_ptr;
    USB_SETUP                        req;
    USB_STATUS                       status = USBERR_NO_INTERFACE;

    USB_lock();
    /* Validity checking */
    if (usb_host_class_intf_validate(com_ptr->CLASS_PTR)) {
        if_ptr =
        (USB_HUB_CLASS_INTF_STRUCT_PTR)com_ptr->CLASS_PTR->class_intf_handle;
        status = usb_hostdev_validate(if_ptr->G.dev_handle);
    }

    if (!status && if_ptr->IN_SETUP) {
        status = USBERR_TRANSFER_IN_PROGRESS;
    }

    if (!status) {
        /* Save the higher level callback and ID */
        if_ptr->USER_CALLBACK = com_ptr->CALLBACK_FN;
        if_ptr->USER_PARAM = com_ptr->CALLBACK_PARAM;

        /* Setup the request */
        req.BMREQUESTTYPE = bmrequesttype;
        req.BREQUEST = brequest;
        htou16(req.WVALUE, wvalue);
        htou16(req.WINDEX, windex);
        htou16(req.WLENGTH, wlength);
        status = _usb_hostdev_cntrl_request(if_ptr->G.dev_handle, &req, data,
        usb_class_hub_cntrl_callback, if_ptr);
        if (status == USB_STATUS_TRANSFER_QUEUED) {
            if_ptr->IN_SETUP = TRUE;
        }
    }
    USB_unlock();

    return status;
}

/*
** ===================================================================
**     Method      :  usb_class_hub_get_descriptor (component USB_HOST_STACK)
**     Description :
**         This function is called by the application to read the
**         descriptor of hub device
**     Parameters  :
**         NAME            - DESCRIPTION
**         com_ptr         - [IN] The communication device
**                           common command structure
**         buffer          - [IN] descriptor buffer
**         len             - [IN] buffer length (or, better said, how
**                           many bytes to read)
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
USB_STATUS usb_class_hub_get_descriptor(HUB_COMMAND_PTR com_ptr, uchar_ptr buffer, uchar len)
{
    /* Body */
    USB_STATUS error = USB_OK;

    USB_lock();

    error = usb_class_hub_cntrl_common(
    com_ptr,
    REQ_TYPE_DEVICE | REQ_TYPE_IN | REQ_TYPE_CLASS,
    REQ_GET_DESCRIPTOR,
    0,
    0,
    len,
    buffer
    );

    USB_unlock();

    return error;
}

/*
** ===================================================================
**     Method      :  usb_class_hub_set_port_feature (component USB_HOST_STACK)
**     Description :
**         Sets feature of specified hub port
**     Parameters  :
**         NAME            - DESCRIPTION
**         com_ptr         - [IN] Class Interface structure
**                           pointer
**         port_nr         - [IN] port number
**         feature         - [IN] feature ID
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
USB_STATUS usb_class_hub_set_port_feature(HUB_COMMAND_PTR com_ptr, uint_8 port_nr, uint_8 feature)
{
    return usb_class_hub_cntrl_common(com_ptr,
    REQ_TYPE_OUT | REQ_TYPE_CLASS | REQ_TYPE_INTERFACE | REQ_TYPE_ENDPOINT,
    REQ_SET_FEATURE,
    feature,
    port_nr,
    0,
    NULL);
}

/*
** ===================================================================
**     Method      :  usb_class_hub_clear_port_feature (component USB_HOST_STACK)
**     Description :
**         Clears feature of selected hub port
**     Parameters  :
**         NAME            - DESCRIPTION
**         com_ptr         - [IN] Class Interface structure
**                           pointer
**         port_nr         - [IN] port number
**         feature         - [IN] feature ID
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
USB_STATUS usb_class_hub_clear_port_feature(HUB_COMMAND_PTR com_ptr, uint_8 port_nr, uint_8 feature)
{
    return usb_class_hub_cntrl_common(com_ptr,
    REQ_TYPE_OUT | REQ_TYPE_CLASS | REQ_TYPE_INTERFACE | REQ_TYPE_ENDPOINT,
    REQ_CLEAR_FEATURE,
    feature,
    port_nr,
    0,
    NULL);
}

/*
** ===================================================================
**     Method      :  usb_class_hub_get_port_status (component USB_HOST_STACK)
**     Description :
**         Gets the status of specified port
**     Parameters  :
**         NAME            - DESCRIPTION
**         com_ptr         - [IN] Class Interface structure
**                           pointer
**         port_nr         - [IN] port number
**         buffer          - [IN] status buffer
**         len             - [IN] buffer length (or, better said, how
**                           many bytes to read)
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
USB_STATUS usb_class_hub_get_port_status(HUB_COMMAND_PTR com_ptr, uint_8 port_nr, uchar_ptr buffer, uchar len)
{
    return usb_class_hub_cntrl_common(com_ptr,
    REQ_TYPE_IN | REQ_TYPE_CLASS | REQ_TYPE_INTERFACE | REQ_TYPE_ENDPOINT,
    REQ_GET_STATUS,
    0,
    port_nr,
    len,
    buffer);
}

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
