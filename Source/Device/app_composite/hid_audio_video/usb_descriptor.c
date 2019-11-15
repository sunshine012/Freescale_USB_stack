/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2004-2010 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
**************************************************************************//*!
*
* @file usb_descriptor.c
*
* @author
*
* @version
*
* @date
*
* @brief The file contains USB descriptors for Video Application
*
*****************************************************************************/

/******************************************************************************
* Includes
*****************************************************************************/
#include "types.h"
#include "user_config.h"
#include "usb_class.h"
#include "usb_descriptor.h"
#include "usb_composite.h"

#ifndef __NO_SETJMP
#include <stdio.h>
#endif
#include <stdlib.h>
#include <string.h>


#if (defined __MCF52xxx_H__)|| (defined __MK_xxx_H__)
/* Put CFV2 descriptors in RAM */
#define USB_DESC_CONST
#else
#define USB_DESC_CONST    const
#endif

/*****************************************************************************
* Constant and Macro's
*****************************************************************************/

/* structure containing details of all the endpoints used by this device */
uint_8 usb_hid_class_info[] =
{
    /* Class type */
    HID_CC,
    /* Endpoint count */
    1,
    /* Hid endpoint */
    HID_ENDPOINT,
    USB_INTERRUPT_PIPE,
    USB_SEND,
    USB_uint_16_high(HID_ENDPOINT_PACKET_SIZE),
    USB_uint_16_low(HID_ENDPOINT_PACKET_SIZE),
    /* Interface count */
    1,
    /* Interface number */
    4,
};

uint_8 usb_audio_class_info[] =
{
    /* Class type */
    AUDIO_CC,
    /* Endpoint count */
    1,
    /* Audio endpoint */
    AUDIO_ENDPOINT,
    USB_ISOCHRONOUS_PIPE,
    USB_RECV,
    USB_uint_16_high(AUDIO_ENDPOINT_PACKET_SIZE),
    USB_uint_16_low(AUDIO_ENDPOINT_PACKET_SIZE),
    /* Interface count */
    2,
    /* Interface number */
    2,
    3,
};

uint_8 usb_video_class_info[] =
{
    /* Class type */
    VIDEO_CC,
    /* Endpoint count */
    1,
    /* Video endpoint */
    VIDEO_ENDPOINT,
    USB_ISOCHRONOUS_PIPE,
    USB_SEND,
    USB_uint_16_high(VIDEO_ENDPOINT_PACKET_SIZE),
    USB_uint_16_low(VIDEO_ENDPOINT_PACKET_SIZE),
    /* Interface count */
    2,
    /* Interface number */
    0,
    1,
};


DEV_ARCHITECTURE_STRUCT usb_dev_arc =
{
    COMP_CLASS_UNIT_COUNT,
    COMPOSITE_DESC_ENDPOINT_COUNT,
    {
        (uint_8 *)&usb_hid_class_info,

        (uint_8 *)&usb_video_class_info,

        (uint_8 *)&usb_audio_class_info,
    }

};

/* *********************************************************************
* definition a struct of Input Terminal, Output Terminal or Feature Unit
************************************************************************ */

/* Struct of Input Terminal, Output Terminal or Feature Unit */
USB_DESC_CONST USB_AUDIO_UNITS usb_audio_unit =
{
    AUDIO_UNIT_COUNT,
    {
        {0x01,AUDIO_CONTROL_INPUT_TERMINAL},
        {0x02,AUDIO_CONTROL_FEATURE_UNIT},
        {0x03,AUDIO_CONTROL_OUTPUT_TERMINAL},
    }
};
USB_DESC_CONST USB_VIDEO_UNITS usb_video_unit =
{
    VIDEO_UNIT_COUNT,
    {
        {0x04,VC_INPUT_TERMINAL},
        {0x05,VC_PROCESSING_UNIT},
        {0x06,VC_OUTPUT_TERMINAL},
    }
};

uint_8 USB_DESC_CONST g_device_descriptor[DEVICE_DESCRIPTOR_SIZE] =
{
    /* Device Descriptor */
    DEVICE_DESCRIPTOR_SIZE,               /* "Device Descriptor Size        */
    USB_DEVICE_DESCRIPTOR,                /* "Device" Type of descriptor    */
    0x00, 0x02,                           /*  BCD USB version               */
    0xEF,                                 /*  Miscellaneous Device Class    */
    0x02,                                 /*  Common Class  */
    0x01,                                 /*  Inteface Association Descriptor */
    CONTROL_MAX_PACKET_SIZE,              /*  Control endpoint packet size is 8 bytes */
    0xA2,0x15,                            /*  Vendor ID                     */
    0x0b,0x0E,                            /*  Product ID                    */
    0x00,0x03,                            /*  BCD Device version            */
    0x01,                                 /*  Manufacturer string index     */
    0x02,                                 /*  Product string index          */
    0x00,                                 /*  Serial number string index    */
    0x01                                  /*  Number of configurations      */
};

uint_8 USB_DESC_CONST g_config_descriptor[CONFIG_DESC_SIZE] =
{
    /* Configuration Descriptor */
    CONFIG_ONLY_DESC_SIZE,               /* Size of this desciptor in bytes */
    USB_CONFIG_DESCRIPTOR,               /* DEVICE descriptor */
    /* Length of total configuration block */
    USB_uint_16_low(CONFIG_DESC_SIZE), USB_uint_16_high(CONFIG_DESC_SIZE),
    USB_MAX_SUPPORTED_INTERFACES,                                /* This device has two interface */
    0x01,                                /* ID of this configuration */
    0x00,                                /* Unused */
    0x80,                                /* Bus-powered device, no remote wakeup */
    0xFA,                                /* 500mA maximum power consumption */

    /* Interface Association Descriptor */
    IAD_DESC_SIZE,                       /* Size of this descriptor */
    USB_IFACE_ASSOCIATION_DESCRIPTOR,    /* INTERFACE ASSOCIATION Descriptor */
    0x00,                                /* Interface number ofthe VideoControl
                                            interface that is associated with this function */
    0x02,                                /* Number of contiguous Video interfaces
                                            that are associated with this function */
    VIDEO_CC,                            /* VIDEO_CC */
    0x03,                                /* SC_VIDEO_INTERFACE_COLLECTION */
    0x00,                                /* Not used */
    0x02,                                /* Index to string descriptor */

    /* Standard VC Interface Descriptor */
    IFACE_ONLY_DESC_SIZE,                /* Size of this descriptor */
    INTERFACE_DESC,                      /* INTERFACE descriptor type */
    0x00,                                /* Index of this interface */
    0x00,                                /* Index of this setting */
    0x01,                                /* 1 endpoint (interrupt endpoint) */
    VIDEO_CC,                            /* VIDEO_CC */
    0x01,                                /* SC_VIDEOCONTROL */
    0x00,                                /* Not used, PC_PROTOCOOL_UNDEFINED */
    0x02,                                /* Index of this string descriptor */

    /* Class-specific VC Inteface Descriptor */
    VC_HEADER_ONLY_DESC_SIZE,            /* Size of this descriptor */
    CS_INTERFACE,                        /* CS_INTERFACE */
    VC_HEADER,                           /* VC_HEADER subtype */
    0x00,0x01,                           /* Revision of class specification */
    0x32,0x00,                           /* Total size of class-specific descriptor */
    0x80,0x8D,0x5B,0x00,                 /* This device will provide timestamps and
                                            and a device clock reference based on 6MHz clock */
    0x01,                                /* Number of streaming interfaces */
    0x01,                                /* VideoStreaming interface 1 belongs to
                                            this VideoControl interface */

    /* Input Terminal Descriptor (Camera) */
    VIDEO_INPUT_TERMINAL_ONLY_DESC_SIZE,      /* Size of this descriptor */
    CS_INTERFACE,                         /* CS_INTERFACE */
    VC_INPUT_TERMINAL,                 /* VIDEO_INPUT_TERMINAL subtype */
    0x04,                                 /* ID of this input terminal */
    0x01,0x02,                            /* ITT_CAMERA type. This terminal is a
                                        /* Camera terminal representing the CCD sensor */
    0x00,                                 /* No association */
    0x00,                                 /* Unused */
    0x00,0x00,                            /* No optical zoom supported */
    0x00,0x00,                            /* No optical zoom supported */
    0x00,0x00,                            /* No optical zoom supported */
    0x02,                                 /* The size of bmControls is 2 bytes */
    0x00,0x00,                            /* No controls are supported */

    /* Output Terminal Descriptor */
    VIDEO_OUTPUT_TERMINAL_ONLY_DESC_SIZE,     /* Size of this descriptor */
    CS_INTERFACE,                         /* CS_INTERFACE */
    VC_OUTPUT_TERMINAL,                   /* VIDEO_OUTPUT_TERMINAL */
    0x06,                                 /* ID of this descriptor */
    0x01,0x01,                            /* TT_STREAMING type.
                                            This terminal is a USB streaming terminal */
    0x00,                                 /* No association */
    0x05,                                 /* The input pin of this unit */
    0x00,                                 /* Unused */

    /* Processing Uint Descriptor */
    PROCESSING_UNIT_ONLY_DESC_SIZE,       /* Size of this descriptor */
    CS_INTERFACE,                         /* CS_INTERFACE */
    VC_PROCESSING_UNIT,                   /* VIDEO_PROCESSING_UNIT */
    0x05,                                 /* ID of this unit */
    0x04,                                 /* This input pin of this is connected to
                                        /*  unit with ID 0x04 */
    0x00,0x00,                            /* unused */
    0x02,                                 /* Size of the bmControls field */
    0x01,0x00,                            /* Brightness control supported */
    0x00,                                 /* Unused */

    /* Standard Interrupt Endpoint Descriptor */
    INTERRUPT_ENDPOINT_DESC_SIZE,         /* Size of this descriptor */
    USB_ENDPOINT_DESCRIPTOR,              /* ENDPOINT descriptor */
    0x81,                                 /* IN endpoint 1 */
    0x03,                                 /* Interrupt transfer type */
    0x08,0x00,                            /* 8 byte status packet */
    0x20,                                 /* Poll at lease every 32ms */

    /* Standard VS Interface Descriptor */
    IFACE_ONLY_DESC_SIZE,                 /* Size */
    INTERFACE_DESC,                       /* INTERFACE descriptor type */
    0x01,                                 /* Index of this interface */
    0x00,                                 /* Index of this alternate setting */
    0x00,                                 /* 0 endpoints - no bandwidth used */
    VIDEO_CC,                             /* VIDEO_CC */
    SC_VIDEOSTREAMING,                    /* SC_VIDEOSTREAMING */
    PC_PROTOCOL_UNDEFINED,                /* PC_PROTOCOL_UNDEFINED */
    0x00,                                 /* Unused */

    /* Class-specific VS Header Descriptor (Input) */
    0x0E,                                 /* Size */
    CS_INTERFACE,                         /* CS_INTERFACE */
    VS_INPUT_HEADER,                      /* VS_INPUT_HEADER */
    0x01,                                 /* One format descriptor follows */
    0x3F,0x00,                            /* Total size of class-specific VideoStream
                                            interface descriptor */
    0x82,                                 /* Address of the isochronous endpoint
                                            used for video data */
    0x00,                                 /* No dynamic format change supported */
    0x06,                                 /* This Video Stream interface supplies
                                            terminal ID 3 (Output Terminal)*/
    0x00,                                 /* Device supports still image capture method 1 */
    0x00,                                 /* Hardware trigger supported for still image capture */
    0x00,                                 /* Hardware trigger should initiate a still image capture */
    0x01,                                 /* Size of the bmaControls field */
    0x00,                                 /* No VideoStreaming specific controls are supported */

    /* Class-specifc VS Format Descriptor */
    0x0B,                                 /* Size */
    CS_INTERFACE,                         /* CS_INTERFACE */
    0x06,                                 /* VS_FORMAT_MJEG */
    0x01,                                 /* First (and only) format descriptor */
    0x01,                                 /* One frame descriptor for this format follows */
    0x01,                                 /* Used fixed size samples */
    0x01,                                 /* Default frame index is 1 */
    0x00,                                 /* Non-interlaced stream - not required */
    0x00,                                 /* Non-interlaced stream - not required */
    0x00,                                 /* Non-interlaced stream */
    0x00,                                 /* No restrictions imposed on
                                            the duplication of this video stream*/

    /* Class-specific VS Frame Descriptor */
    SPECIFIC_VS_FRAME_DESC_SIZE,          /* Size */
    CS_INTERFACE,                         /* CS_INTERFACE */
    VS_FRAME_MJPEG,                       /* VS_FRAME_MJPEG */
    0x01,                                 /* First (and only) frame descriptor */
    0x00,                                 /* Still images using capture method 1 are
                                        /*  supported at this frame setting.*/
    /*  D1: Fixed frame-rate*/
    0xB0,0x00,                            /* Width of frame is 176 pixels */
    0x90,0x00,                            /* Height of frame is 144 pixels */

    0x00,0x09,0x3D,0x00,                  /* Min bit rate in bits/s */
    0x00,0x09,0x3D,0x00,                  /* Max bit rate in bits/s */

    0x80,0x94,0x00,0x00,                  /* Max video or still frame size */

    0x2A,0x2C,0x0A,0x00,                  /* Default frame interval is 15fps */

    0x00,                                 /* Continuous frame interval*/
    0x2A,0x2C,0x0A,0x00,                  /* Min frame interval is 15fps */
    0x2A,0x2C,0x0A,0x00,                  /* Max frame interval is 15fps */
    0x00,0x00,0x00,0x00,                  /* No frame interval step supported */

    /* Standard VS Interface Descriptor */
    IFACE_ONLY_DESC_SIZE,                 /* Size */
    INTERFACE_DESC,                       /* INTERFACE descriptor type */
    0x01,                                 /* Index of this interface */
    0x01,                                 /* Index of this alternate setting */
    0x01,                                 /* 0 endpoints now banwidth used */
    VIDEO_CC,                             /* VIDEO_CC */
    SC_VIDEOSTREAMING,                    /* SC_VIDEOSTREAMING */
    PC_PROTOCOL_UNDEFINED,                /* PC_PROTOCOL_UNDEFINED */
    0x00,                                 /* Unused */

    /* Standard VS Isochronous Video Data Endpoint Descriptor */
    VIDEO_STREAMING_ENDP_DESC_SIZE,       /* Size */
    USB_ENDPOINT_DESCRIPTOR,              /* USB_ENDPOINT_DESCRIPTOR */
    VIDEO_ENDPOINT|(USB_SEND<<7),         /* IN endpoint 2 */
    0x05,                                 /* Isochronous tranfer type */
    0xFE,0x01,                            /* Max packet size */
    0x01,                                 /* One frame inteval */


    /*****************************************************************
    *            AUDIO FUNCTION DESCRIPTOR                           *
    ******************************************************************/
    /* Interface Association Descriptor */
    IAD_DESC_SIZE,                       /* Size of this descriptor -  bLength (8) */
    USB_IFACE_ASSOCIATION_DESCRIPTOR,    /* INTERFACE ASSOCIATION Descriptor */
    0x02,                                /* Interface number ofthe VideoControl
                                        interface that is associated with this function */
    0x02,                                /* Number of contiguous Video interfaces
                                            that are associated with this function */
    USB_DEVICE_CLASS_AUDIO,              /* VIDEO_CC */
    0x00,                                /* SC_VIDEO_INTERFACE_COLLECTION */
    0x00,                                /* Not used */
    0x00,                                /* Index to string descriptor */

    /* AUDIO CONTROL INTERFACE DISCRIPTOR */
    IFACE_ONLY_DESC_SIZE,      /* Size of this descriptor - bLength (9) */
    USB_IFACE_DESCRIPTOR,      /* INTERFACE descriptor */
    0x02,                      /* Index of this interface */
    0x00,                      /* Index of this setting */
    0x00,                      /* 0 endpoint */
    USB_DEVICE_CLASS_AUDIO,    /* AUDIO */
    USB_SUBCLASS_AUDIOCONTROL, /* AUDIO_CONTROL */
    0x00,                      /* Unused */
    0x00,                      /* Unused */

    /* Audio class-specific interface header */
    HEADER_ONLY_DESC_SIZE,           /* bLength (9) */
    AUDIO_INTERFACE_DESCRIPTOR_TYPE, /* bDescriptorType (CS_INTERFACE) */
    AUDIO_CONTROL_HEADER,            /* bDescriptorSubtype (HEADER) */
    0x00,0x01,                       /* bcdADC (1.0) */
    0x27,0x00,                       /* wTotalLength (43) */
    0x01,                            /* bInCollection (1 streaming interface) */
    0x03,                            /* baInterfaceNr (interface 1 is stream) */

    /* Audio class-specific input terminal */
    INPUT_TERMINAL_ONLY_DESC_SIZE_A,   /* bLength (12) */
    AUDIO_INTERFACE_DESCRIPTOR_TYPE, /* bDescriptorType (CS_INTERFACE) */
    AUDIO_CONTROL_INPUT_TERMINAL,    /* bDescriptorSubtype (INPUT_TERMINAL) */
    0x01,                            /* bTerminalID (1) */
    0x01,0x01,                       /* wTerminalType (radio receiver) */
    0x00,                            /* bAssocTerminal (none) */
    0x01,                            /* bNrChannels (2) */
    0x00,0x00,                       /* wChannelConfig (left, right) */
    0x00,                            /* iChannelNames (none) */
    0x00,                            /* iTerminal (none) */

    /* Audio class-specific feature unit */
    FEATURE_UNIT_ONLY_DESC_SIZE,     /* bLength (9) */
    AUDIO_INTERFACE_DESCRIPTOR_TYPE, /* bDescriptorType (CS_INTERFACE) */
    AUDIO_CONTROL_FEATURE_UNIT,      /* bDescriptorSubtype (FEATURE_UNIT) */
    0x02,                            /* bUnitID (2) */
    0x01,                            /* bSourceID (input terminal 1) */
    0x01,                            /* bControlSize (1 bytes) */
    /* Audio speaker feature */
    (AUDIO_AUTOMATIC_GAIN_CONTROL |  /* Controls enabled: AGC, TREBLE, BASS, VOLUME, MUTE */
    AUDIO_TREBLE_CONTROL         |
    AUDIO_BASS_CONTROL           |
    AUDIO_VOLUME_CONTROL         |
    AUDIO_MUTE_CONTROL
    ),

    0x00,                            /* Master controls */
    0x00,                            /* Channel 0 controls */

    /* Audio class-specific output terminal */
    OUTPUT_TERMINAL_ONLY_DESC_SIZE_A,  /* bLength (9) */
    AUDIO_INTERFACE_DESCRIPTOR_TYPE, /* bDescriptorType (CS_INTERFACE) */
    AUDIO_CONTROL_OUTPUT_TERMINAL,   /* bDescriptorSubtype (OUTPUT_TERMINAL) */
    0x03,                            /* bTerminalID (3) */
    0x01,0x03,                       /* wTerminalType (USB streaming) */
    0x00,                            /* bAssocTerminal (none) */
    0x02,                            /* bSourceID (feature unit 2) */
    0x00,                            /* iTerminal (none) */

    /* USB speaker standard AS interface descriptor - audio streaming operational
    (Interface 3, Alternate Setting 0) */
    IFACE_ONLY_DESC_SIZE,            /* bLength (9) */
    USB_IFACE_DESCRIPTOR,            /* bDescriptorType (CS_INTERFACE) */
    0x03,                            /* interface Number: 1 */
    0x00,                            /* Alternate Setting: 0 */
    0x00,                            /* not used (Zero Bandwidth) */
    USB_DEVICE_CLASS_AUDIO,          /* USB DEVICE CLASS AUDIO */
    USB_SUBCLASS_AUDIOSTREAM,        /* AUDIO SUBCLASS AUDIOSTREAMING */
    0x00,                            /* AUDIO PROTOCOL UNDEFINED */
    0x00,                            /* Unused */

    /* USB speaker standard AS interface descriptor - audio streaming operational
(Interface 3, Alternate Setting 1) */
    IFACE_ONLY_DESC_SIZE,            /* bLength (9) */
    USB_IFACE_DESCRIPTOR,            /* bDescriptorType (CS_INTERFACE) */
    0x03,                            /* interface Number: 1 */
    0x01,                            /* Alternate Setting: 1 */
    0x01,                            /* One Endpoint. */
    USB_DEVICE_CLASS_AUDIO,          /* USB DEVICE CLASS AUDIO */
    USB_SUBCLASS_AUDIOSTREAM,        /* AUDIO SUBCLASS AUDIOSTREAMING */
    0x00,                            /* AUDIO PROTOCOL UNDEFINED */
    0x00,                            /* Unused */

    /* USB speaker standard General AS interface descriptor */
    AUDIO_STREAMING_IFACE_DESC_SIZE, /* bLength (7) */
    AUDIO_INTERFACE_DESCRIPTOR_TYPE, /* bDescriptorType (CS_INTERFACE) */
    AUDIO_STREAMING_GENERAL,         /* GENERAL subtype  */
    0x01,                            /* Unit ID of output terminal */
    0x01,                            /* Interface delay */
    0x02,0x00,                       /* PCM format */

    /* USB speaker audio type I format interface descriptor */
    AUDIO_INTERFACE_DESC_TYPE_I_SIZE, /* bLength (11) */
    AUDIO_INTERFACE_DESCRIPTOR_TYPE, /* bDescriptorType (CS_INTERFACE) */
    AUDIO_STREAMING_FORMAT_TYPE,     /* DescriptorSubtype: AUDIO STREAMING FORMAT TYPE */
    AUDIO_FORMAT_TYPE_I,             /* Format Type: Type I */
    0x01,                            /* Number of Channels: one channel */
    0x01,                            /* SubFrame Size: one byte per audio subframe */
    0x08,                            /* Bit Resolution: 8 bits per sample */
    0x01,                            /* One frequency supported */
    0x40,0x1F,0x00,                  /* 8 kHz */

    /*Endpoint 1 - standard descriptor*/
    AUDIO_ENDP_ONLY_DESC_SIZE,             /* bLength (9) */
    USB_ENDPOINT_DESCRIPTOR,         /* Descriptor type (endpoint descriptor) */
    AUDIO_ENDPOINT|(USB_RECV << 7),  /* OUT endpoint address 1 */
    0x01,                            /* Isochronous endpoint */
    0x10,0x00,                       /* 16 bytes */
    0x01,                            /* 1 ms */
    0x00,
    0x00,

    /* Endpoint 1 - Audio streaming descriptor */
    AUDIO_STREAMING_ENDP_DESC_SIZE,  /* bLength (7) */
    USB_AUDIO_DESCRIPTOR,            /* AUDIO ENDPOINT DESCRIPTOR TYPE */
    AUDIO_ENDPOINT_GENERAL,          /* AUDIO ENDPOINT GENERAL */
    0x00,                            /* bmAttributes: 0x80 */
    0x00,                            /* unused */
    0x00,0x00,                       /* unused */

    /* HID FUNCTION DESCRIPTION */

    /* Interface Descriptor */
    IFACE_ONLY_DESC_SIZE,
    USB_IFACE_DESCRIPTOR,
    0x04,
    0x00,
    HID_DESC_ENDPOINT_COUNT,
    0x03,
    0x01,
    0x02,
    0x00,

    /* HID descriptor */
    HID_ONLY_DESC_SIZE,
    USB_HID_DESCRIPTOR,
    0x00,0x01,
    0x00,
    0x01,
    0x22,
    0x34,0x00,


    /*Endpoint descriptor */
    ENDP_ONLY_DESC_SIZE,
    USB_ENDPOINT_DESCRIPTOR,
    HID_ENDPOINT|(USB_SEND << 7),
    USB_INTERRUPT_PIPE,
    HID_ENDPOINT_PACKET_SIZE, 0x00,
    0x0A
};

uint_8 USB_DESC_CONST g_report_descriptor[REPORT_DESC_SIZE] =
{
    0x05, 0x01,   /* Usage Page (Generic Desktop)*/
    0x09, 0x02,   /* Usage (Mouse) */
    0xA1, 0x01,   /* Collection (Application) */
    0x09, 0x01,   /* Usage (Pointer) */

    0xA1, 0x00,   /* Collection (Physical) */
    0x05, 0x09,   /* Usage Page (Buttons) */
    0x19, 0x01,   /* Usage Minimun (01) */
    0x29, 0x03,   /* Usage Maximum (03) */

    0x15, 0x00,   /* logical Minimun (0) */
    0x25, 0x01,   /* logical Maximum (1) */
    0x95, 0x03,   /* Report Count (3) */
    0x75, 0x01,   /* Report Size (1) */

    0x81, 0x02,   /* Input(Data, Variable, Absolute) 3 button bits */
    0x95, 0x01,   /* Report count (1) */
    0x75, 0x05,   /* Report Size (5) */
    0x81, 0x01,   /* Input (Constant), 5 bit padding */

    0x05, 0x01,   /* Usage Page (Generic Desktop) */
    0x09, 0x30,   /* Usage (X) */
    0x09, 0x31,   /* Usage (Y) */
    0x09, 0x38,   /* Usage (Z) */

    0x15, 0x81,   /* Logical Minimum (-127) */
    0x25, 0x7F,   /* Logical Maximum (127) */
    0x75, 0x08,   /* Report Size (8) */
    0x95, 0x03,   /* Report Count (2) */

    0x81, 0x06,   /* Input(Data, Variable, Relative), 2 position bytes (X & Y)*/
    0xC0,         /* end collection */
    0xC0          /* end collection */
};

uint_8 USB_DESC_CONST USB_STR_0[USB_STR_0_SIZE+USB_STR_DESC_SIZE] =
{sizeof(USB_STR_0),
    USB_STRING_DESCRIPTOR,
    0x09,
    0x04/*equiavlent to 0x0409*/
};

uint_8 USB_DESC_CONST USB_STR_1[USB_STR_1_SIZE+USB_STR_DESC_SIZE]
= {  sizeof(USB_STR_1),
    USB_STRING_DESCRIPTOR,
    'F',0,
    'R',0,
    'E',0,
    'E',0,
    'S',0,
    'C',0,
    'A',0,
    'L',0,
    'E',0,
    ' ',0,
    'S',0,
    'E',0,
    'M',0,
    'I',0,
    'C',0,
    'O',0,
    'N',0,
    'D',0,
    'U',0,
    'C',0,
    'T',0,
    'O',0,
    'R',0,
    ' ',0,
    'I',0,
    'N',0,
    'C',0,
    '.',0
};

uint_8 USB_DESC_CONST USB_STR_2[USB_STR_2_SIZE+USB_STR_DESC_SIZE]
= {  sizeof(USB_STR_2),
    USB_STRING_DESCRIPTOR,
    'U',0,
    'S',0,
    'B',0,
    ' ',0,
    'H',0,
    'I',0,
    'D',0,
    '_',0,
    'A',0,
    'U',0,
    'D',0,
    'I',0,
    'O',0,
    '_',0,
    'V',0,
    'I',0,
    'D',0,
    'E',0,
    'O',0,
    ' ',0,
    'D',0,
    'E',0,
    'M',0,
    'O',0,
};

uint_8 USB_DESC_CONST USB_STR_n[USB_STR_n_SIZE+USB_STR_DESC_SIZE]
= {  sizeof(USB_STR_n),
    USB_STRING_DESCRIPTOR,
    'B',0,
    'A',0,
    'D',0,
    ' ',0,
    'S',0,
    'T',0,
    'R',0,
    'I',0,
    'N',0,
    'G',0,
    ' ',0,
    'I',0,
    'N',0,
    'D',0,
    'E',0,
    'X',0
};


USB_PACKET_SIZE const g_std_desc_size[USB_MAX_STD_DESCRIPTORS+1] =
{0,
    DEVICE_DESCRIPTOR_SIZE,
    CONFIG_DESC_SIZE,
    0, /* string */
    0, /* Interface */
    0, /* Endpoint */
    0, /* Device Qualifier */
    0, /* other speed config */
    REPORT_DESC_SIZE
};

uint_8_ptr const g_std_descriptors[USB_MAX_STD_DESCRIPTORS+1] =
{
    NULL,
    (uint_8_ptr)g_device_descriptor,
    (uint_8_ptr)g_config_descriptor,
    NULL, /* string */
    NULL, /* Interface */
    NULL, /* Endpoint */
    NULL, /* Device Qualifier */
    NULL, /* other speed config*/
    (uint_8_ptr)g_report_descriptor
};

uint_8 const g_string_desc_size[USB_MAX_STRING_DESCRIPTORS] =
{sizeof(USB_STR_0),
    sizeof(USB_STR_1),
    sizeof(USB_STR_2),
    sizeof(USB_STR_n)
};

uint_8_ptr const g_string_descriptors[USB_MAX_STRING_DESCRIPTORS] =
{
    (uint_8_ptr const) USB_STR_0,
    (uint_8_ptr const) USB_STR_1,
    (uint_8_ptr const) USB_STR_2,
    (uint_8_ptr const) USB_STR_n
};

USB_ALL_LANGUAGES g_languages = { USB_STR_0, sizeof(USB_STR_0),
    { (uint_16 const)0x0409,
        (const uint_8 **)g_string_descriptors,
        g_string_desc_size}
};

uint_8 const g_valid_config_values[USB_MAX_CONFIG_SUPPORTED+1]={0,1};

/****************************************************************************
* Global Variables
****************************************************************************/
static uint_8 g_alternate_interface[USB_MAX_SUPPORTED_INTERFACES];

/*****************************************************************************
* Local Types - None
*****************************************************************************/

/*****************************************************************************
* Local Functions Prototypes
*****************************************************************************/

/*****************************************************************************
* Local Variables - None
*****************************************************************************/

/*****************************************************************************
* Local Functions - None
*****************************************************************************/

/*****************************************************************************
* Global Functions
*****************************************************************************/
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Descriptor
*
* @brief The function returns the correponding descriptor
*
* @param controller_ID : Controller ID
* @param type          : Type of descriptor requested
* @param sub_type      : String index for string descriptor
* @param index         : String descriptor language Id
* @param descriptor    : Output descriptor pointer
* @param size          : Size of descriptor returned
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* This function is used to pass the pointer of the requested descriptor
*****************************************************************************/
uint_8 USB_Desc_Get_Descriptor(
uint_8 controller_ID,   /* [IN]  Controller ID */
uint_8 type,            /* [IN]  Type of descriptor requested */
uint_8 str_num,         /* [IN]  String index for string descriptor */
uint_16 index,          /* [IN]  String descriptor language Id */
uint_8_ptr *descriptor, /* [OUT] Output descriptor pointer */
USB_PACKET_SIZE *size   /* [OUT] Size of descriptor returned */
)
{
    UNUSED(controller_ID);
    switch(type)
    {
    case USB_REPORT_DESCRIPTOR:
        {
            type = USB_MAX_STD_DESCRIPTORS;
            *descriptor = (uint_8_ptr)g_std_descriptors [type];
            *size = g_std_desc_size[type];
        }
        break;
    case USB_HID_DESCRIPTOR:
    case USB_AUDIO_DESCRIPTOR:
        {
            type = USB_CONFIG_DESCRIPTOR ;
            *descriptor = (uint_8_ptr)(g_std_descriptors [type]+
            CONFIG_ONLY_DESC_SIZE+IFACE_ONLY_DESC_SIZE);
            *size = HID_ONLY_DESC_SIZE;
        }
        break;
    case USB_STRING_DESCRIPTOR:
        {
            if(index == 0)
            {
                /* return the string and size of all languages */
                *descriptor = (uint_8_ptr)g_languages.
                languages_supported_string;
                *size = g_languages.languages_supported_size;
            } else
            {
                uint_8 lang_id=0;
                uint_8 lang_index=USB_MAX_LANGUAGES_SUPPORTED;

                for(;lang_id< USB_MAX_LANGUAGES_SUPPORTED;lang_id++)
                {
                    /* check whether we have a string for this language */
                    if(index == g_languages.usb_language[lang_id].language_id)
                    {   /* check for max descriptors */
                        if(str_num < USB_MAX_STRING_DESCRIPTORS)
                        {   /* setup index for the string to be returned */
                            lang_index=str_num;
                        }
                        break;
                    }
                }

                /* set return val for descriptor and size */
                *descriptor = (uint_8_ptr)g_languages.usb_language[lang_id].
                lang_desc[lang_index];
                *size = g_languages.usb_language[lang_id].
                lang_desc_size[lang_index];
            }
        }
        break;
        default :
        if (type < USB_MAX_STD_DESCRIPTORS)
        {
            /* set return val for descriptor and size*/
            *descriptor = (uint_8_ptr)g_std_descriptors [type];

            /* if there is no descriptor then return error */
            if(*descriptor == NULL)
            {
                return USBERR_INVALID_REQ_TYPE;
            }

            *size = g_std_desc_size[type];
        }
        else /* invalid descriptor */
        {
            return USBERR_INVALID_REQ_TYPE;
        }
        break;
    }
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Interface
*
* @brief The function returns the alternate interface
*
* @param controller_ID : Controller ID
* @param interface     : Interface number
* @param alt_interface : Output alternate interface
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
*This function is called by the framework module to get the current interface
*****************************************************************************/
uint_8 USB_Desc_Get_Interface(
uint_8 controller_ID,     /* [IN] Controller ID */
uint_8 interface,         /* [IN] Interface number */
uint_8_ptr alt_interface  /* [OUT] Output alternate interface */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES)
    {
        /* get alternate interface*/
        *alt_interface = g_alternate_interface[interface];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Interface
*
* @brief The function sets the alternate interface
*
* @param controller_ID : Controller ID
* @param interface     : Interface number
* @param alt_interface : Input alternate interface
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
*This function is called by the framework module to set the interface
*****************************************************************************/
uint_8 USB_Desc_Set_Interface(
uint_8 controller_ID, /* [IN] Controller ID */
uint_8 interface,     /* [IN] Interface number */
uint_8 alt_interface  /* [IN] Input alternate interface */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES)
    {
        /* set alternate interface*/
        g_alternate_interface[interface] = alt_interface;
        return USB_OK;
    }

    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Valid_Configation
*
* @brief The function checks whether the configuration parameter
*        input is valid or not
*
* @param controller_ID : Controller ID
* @param config_val    : Configuration value
*
* @return TRUE           When Valid
*         FALSE          When Error
*****************************************************************************
* This function checks whether the configuration is valid or not
*****************************************************************************/
boolean USB_Desc_Valid_Configation(
uint_8 controller_ID,/*[IN] Controller ID */
uint_16 config_val   /*[IN] Configuration value */
)
{
    uint_8 loop_index=0;

    UNUSED (controller_ID);
    /* check with only supported val right now */
    while(loop_index < (USB_MAX_CONFIG_SUPPORTED+1))
    {
        if(config_val == g_valid_config_values[loop_index])
        {
            return TRUE;
        }
        loop_index++;
    }
    return FALSE;
}
/**************************************************************************//*!
*
* @name  USB_Desc_Valid_Interface
*
* @brief The function checks whether the interface parameter
*        input is valid or not
*
* @param controller_ID : Controller ID
* @param interface     : Target interface
*
* @return TRUE           When Valid
*         FALSE          When Error
*****************************************************************************
* This function checks whether the interface is valid or not
*****************************************************************************/
boolean USB_Desc_Valid_Interface(
uint_8 controller_ID, /*[IN] Controller ID */
uint_8 interface      /*[IN] Target interface */
)
{
    uint_8 loop_index=0;

    UNUSED(controller_ID);
    /* check with only supported val right now */
    while(loop_index < USB_MAX_SUPPORTED_INTERFACES)
    {
        if(interface == g_alternate_interface[loop_index])
        {
            return TRUE;
        }
        loop_index++;
    }
    return FALSE;
}
/**************************************************************************//*!
*
* @name  USB_Desc_Remote_Wakeup
*
* @brief The function checks whether the remote wakeup is supported or not
*
* @param controller_ID : Controller ID
*
* @return REMOTE_WAKEUP_SUPPORT (TRUE) - If remote wakeup supported
*****************************************************************************
* This function returns remote wakeup is supported or not
*****************************************************************************/
boolean USB_Desc_Remote_Wakeup(
uint_8 controller_ID      /* [IN] Controller ID */
)
{
    UNUSED(controller_ID);
    return REMOTE_WAKEUP_SUPPORT;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Endpoints
*
* @brief The function returns with the list of all non control endpoints used
*
* @param controller_ID : Controller ID
*
* @return pointer to USB_ENDPOINTS
*****************************************************************************
* This function returns the information about all the non control endpoints
* implemented
*****************************************************************************/
USB_ENDPOINTS_PTR usb_desc_ep = NULL;
void* USB_Desc_Get_Endpoints(
uint_8 controller_ID      /* [IN] Controller ID */
)
{
    uint_8 count,cl_count;
    uint_8 index = 0, offset = 0;
    ENDPOINT_ARC_STRUCT_PTR ep_arc_ptr = NULL;
    CLASS_ARC_STRUCT_PTR dev_class_ptr = NULL;
    UNUSED (controller_ID);

    if(usb_desc_ep == NULL)
    {
        usb_desc_ep = (USB_ENDPOINTS_PTR)malloc(sizeof(USB_ENDPOINTS));

        usb_desc_ep->count = COMPOSITE_DESC_ENDPOINT_COUNT;
        for(cl_count = 0; cl_count < usb_dev_arc.cl_count; cl_count++)
        {
            dev_class_ptr = (CLASS_ARC_STRUCT_PTR)usb_dev_arc.value[cl_count];
            ep_arc_ptr = (ENDPOINT_ARC_STRUCT_PTR)&dev_class_ptr->value[0];
            for(count = 0; count < ep_arc_ptr->ep_count; count++)
            {
                USB_EP_STRUCT_PTR ep_struct_ptr = (USB_EP_STRUCT_PTR)&ep_arc_ptr->value[offset];

                usb_desc_ep->ep[index].ep_num = ep_struct_ptr->ep_num;
                usb_desc_ep->ep[index].type = ep_struct_ptr->type;
                usb_desc_ep->ep[index].direction = ep_struct_ptr->direction;
                usb_desc_ep->ep[index].size = ieee_htons(ep_struct_ptr->size);
                offset += sizeof(USB_EP_STRUCT);
                index ++;
            }
            offset = 0;
        }
    }
    return (void*)usb_desc_ep;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Entities
*
* @brief The function returns with the list of all Input Terminal,
* Output Terminal and Feature Unit
*
* @param controller_ID : Controller ID
*
* @return pointer to USB_VIDEO_UNITS
*****************************************************************************
* This function returns the information about all the Input Terminal,
* Output Terminal and Feature Unit
*****************************************************************************/
void* USB_Desc_Get_Audio_Entities(
uint_8 controller_ID      /* [IN] Controller ID */
)
{
    UNUSED (controller_ID);
    return (void*)&usb_audio_unit;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Entities
*
* @brief The function returns with the list of all Input Terminal,
* Output Terminal and Feature Unit
*
* @param controller_ID : Controller ID
*
* @return pointer to USB_VIDEO_UNITS
*****************************************************************************
* This function returns the information about all the Input Terminal,
* Output Terminal and Feature Unit
*****************************************************************************/
void* USB_Desc_Get_Video_Entities(
uint_8 controller_ID      /* [IN] Controller ID */
)
{
    UNUSED (controller_ID);
    return (void*)&usb_video_unit;
}

uint_8 g_cur_brightness[2] = {0x00,0x00};
/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Brightness
*
* @brief The function sets current brightness value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
*Set current brightness value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Brightness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);
    UNUSED(size);

    g_cur_brightness[0]=**data;
    g_cur_brightness[1]=*(*data+1);

    return USB_OK;
}
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Brightness
*
* @brief The function gets the current Brightness value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return current brightness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Brightness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    /*.Body*/
    UNUSED(controller_ID);

    *size = 2;
    *data = g_cur_brightness;

    return USB_OK;
}/*EndBody*/

uint_8 g_min_brightness[2] = {0xf0,0xff};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Brightness
*
* @brief The function gets the minimum Brightness value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return minimum brightness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Brightness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    /*.Body*/
    UNUSED(controller_ID);

    *size = 2;
    *data = g_min_brightness;

    return USB_OK;
}/*EndBody*/
uint_8 g_max_brightness[2] = {0x10,0x00};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Brightness
*
* @brief The function gets the maximum Brightness value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return maximum brightness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Brightness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    /*.Body*/
    UNUSED(controller_ID);

    *size = 2;
    *data = g_max_brightness;

    return USB_OK;
}/*EndBody*/

uint_8 g_res_brightness[2] = {0x01,0x00};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Brightness
*
* @brief The function gets the resolution Brightness value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return resolution brightness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Brightness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    /*.Body*/
    UNUSED(controller_ID);

    *size = 2;
    *data = g_res_brightness;

    return USB_OK;
}/*EndBody*/

uint_8 g_info_brightness[1] = {0x03};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Info_Brightness
*
* @brief The function gets the information Brightness value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return information brightness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Info_Brightness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    /*.Body*/
    UNUSED(controller_ID);

    *size = 1;
    *data = g_info_brightness;

    return USB_OK;
}/*EndBody*/

uint_8 g_def_brightness[2] = {0x01,0x00};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Def_Brightness
*
* @brief The function gets the default Brightness value
*
* @param controller_ID : Controller ID
* @param data             : Pointer to Data
* @param size             : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return default brightness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Def_Brightness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size = 2;
    *data = g_def_brightness;

    return USB_OK;
}

uint_8 g_cur_power_mode[1] = {0x00};
/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Power_Mode
*
* @brief The function sets current power mode value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
*Set current power mode value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Power_Mode(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);
    UNUSED(size);

    g_cur_power_mode[0]=**data;

    return USB_OK;
}
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Power_Mode
*
* @brief The function gets the current power mode value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return current power mode value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Power_Mode(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    /*.Body*/
    UNUSED(controller_ID);

    *size = 1;
    *data = g_cur_power_mode;
    return USB_OK;
}/*EndBody*/

uint_8 g_info_power_mode[1] = {0x03};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Info_Power_Mode
*
* @brief The function gets the information power mode value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return information brightness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Info_Power_Mode(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size = 1;
    *data = g_info_power_mode;
    return USB_OK;
}


uint_8 g_cur_error_code[1] = {0x07};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Error_Code
*
* @brief The function gets the current error code value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return current error code value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Error_Code(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size = 1;
    *data = g_cur_error_code;
    return USB_OK;
}

uint_8 g_info_error_code[1] = {0x01};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Info_Error_Code
*
* @brief The function gets the information error code value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return information error code value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Info_Error_Code(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size = 1;
    *data = g_info_error_code;
    return USB_OK;
}

uint_8 g_cur_video_probe[26] = {0x00,0x00,0x01,0x01,0x15,0x16,
    0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x58,0x02,0x00,0x5C,0x02,0x00,0x00
};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Video_Probe
*
* @brief The function sets current probe value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
*Set current probe value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Video_Probe(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    uint_8 i;

    UNUSED(controller_ID);
    UNUSED(size);

    for(i=0;i<26;i++){
        g_cur_video_probe[i]=*(*data+i);
    }

    return USB_OK;
}
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Video_Probe
*
* @brief The function gets the current probe value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return current probe value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Video_Probe(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size=26;
    *data=g_cur_video_probe;

    return USB_OK;
}

uint_8 g_len_video_probe[26] = {0x1a,0x00,0x01,0x01,0x15,0x16,
    0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x58,0x02,0x00,0x5C,0x02,0x00,0x00
};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Len_Video_Probe
*
* @brief The function gets the length probe value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return lengh probe value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Len_Video_Probe(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size=26;
    *data=g_len_video_probe;

    return USB_OK;
}

uint_8 g_info_video_probe[1] = {0x03};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Info_Video_Probe
*
* @brief The function gets the information probe value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return information probe value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Info_Video_Probe(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size=1;
    *data=g_info_video_probe;

    return USB_OK;
}

uint_8 g_cur_video_commit[26] = {0x00,0x00,0x01,0x01,0x15,0x16,
    0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x58,0x02,0x00,0x5C,0x02,0x00,0x00
};
/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Video_Commit
*
* @brief The function sets current commit value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
*Set current commit value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Video_Commit(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    uint_8 i;

    UNUSED(controller_ID);
    UNUSED(size);

    for(i=0;i<26;i++)
    {
        g_cur_video_commit[i]=*(*data+i);
    }

    return USB_OK;
}
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Video_Commit
*
* @brief The function gets the current commit value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return current commit value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Video_Commit(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size=26;
    *data=g_cur_video_commit;

    return USB_OK;
}

uint_8 g_len_video_commit[26] = {0x1a,0x00,0x01,0x01,0x15,0x16,
    0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x58,0x02,0x00,0x5C,0x02,0x00,0x00
};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Len_Video_Commit
*
* @brief The function gets the length Commit value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return length commit value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Len_Video_Commit(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size=26;
    *data=g_len_video_commit;

    return USB_OK;
}

uint_8 g_info_video_commit[1] = {0x03};
/**************************************************************************//*!
*
* @name  USB_Desc_Get_Info_Video_Commit
*
* @brief The function gets the information commit value
*
* @param controller_ID : Controller ID
* @param data          : Pointer to Data
* @param size          : Pointer to Size of Data
*
* @return USB_OK                              When Successfull
*         USBERR_INVALID_REQ_TYPE             when Error
*****************************************************************************
* Return information commit value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Info_Video_Commit(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED(controller_ID);

    *size=1;
    *data=g_info_video_commit;

    return USB_OK;
}
/*************************************************************************
********************     AUDIO         **********************************
**************************************************************************/
uint_8 g_copy_protect[USB_MAX_SUPPORTED_INTERFACES]={0x01};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Copy_Protect
*
* @brief  The function is called in response to Set Terminal Control Request
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return  USB_OK                  : When Successfull
*          USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                    Interface is presented
******************************************************************************
* This function is called to Set Copy Protect Level
*****************************************************************************/
uint_8 USB_Desc_Set_Copy_Protect(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set copy protect data*/
        g_copy_protect[interface] = **data;
        return USB_OK;
    }

    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Copy_Protect
*
* @brief  The function is called in response to Get Terminal Control Request
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return  USB_OK                  : When Successfull
*          USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                    Interface is presented
******************************************************************************
* This function is called to Get Copy Protect Level
*****************************************************************************/
uint_8 USB_Desc_Get_Copy_Protect(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get copy protect data*/
        *size=1;
        *data=&g_copy_protect[interface];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_mute[USB_MAX_SUPPORTED_INTERFACES] ={0x00};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Mute
*
* @brief  The function sets Current Mute state
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return    USB_OK                  : When Successfull
*            USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                      Interface is presented
******************************************************************************
* Sets current Mute state specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Mute (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data to be send */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current mute data*/
        g_cur_mute[interface-SPEAKER_CTRL_INTF] = **data;

        #if (!(defined _MC9S08JS16_H))
        #endif

        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Mute
*
* @brief The function gets the current Mute state
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Mute state to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Mute(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current mute data*/
        *size = 1;
        *data = &g_cur_mute[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_volume[USB_MAX_SUPPORTED_INTERFACES][2] = {0x00,0x80};
uint_8 g_min_volume[USB_MAX_SUPPORTED_INTERFACES][2] = {0x00,0x80};
uint_8 g_max_volume[USB_MAX_SUPPORTED_INTERFACES][2] = {0xFF,0x7F};
uint_8 g_res_volume[USB_MAX_SUPPORTED_INTERFACES][2] = {0x01,0x00};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Volume
*
* @brief  The function sets Current Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return  USB_OK                  : When Successfull
*          USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                    Interface is presented
******************************************************************************
* Sets current Volume value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Volume (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    int_16 volume;
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current volume data*/
        g_cur_volume[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_cur_volume[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        volume = (int_16)((g_cur_volume[interface-SPEAKER_CTRL_INTF][1] << 8) | g_cur_volume[interface-SPEAKER_CTRL_INTF][0]);
        /* The current volume is received as logical value
    * Logical  S16:  0x8000      to 0x7FFF             and corresponds to
    * Physical      -127.9661 dB to 127.9661 dB
    * The equation for the line that passes through the above coordinates results:
    *  y = 0.0039*x - 3.1
    */
#if (!(defined _MC9S08JS16_H))
        {
            int_16 volPhysical;
            if((uint_16)volume == 0x8000)
            {
#if USART_DEBUG
                (void)printf("Volume: Silence\r\n");
#endif /* USART_DEBUG */
            }
            else
            {
#if USART_DEBUG
                volPhysical = (int_16)((int_16)(((int_32)volume * 4) / 1000) - 3);
                (void)printf("Volume: %d dB\r\n", volPhysical);
#endif /* USART_DEBUG */
            }

        }
#endif
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Min_Volume
*
* @brief  The function sets Minimum Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Minimum Volume value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Min_Volume(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data to send */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set min volume data*/
        g_min_volume[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_min_volume[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Set_Max_Volume
*
* @brief  The function sets Maximum Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Maximum Volume value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Max_Volume (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set max volume data*/
        g_max_volume[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_max_volume[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Res_Volume
*
* @brief  The function sets Resolution Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Resolution Volume value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Res_Volume(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set resolution volume data*/
        g_res_volume[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_res_volume[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Volume
*
* @brief  The function gets the Current Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Volume value to the Host
*****************************************************************************/

uint_8 USB_Desc_Get_Cur_Volume(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current volume data*/
        *size = 2;
        *data = g_cur_volume[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Volume
*
* @brief  The function gets the Minimum Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Min Volume value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Volume(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get min volume data*/
        *size = 2;
        *data = g_min_volume[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Volume
*
* @brief  The function gets the Maximum Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Max Volume value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Volume (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* Get max volume data*/
        *size = 2;
        *data = g_max_volume[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Volume
*
* @brief  The function gets the Resolution Volume value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Resolution Volume value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Volume(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* Get resolution volume data*/
        *size = 2;
        *data = g_res_volume[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_bass[USB_MAX_SUPPORTED_INTERFACES] = {0x00};
uint_8 g_min_bass[USB_MAX_SUPPORTED_INTERFACES] = {0x80};
uint_8 g_max_bass[USB_MAX_SUPPORTED_INTERFACES] = {0x7F};
uint_8 g_res_bass[USB_MAX_SUPPORTED_INTERFACES] = {0x01};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Bass
*
* @brief  The function sets Current Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Current Bass value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Bass (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current bass data*/
        g_cur_bass[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Min_Bass
*
* @brief  The function sets Minimum Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Minimum Bass value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Min_Bass(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set min bass data*/
        g_min_bass[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Max_Bass
*
* @brief  The function sets Maximum Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Maximum Bass value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Max_Bass (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set max bass data*/
        g_max_bass[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Res_Bass
*
* @brief  The function sets Resolution Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Resolution Bass value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Res_Bass (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set resolution bass data*/
        g_res_bass[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Bass
*
* @brief  The function gets the Current Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Bass value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Bass (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current bass data*/
        *size = 1;
        *data = &g_cur_bass[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Bass
*
* @brief  The function gets the Minimum Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Minimum Bass value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Bass(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get min bass data*/
        *size = 1;
        *data = &g_min_bass[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Bass
*
* @brief  The function gets the Maximum Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Maximum Bass value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Bass (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get max bass data*/
        *size = 1;
        *data = &g_max_bass[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }

    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Bass
*
* @brief  The function gets the Resolution Bass value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Resolution Bass value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Bass (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get resolution bass data*/
        *size = 1;
        *data = &g_res_bass[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_mid[USB_MAX_SUPPORTED_INTERFACES] = {0x00};
uint_8 g_min_mid[USB_MAX_SUPPORTED_INTERFACES] = {0x80};
uint_8 g_max_mid[USB_MAX_SUPPORTED_INTERFACES] = {0x7F};
uint_8 g_res_mid[USB_MAX_SUPPORTED_INTERFACES] = {0x01};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Mid
*
* @brief  The function sets Current Mid value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Current Mid value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Mid(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current mid data*/
        g_cur_mid[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Min_Mid
*
* @brief  This function is called to Set Minimum Mid value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Minumum Mid value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Min_Mid(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set min mid data*/
        g_min_mid[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Max_Mid
*
* @brief  This function is called to Set Maximum Mid value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Maximum Mid value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Max_Mid(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set max mid data*/
        g_max_mid[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Res_Mid
*
* @brief  This function is called to Set Resolution Mid value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Resolution Mid value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Res_Mid(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set resolution mid data*/
        g_res_mid[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Mid
*
* @brief  The function gets the Current Mid value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Mid value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Mid (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current Mid data*/
        *size = 1;
        *data=&g_cur_mid[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Mid
*
* @brief  The function gets the Minimum Mid value
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Minimum Mid value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Mid (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface<USB_MAX_SUPPORTED_INTERFACES){
        /* get min mid data data*/
        *size = 1;
        *data = &g_min_mid[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Mid
*
* @brief  The function gets the Maximum Mid value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Maximum Mid value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Mid (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface<USB_MAX_SUPPORTED_INTERFACES){
        /* get max mid data data*/
        *size = 1;
        *data = &g_max_mid[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Mid
*
* @brief  The function gets the Resolution Mid value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Resolution Mid value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Mid (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface<USB_MAX_SUPPORTED_INTERFACES){
        /* get resolution mid data data*/
        *size = 1;
        *data = &g_res_mid[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_treble[USB_MAX_SUPPORTED_INTERFACES] = {0x01};
uint_8 g_min_treble[USB_MAX_SUPPORTED_INTERFACES] = {0x80};
uint_8 g_max_treble[USB_MAX_SUPPORTED_INTERFACES] = {0x7F};
uint_8 g_res_treble[USB_MAX_SUPPORTED_INTERFACES] = {0x01};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Treble
*
* @brief  The function set Current Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Current Treble value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Treble(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current treble data*/
        g_cur_treble[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Min_Treble
*
* @brief  This function set Minimum Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Minimum Treble value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Min_Treble(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set min treble data*/
        g_min_treble[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Max_Treble
*
* @brief  The function set Maximum Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Maximum Treble value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Max_Treble(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set max treble data*/
        g_max_treble[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Res_Treble
*
* @brief  The function set Resolution Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Resolution Treble value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Res_Treble(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set resolution treble data*/
        g_res_treble[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Treble
*
* @brief  The function get Current Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Treble value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Treble (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current treble data*/
        *size=1;
        *data=&g_cur_treble[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Treble
*
* @brief  The function get Minimum Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Minimum Treble value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Treble (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get min treble data*/
        *size=1;
        *data=&g_min_treble[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Treble
*
* @brief  The function get Maximum Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Maximum Treble value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Treble (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get max treble data*/
        *size=1;
        *data=&g_max_treble[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Treble
*
* @brief  The function gets Resolution Treble value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Resolution Treble value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Treble (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get resolution treble data*/
        *size=1;
        *data=&g_res_treble[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_graphic_equalizer[USB_MAX_SUPPORTED_INTERFACES][5] = {0x00,0x00,0x00,0x00,0x00};
uint_8 g_min_graphic_equalizer[USB_MAX_SUPPORTED_INTERFACES][5] = {0x00,0x00,0x00,0x00,0x00};
uint_8 g_max_graphic_equalizer[USB_MAX_SUPPORTED_INTERFACES][5] = {0x00,0x00,0x00,0x00,0x00};
uint_8 g_res_graphic_equalizer[USB_MAX_SUPPORTED_INTERFACES][5] = {0x00,0x00,0x00,0x00,0x00};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Graphic_Equalizer
*
* @brief  The function sets Current Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Current Graphic Equalizer values specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Graphic_Equalizer(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current graphic equalizer data*/
        g_cur_graphic_equalizer[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_cur_graphic_equalizer[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        g_cur_graphic_equalizer[interface-SPEAKER_CTRL_INTF][2] = *(*data+2);
        g_cur_graphic_equalizer[interface-SPEAKER_CTRL_INTF][3] = *(*data+3);
        g_cur_graphic_equalizer[interface-SPEAKER_CTRL_INTF][4] = *(*data+4);
        return USB_OK;
    }

    return USBERR_INVALID_REQ_TYPE;
}
/**************************************************************************//*!
*
* @name  USB_Desc_Set_Min_Graphic_Equalizer
*
* @brief  The function sets Minimum Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Minimum Graphic Equalizer values specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Min_Graphic_Equalizer(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set min graphic equalizer data*/
        g_min_graphic_equalizer[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_min_graphic_equalizer[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        g_min_graphic_equalizer[interface-SPEAKER_CTRL_INTF][2] = *(*data+2);
        g_min_graphic_equalizer[interface-SPEAKER_CTRL_INTF][3] = *(*data+3);
        g_min_graphic_equalizer[interface-SPEAKER_CTRL_INTF][4] = *(*data+4);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Max_Graphic_Equalizer
*
* @brief  The function sets Maximum Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Maximum Graphic Equalizer values specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Max_Graphic_Equalizer(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set max graphic equalizer data*/
        g_max_graphic_equalizer[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_max_graphic_equalizer[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        g_max_graphic_equalizer[interface-SPEAKER_CTRL_INTF][2] = *(*data+2);
        g_max_graphic_equalizer[interface-SPEAKER_CTRL_INTF][3] = *(*data+3);
        g_max_graphic_equalizer[interface-SPEAKER_CTRL_INTF][4] = *(*data+4);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Res_Graphic_Equalizer
*
* @brief  The function sets Resolution Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Resolution Graphic Equalizer values specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Res_Graphic_Equalizer(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set resolution graphic equalizer data*/
        g_res_graphic_equalizer[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_res_graphic_equalizer[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        g_res_graphic_equalizer[interface-SPEAKER_CTRL_INTF][2] = *(*data+2);
        g_res_graphic_equalizer[interface-SPEAKER_CTRL_INTF][3] = *(*data+3);
        g_res_graphic_equalizer[interface-SPEAKER_CTRL_INTF][4] = *(*data+4);
        return USB_OK;
    }

    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Graphic_Equalizer
*
* @brief  The function gets Current Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Graphic Equalizer values to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Graphic_Equalizer (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current graphic equalizer data*/
        *size=5;
        *data=g_cur_graphic_equalizer[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Graphic_Equalizer
*
* @brief  The function gets Minimum Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Minimum Graphic Equalizer values to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Graphic_Equalizer (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get min graphic equalizer data*/
        *size=5;
        *data=g_min_graphic_equalizer[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Graphic_Equalizer
*
* @brief  The function gets Maximum Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Maximum Graphic Equalizer values to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Graphic_Equalizer (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{

    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get max graphic equalizer data*/
        *size=5;
        *data=g_max_graphic_equalizer[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Graphic_Equalizer
*
* @brief  The function gets Resolution Graphic Equalizer values
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Resolution Graphic Equalizer values to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Graphic_Equalizer (
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get resolution graphic equalizer data*/
        *size=5;
        *data=g_res_graphic_equalizer[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_automatic_gain[USB_MAX_SUPPORTED_INTERFACES] = {0x01};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Automatic_Gain
*
* @brief  The function sets Current Automatic Gain value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Current Automatic Gain value specified by the Host
*****************************************************************************/

uint_8 USB_Desc_Set_Cur_Automatic_Gain(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current automatic data*/
        g_cur_automatic_gain[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Automatic_Gain
*
* @brief  The function gets Current Automatic Gain value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Automatic Gain value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Automatic_Gain(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current automatic data*/
        *size=1;
        *data=&g_cur_automatic_gain[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_delay[USB_MAX_SUPPORTED_INTERFACES][2] = {0x00,0x40};
uint_8 g_min_delay[USB_MAX_SUPPORTED_INTERFACES][2] = {0x00,0x00};
uint_8 g_max_delay[USB_MAX_SUPPORTED_INTERFACES][2] = {0xFF,0xFF};
uint_8 g_res_delay[USB_MAX_SUPPORTED_INTERFACES][2] = {0x00,0x01};
/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Delay
*
* @brief  The function sets Current Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Set Current Delay value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current delay data*/
        g_cur_delay[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_cur_delay[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Min_Delay
*
* @brief  The function sets Minimum Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Set Minimum Delay value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Min_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set min delay data*/
        g_min_delay[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_min_delay[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Max_Delay
*
* @brief  The function sets Maximum Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Set Maximum Delay value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Max_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set max delay data*/
        g_max_delay[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_max_delay[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);

        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Res_Delay
*
* @brief  The function sets Resolution Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Set Resolution Delay value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Res_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set resolution delay data*/
        g_res_delay[interface-SPEAKER_CTRL_INTF][0] = **data;
        g_res_delay[interface-SPEAKER_CTRL_INTF][1] = *(*data+1);
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Delay
*
* @brief  The function gets Current Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Delay value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current delay data*/
        *size=2;
        *data=g_cur_delay[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Delay
*
* @brief  The function gets Minimum Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Minimum Delay value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get min delay data*/
        *size=2;
        *data=g_min_delay[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Delay
*
* @brief  The function gets Maximum Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Maximum Delay value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get max delay data*/
        *size=2;
        *data=g_max_delay[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Delay
*
* @brief  The function gets Resolution Delay value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Resolution Delay value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Delay(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get resolution delay data*/
        *size=2;
        *data=g_res_delay[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_bass_boost[USB_MAX_SUPPORTED_INTERFACES] = {0x01};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Bass_Boost
*
* @brief  The function sets Current Bass Boost value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Set Current Bass Boost value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Bass_Boost(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current bass boost data*/
        g_cur_bass_boost[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Bass_Boost
*
* @brief  The function gets Current Bass Boost value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Bass Boost value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Bass_Boost(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current bass boost data*/
        *size=1;
        *data=&g_cur_bass_boost[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_loudness[USB_MAX_SUPPORTED_INTERFACES] = {0x01};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Loudness
*
* @brief  The function sets Current Loudness value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Set Current Loudness value specified to the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Loudness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* set current loudness data*/
        g_cur_loudness[interface-SPEAKER_CTRL_INTF] = **data;
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Loudness
*
* @brief  The function gets Current Loudness value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Loudness value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Loudness(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    /* if interface valid */
    if(interface < USB_MAX_SUPPORTED_INTERFACES){
        /* get current loudness data*/
        *size=1;
        *data=&g_cur_loudness[interface-SPEAKER_CTRL_INTF];
        return USB_OK;
    }
    return USBERR_INVALID_REQ_TYPE;
}

uint_8 g_cur_sampling_frequency[3] = {0x00,0x00,0x01};
uint_8 g_min_sampling_frequency[3] = {0x00,0x00,0x00};
uint_8 g_max_sampling_frequency[3] = {0x7F,0xFF,0xFF};
uint_8 g_res_sampling_frequency[3] = {0x00,0x01,0x00};

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Sampling_Frequency
*
* @brief  The function sets Current Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Current Sampling Frequency value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    UNUSED (interface);
    /* set current sampling fequency data*/
    g_cur_sampling_frequency[0] = **data;
    g_cur_sampling_frequency[1] = *(*data+1);
    g_cur_sampling_frequency[2] = *(*data+2);
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Min_Sampling_Frequency
*
* @brief  The function sets Minimum Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Minimum Sampling Frequency value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Min_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    UNUSED (interface);
    /* set min sampling frequency data*/
    g_min_sampling_frequency[0] = **data;
    g_min_sampling_frequency[1] = *(*data+1);
    g_min_sampling_frequency[2] = *(*data+2);
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Max_Sampling_Frequency
*
* @brief  The function sets Maximum Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Maximum Sampling Frequency value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Max_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    UNUSED (interface);
    /* set max sampling frequency data*/
    g_max_sampling_frequency[0] = **data;
    g_max_sampling_frequency[1] = *(*data+1);
    g_max_sampling_frequency[2] = *(*data+2);
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Res_Sampling_Frequency
*
* @brief  The function sets Resolution Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Resolution Sampling Frequency value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Res_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    UNUSED (interface);
    /* set resolution sampling frequency data*/
    g_res_sampling_frequency[0] = **data;
    g_res_sampling_frequency[1] = *(*data+1);
    g_res_sampling_frequency[2] = *(*data+2);
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Sampling_Frequency
*
* @brief  The function gets Current Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Sampling Frequency value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (interface);
    /* get current sampling frequency data*/
    *size=3;
    *data=g_cur_sampling_frequency;
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Min_Sampling_Frequency
*
* @brief  The function gets Minimum Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Minimum Sampling Frequency value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Min_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (interface);
    /* get min sampling frequency data*/
    *size=3;
    *data=g_min_sampling_frequency;
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Max_Sampling_Frequency
*
* @brief  The function gets Maximum Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Maximum Sampling Frequency value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Max_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (interface);
    /* get max sampling frequency data*/
    *size=3;
    *data=g_max_sampling_frequency;
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Res_Sampling_Frequency
*
* @brief  The function gets Resolution Sampling Frequency value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Resolution Sampling Frequency value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Res_Sampling_Frequency(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (interface);
    /* get resolution sampling frequency data*/
    *size=3;
    *data=g_res_sampling_frequency;
    return USB_OK;
}

uint_8 g_cur_pitch = 0x01;

/**************************************************************************//*!
*
* @name  USB_Desc_Set_Cur_Pitch
*
* @brief  The function sets Current Pitch value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Sets Current Pitch value specified by the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Cur_Pitch(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (size);
    UNUSED (interface);
    /* set current pitch data*/
    g_cur_pitch = **data;
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Cur_Pitch
*
* @brief  The function gets Current Pitch value
*
* @param controller_ID   : Controller ID
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns Current Pitch value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Cur_Pitch(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [OUT] Pointer to Data */
USB_PACKET_SIZE *size               /* [OUT] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (interface);
    /* get current pitch data*/
    *size=1;
    *data=&g_cur_pitch;
    return USB_OK;
}

uint_8 status_endpoint_data[5] = {0x01, 0x02, 0x03, 0x04, 0x05};
/**************************************************************************//*!
*
* @name  USB_Desc_Set_Mem_Endpoint
*
* @brief  The function gets endpoint memory value
*
* @param controller_ID   : Controller ID
* @param offset          : Offset
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns endpoint memory value to the Host
*****************************************************************************/
uint_8 USB_Desc_Set_Mem_Endpoint(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_16 offset,                     /* [IN] Offset */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    uint_16 index;

    UNUSED (controller_ID);
    UNUSED (interface);

    for(index = 0; index < *size ; index++)
    {   /* copy the report sent by the host */
        status_endpoint_data[offset + index] = *(*data + index);
    }
    *size = 0;

    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Mem_Endpoint
*
* @brief  The function gets endpoint memory value
*
* @param controller_ID   : Controller ID
* @param offset          : Offset
* @param interface       : Interface
* @param data            : Pointer to Data to be send
* @param size            : Pointer to Size of Data
*
* @return :
*      USB_OK                  : When Successfull
*      USBERR_INVALID_REQ_TYPE : When  request for invalid
*                                Interface is presented
******************************************************************************
* Returns endpoint memory value to the Host
*****************************************************************************/
uint_8 USB_Desc_Get_Mem_Endpoint(
uint_8 controller_ID,               /* [IN] Controller ID */
uint_16 offset,                     /* [IN] Offset */
uint_8 interface,                   /* [IN] Interface */
uint_8_ptr *data,                   /* [IN] Pointer to Data */
USB_PACKET_SIZE *size               /* [IN] Pointer to Size of Data */
)
{
    UNUSED (controller_ID);
    UNUSED (interface);
    UNUSED (size);

    *data = &status_endpoint_data[offset];
    return USB_OK;
}

/**************************************************************************//*!
*
* @name  USB_Desc_Get_Class_Architecture
*
* @brief The function returns with the list of all of class information ;ex: enpoint number
                                                            number interface, interface ID
*
* @param controller_ID : Controller ID
*
* @return pointer to DEV_ARCHITECTURE_STRUCT
*****************************************************************************
* This function returns the information about all the class information
* implemented
*****************************************************************************/
void* USB_Desc_Get_Class_Architecture(
uint_8 controller_ID      /* [IN] Controller ID */
)
{
    UNUSED (controller_ID)
    return (void*)&usb_dev_arc;
}


/* EOF */
