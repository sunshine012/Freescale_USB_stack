#ifndef __printer_h__
#define __printer_h__
/**HEADER********************************************************************
* 
* Copyright (c) 2010 Freescale Semiconductor;
* All Rights Reserved
*
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
* $FileName: printer.h$
* $Version :
* $Date    :
*
* Comments:
*
*   This file contains printer-application types and definitions.
*
*END************************************************************************/
/* INCLUDE *---------------------------------------------------------------*/
#include "host_dev_list.h"
#include "host_common.h"
#include "mqxlite.h"
#include "psptypes.h"
#include "lwevent.h"
#include "usb_printer_language_common.h"

/* Macro *-----------------------------------------------------------------*/
/* Used to initialize USB controller */
#define MAX_FRAME_SIZE                    1024
#define HOST_CONTROLLER_NUMBER            0

#define USB_DEVICE_IDLE                   (0)
#define USB_DEVICE_ATTACHED               (1)
#define USB_DEVICE_CONFIGURED             (2)
#define USB_DEVICE_SET_INTERFACE_STARTED  (3)
#define USB_DEVICE_INTERFACED             (4)
#define USB_DEVICE_SETTING_PROTOCOL       (5)
#define USB_DEVICE_INUSE                  (6)
#define USB_DEVICE_DETACHED               (7)
#define USB_DEVICE_OTHER                  (8)

#define USB_EVENT_CTRL                    (0x01)
#define USB_EVENT_DATA                    (0x02)
#define MAX_SUPPORTED_USAGE_ID            (45)
#define USB_PRINTER_DEVICE_ID_MAX_SIZE    (305)

/* Macro max value */
#define APP_MAX_SIZE_FONT                          4
#define APP_MAX_SIZE_NUMBER                        5
#define APP_MAX_SIZE_POSITION                      5
#define APP_MAX_SIZE_STRING_PRINT                  100
#define APP_MAX_SIZE_STRING_LANGUAGE               30
#define APP_MAX_NUMBER_LANGUAGE_DIVICE             6

/* Struct definitions *----------------------------------------------------*/
typedef struct _usb_printer_setup{
    /* Cursor */
    USB_PRINER_POSITION_STRUCT      current_position;
    /* Font */
    USB_PRINTER_FONT_STRUCT         font_setup;
    /* Page orientation: True = Landscape, False = Portrait */  
    boolean                         page_orientation;
}USB_PRINTER_HOST_SETUP, _PTR_ PTR_USB_PRINTER_HOST_SETUP;
/* Device struct */
typedef struct device_struct {
    uint_32                          DEV_STATE;  /* Attach/detach state */
    _usb_device_instance_handle      DEV_HANDLE;
    _usb_interface_descriptor_handle INTF_HANDLE;
    CLASS_CALL_STRUCT                CLASS_INTF; /* Class-specific info */
}DEVICE_STRUCT,  _PTR_ DEVICE_STRUCT_PTR;

#ifdef __cplusplus
extern "C" {
#endif
/* Global function prototypes *---------------------------------------------*/
void usb_host_printer_recv_callback(_usb_pipe_handle, pointer, uchar_ptr, uint_32,
    uint_32);
void usb_host_printer_send_callback(_usb_pipe_handle, pointer, uchar_ptr, uint_32,
    uint_32);
void usb_host_printer_ctrl_callback(_usb_pipe_handle, pointer, uchar_ptr, uint_32,
    uint_32);
void usb_host_printer_event(_usb_device_instance_handle,
    _usb_interface_descriptor_handle, uint_32);
void Printer_Task(uchar_ptr);
void usb_host_show_info_device(void);
void printer_init();
#ifdef __cplusplus
}
#endif

#endif
/* EOF */





