/**HEADER********************************************************************
* 
* Copyright (c) 2010 Freescale Semiconductor;
* All Rights Reserved
*
*************************************************************************** 
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR 
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
* THE POSSIBILITY OF SUCH DAMAGE.
*
**************************************************************************
*
* $FileName: host_close.c$
* $Version : 3.4.11.0$
* $Date    : Sep-10-2009$
*
* Comments:
*
*   This file contains the USB Host API specific functions to close pipe(s).
*
*END************************************************************************/
#include "hostapi.h"
#include "user_config.h"
#if HIGH_SPEED_DEVICE
#include "ehci_usbprv_host.h"
#else
#include "usbprv_host.h"
#endif
#include "host_close.h"


/*FUNCTION*-------------------------------------------------------------
*
*  Function Name  : _usb_host_close_pipe
*  Returned Value : None
*  Comments       :
*        _usb_host_close_pipe routine removes the pipe from the open pipe list
*
*END*-----------------------------------------------------------------*/
USB_STATUS _usb_host_close_pipe
   (
      /* [IN] the USB Host state structure */
      _usb_host_handle     hci_handle,
      
      /* [IN] the pipe (handle) to close */
      _usb_pipe_handle     pipe_handle
   )
{ /* Body */
   USB_STATUS error;
   USB_HOST_STATE_STRUCT_PTR usb_host_ptr;
   PIPE_DESCRIPTOR_STRUCT_PTR pipe_descr_ptr;

   usb_host_ptr = (USB_HOST_STATE_STRUCT_PTR)hci_handle;
   UNUSED(usb_host_ptr);
   pipe_descr_ptr = (PIPE_DESCRIPTOR_STRUCT_PTR)pipe_handle;

   if (pipe_descr_ptr->PIPE_ID > USBCFG_MAX_PIPES) {
      return USBERR_INVALID_PIPE_HANDLE;
   } /* Endif */

   USB_lock();

   /* Call the low-level routine to free the controller specific resources */
   error = _usb_host_close_pipe_call_interface (hci_handle, pipe_descr_ptr);
   
   if (error != USB_OK)
   {
      USB_unlock();

      return error;
   }
   
   /* before cleaning pipe_ptr struct we need to deallocate structures */
   if(pipe_descr_ptr->tr_list_ptr != NULL)
   {
      PIPE_TR_STRUCT_PTR tr_ptr, tr_ptr_next;
      tr_ptr = pipe_descr_ptr->tr_list_ptr;
      do
      {
         tr_ptr_next = tr_ptr->next;      
         USB_mem_free(tr_ptr);
         tr_ptr = tr_ptr_next;         
       }
      while(tr_ptr != pipe_descr_ptr->tr_list_ptr);         
   }

   /* de-initialise the pipe descriptor */
   USB_mem_zero(pipe_descr_ptr, sizeof(PIPE_DESCRIPTOR_STRUCT));

   USB_unlock();

   return USB_OK;

} /* Endbody */

/*FUNCTION*-------------------------------------------------------------
*
*  Function Name  : _usb_host_close_all_pipes
*  Returned Value : None
*  Comments       :
*  _usb_host_close_all_pipes routine removes the pipe from the open pipe list
*
*END*-----------------------------------------------------------------*/
void  _usb_host_close_all_pipes
   (
      /* [IN] the USB Host state structure */
      _usb_host_handle  hci_handle
   )
{ /* Body */
   int_16 i;
   USB_HOST_STATE_STRUCT_PTR usb_host_ptr;
   
   usb_host_ptr = (USB_HOST_STATE_STRUCT_PTR)hci_handle;

   USB_lock();

   for (i=0; i < USBCFG_MAX_PIPES; i++) {
      if (!(usb_host_ptr->PIPE_DESCRIPTOR_BASE_PTR[i].OPEN)) {
         break;
      } else {
         /* Call the low-level routine to free the controller specific 
         ** resources for this pipe 
         */
         _usb_host_close_pipe_call_interface (hci_handle,
            &usb_host_ptr->PIPE_DESCRIPTOR_BASE_PTR[i]);

         /* de-initialise the pipe descriptor */
         USB_mem_zero(&usb_host_ptr->PIPE_DESCRIPTOR_BASE_PTR[i], sizeof(PIPE_DESCRIPTOR_STRUCT));
      } /* Endif */
   } /* Endfor */
   
   USB_unlock();
} /* Endbody */

/* EOF */


   

