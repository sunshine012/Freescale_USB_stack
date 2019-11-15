/**HEADER********************************************************************
*
* Copyright (c) 2010 Freescale Semiconductor;
* All Rights Reserved
*
* Copyright (c) 1989-2010 ARC International;
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
* $FileName: device_driver_info.c
* $Version :
* $Date    :
*
* Comments:
*
*   The contents of this file is the device driver table
*
*END************************************************************************/
/*************************************************************************
* Includes
**************************************************************************/
#include "device_driver_info.h"
#include "cdc_serial.h"

/* Table of driver capabilities this application wants to use */
const USB_HOST_DRIVER_INFO DriverInfoTable[] =
{
    {
        {0x00,0x00},                   /* Vendor ID per USB-IF             */
        {0x00,0x00},                   /* Product ID per manufacturer      */
        0x02,                          /* Class code                       */
        0x02,                          /* Sub-Class code                   */
        0x00,                          /* Protocol                         */
        0,                             /* Reserved                         */
        usb_host_cdc_acm_app_event         /* Application call back function   */
    },
    {
        {0x00,0x00},                   /* Vendor ID per USB-IF             */
        {0x00,0x00},                   /* Product ID per manufacturer      */
        0x00A,                         /* Class code                       */
        0x00,                          /* Sub-Class code                   */
        0x00,                          /* Protocol                         */
        0,                             /* Reserved                         */
        usb_host_cdc_data_app_event        /* Application call back function   */
    },
    {
        {0x00,0x00},                   /* All-zero entry terminates        */
        {0x00,0x00},                   /* driver info list.                */
        0,
        0,
        0,
        0,
        NULL
    }
};

/*EOF*/
