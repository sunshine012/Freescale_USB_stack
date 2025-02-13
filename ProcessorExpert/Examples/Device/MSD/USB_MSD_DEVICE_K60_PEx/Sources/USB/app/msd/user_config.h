/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2004-2009 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
**************************************************************************//*!
*
* @file user_config.h
*
* @author
*
* @version
*
* @date May-28-2009
*
* @brief The file contains User Modifiable Macros for MSD Application
*
*****************************************************************************/
#if ((defined __MK_xxx_H__)||(defined MCU_mcf51jf128))
#define  KEY_PRESS_SIM_TMR_INTERVAL      (1000)        /* 2s between simulated key press events */
#else
#ifdef __MCF52277_H__
#define  HIGH_SPEED_DEVICE            (1)
#define  BUTTON_PRESS_SIMULATION      (1)
#define  KEY_PRESS_SIM_TMR_INTERVAL      (2000)        /* 2s between simulated key press events */
#else
#define  HIGH_SPEED_DEVICE            (0)
#endif
#endif

#define USE_SDCARD          (0)

#if USE_SDCARD
#define RAM_DISK_APP        (0)
#define SD_CARD_APP         (1)

#define USE_SDHC_PROTOCOL   1
#define USE_SPI_PROTOCOL    0
#else
#define RAM_DISK_APP        (1)
#define SD_CARD_APP         (0)
#endif
//#define LONG_SEND_TRANSACTION       /* support to send large data pkts */
//#define LONG_RECIEVE_TRANSACTION    /* support to receive large data pkts */

#define MAX_TIMER_OBJECTS   0

#define MSD_RECEIVE_BUFFER_SIZE       (512)
#define MSD_SEND_BUFFER_SIZE          (512)
/* Don't Change this definition*/
#define USB_PACKET_SIZE  uint_32 /* support 8 bit packet size */

#ifndef _MCF51JM128_H
/* Use double buffered endpoints 5 & 6. To be only used with S08 cores */
#define DOUBLE_BUFFERING_USED
#endif
