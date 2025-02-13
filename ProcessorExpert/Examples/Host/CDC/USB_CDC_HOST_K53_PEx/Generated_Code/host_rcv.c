/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : host_rcv.c
**     Project   : ProcessorExpert
**     Processor : MK53N512LQ100
**     Component : USB_HOST_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-11-19, 12:10, # CodeGen: 18
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

#include "hostapi.h"
#include "usbprv_host.h"
#include "host_rcv.h"

/*
** ===================================================================
**     Method      :  _usb_host_recv_data (component USB_HOST_STACK)
**     Description :
**         
**     Parameters  :
**         NAME            - DESCRIPTION
**         hci_handle      - [IN] the USB Host state
**                           structure
**         pipe_handle     - [IN] the pipe handle
**         tr_params_ptr   - [IN] transfer
**                           parameters
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_host_recv_data(_usb_host_handle hci_handle, _usb_pipe_handle pipe_handle, TR_INIT_PARAM_STRUCT_PTR tr_params_ptr)
{
    PIPE_DESCRIPTOR_STRUCT_PTR pipe_descr_ptr;
    USB_HOST_STATE_STRUCT_PTR usb_host_ptr;
    USB_STATUS status;
/*****************************************************************
CODE FOR ARC FULL SPEED CORE
*****************************************************************/

    PIPE_TR_STRUCT_PTR   pipe_tr_ptr;
    USB_STATUS  return_code;

    USB_lock();

    return_code = _usb_host_set_up_TR(pipe_handle, tr_params_ptr, &pipe_tr_ptr);

    if (return_code != USB_STATUS_TRANSFER_QUEUED) {
        USB_unlock();
        return return_code;
    } /* Endif */

    usb_host_ptr = (USB_HOST_STATE_STRUCT_PTR)hci_handle;
    pipe_descr_ptr = (PIPE_DESCRIPTOR_STRUCT_PTR)pipe_handle;

    /*Must Flush and Invalidate the buffer before sending
/receiving the data in it */
    USB_dcache_invalidate_mlines((void *)pipe_tr_ptr->RX_BUFFER, pipe_tr_ptr->RX_LENGTH);

    /* We have obtained the current TR on the Pipe's TR list
** from _usb_host_set_up_TR
*/

    /* Call the low-level routine to receive data */
    status = _usb_host_recv_data_call_interface (hci_handle, pipe_descr_ptr, pipe_tr_ptr);

    USB_unlock();

    if(status == USB_OK)
    {
        return USB_STATUS_TRANSFER_QUEUED;
    }
    else
    {
        return status;
    }

}

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
