/**HEADER********************************************************************
*
* Copyright (c) 2008 Freescale Semiconductor;
* All Rights Reserved
*
* Copyright (c) 1989-2008 ARC International;
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
* $FileName: cdc_serial.h$
* $Version :
* $Date    :
*
* Comments:
*
*   This file contains cdc-serial types and definitions.
*
*END************************************************************************/
#ifndef __cdc_serial_h__
#define __cdc_serial_h__

/*************************************************************************
* Includes
/*************************************************************************/
#include "hostapi.h"

/*************************************************************************
* Macro's
/*************************************************************************/
/* Used to initialize USB controller */
#define MAX_FRAME_SIZE                    1024
#define HOST_CONTROLLER_NUMBER            (0)
#define USB_DEVICE_IDLE                   (0)
#define USB_DEVICE_ATTACHED               (1)
#define USB_DEVICE_CONFIGURED             (2)
#define USB_DEVICE_SET_INTERFACE_STARTED  (3)
#define USB_DEVICE_INTERFACED             (4)
#define USB_DEVICE_DETACHED               (5)
#define USB_DEVICE_OTHER                  (6)

/*************************************************************************
* Struct definitions
/*************************************************************************/
typedef struct acm_device_struct
{
    CLASS_CALL_STRUCT       CLASS_INTF;
} ACM_DEVICE_STRUCT,        _PTR_ ACM_DEVICE_STRUCT_PTR;

typedef struct data_device_struct {
    CLASS_CALL_STRUCT       CLASS_INTF;
} DATA_DEVICE_STRUCT,       _PTR_ DATA_DEVICE_STRUCT_PTR;

/*************************************************************************
* Global functions
/*************************************************************************/
void CDC_init();
void CDC_Task();
void Poll();
/* Alphabetical list of Function Prototypes */
void usb_host_cdc_acm_app_event(_usb_device_instance_handle,
_usb_interface_descriptor_handle, uint_32);
void usb_host_cdc_data_app_event(_usb_device_instance_handle,
_usb_interface_descriptor_handle, uint_32);

#endif
/* EOF */
