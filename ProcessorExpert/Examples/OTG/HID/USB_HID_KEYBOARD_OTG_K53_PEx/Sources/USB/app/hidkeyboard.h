#ifndef __hidkeyboard_h__
#define __hidkeyboard_h__
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
* $FileName: hidkeyboard.h$
* $Version : 3.4.3.0$
* $Date    : Aug-19-2009$
*
* Comments:
*
*   This file contains keyboard-application types and definitions.
*
*END************************************************************************/
/* Application-specific definitions */
/* Used to initialize USB controller */
#define MAX_FRAME_SIZE                     (1024)
#define HOST_CONTROLLER_NUMBER             (0)
#define HID_BUFFER_SIZE                    (8)
#define USB_DEVICE_IDLE                    (0)
#define USB_DEVICE_ATTACHED                (1)
#define USB_DEVICE_CONFIGURED              (2)
#define USB_DEVICE_SET_INTERFACE_STARTED   (3)
#define USB_DEVICE_INTERFACED              (4)
#define USB_DEVICE_SETTING_PROTOCOL        (5)
#define USB_DEVICE_INITIALIZED             (6)
#define USB_DEVICE_START_RECEIVE           (7)
#define USB_DEVICE_WAIT_RECEIVE_EVENT      (8)
#define USB_DEVICE_DETACHED                (9)
#define USB_DEVICE_OTHER                   (10)

/*
** Following structs contain all states and pointers
** used by the application to control/operate devices.
*/
typedef struct device_struct {
    uint_32                          DEV_STATE;  /* Attach/detach state */
    _usb_device_instance_handle      DEV_HANDLE;
    _usb_interface_descriptor_handle INTF_HANDLE;
    CLASS_CALL_STRUCT                CLASS_INTF; /* Class-specific info */
} DEVICE_STRUCT,  _PTR_ DEVICE_STRUCT_PTR;

/* Alphabetical list of Function Prototypes */
#ifdef __cplusplus
extern "C" {
#endif
    void usb_host_hid_recv_callback(_usb_pipe_handle, pointer, uchar_ptr, uint_32,
    uint_32);
    void usb_host_hid_ctrl_callback(_usb_pipe_handle, pointer, uchar_ptr, uint_32,
    uint_32);
    void usb_host_hid_keyboard_app_event(_usb_device_instance_handle,
    _usb_interface_descriptor_handle, uint_32);
#ifdef __cplusplus
}
#endif
#endif
/* EOF */
