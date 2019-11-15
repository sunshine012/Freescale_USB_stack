/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2004-2010 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
**************************************************************************//*!
*
* @file audio_speaker.h
*
* @author
*
* @version
*
* @date
*
* @brief The file contains Macro's and functions required for Audio speaker
*        Loopback Application
*
*****************************************************************************/

#ifndef _AUDIO_SPEAKER_H
#define _AUDIO_SPEAKER_H

#include "types.h"

/******************************************************************************
* Constants - None
*****************************************************************************/

/******************************************************************************
* Macro's
*****************************************************************************/
#define  CONTROLLER_ID      (0)   /* ID to identify USB CONTROLLER */

#define  KBI_STAT_MASK      (0x0F)

/*
DATA_BUFF_SIZE should be greater than or equal to the endpoint buffer size,
otherwise there will be data loss. For MC9S08JS16, maximum DATA_BUFF_SIZE
supported is 16 Bytes
*/
#ifndef _MC9S08JS16_H
#define  DATA_BUFF_SIZE     (64)
#else
#define  DATA_BUFF_SIZE     (16)
#endif

/*****************************************************************************
* Global variables
*****************************************************************************/

/*****************************************************************************
* Global Functions
*****************************************************************************/
extern void Test_Audio_App_Task(void);
extern void USB_Audio_App_Callback(uint_8 controller_ID,
uint_8 event_type, void* val);

#endif
