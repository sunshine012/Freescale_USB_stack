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
* @brief The file contains User Modifiable Macros for Mouse Application
*
*****************************************************************************/
/* High speed definition */
#define  HIGH_SPEED_DEVICE            (0)

/* User Defined MACRO to set number of Timer Objects */
#define MAX_TIMER_OBJECTS             (0)

#if MAX_TIMER_OBJECTS
/* When Enabled Timer Callback is invoked with an argument */
#define TIMER_CALLBACK_ARG
#undef TIMER_CALLBACK_ARG
#endif

/* support 16/32 bit packet size */
#define USB_PACKET_SIZE               uint_16    
/* EOF */




