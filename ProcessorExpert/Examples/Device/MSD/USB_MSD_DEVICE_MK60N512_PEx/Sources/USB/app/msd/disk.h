/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2004-2009 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
**************************************************************************//*!
*
* @file disk.h
*
* @author
*
* @version
*
* @date May-08-2009
*
* @brief The file contains Macro's and functions needed by the disk
*        application
*
*****************************************************************************/
#ifndef _DISK_H
#define _DISK_H  1

#include "usb_msc.h"

/******************************************************************************
* Constants - None
*****************************************************************************/
/******************************************************************************
* Macro's
*****************************************************************************/
#define USB_CONTROLLER_ID       (0)

#define LENGTH_OF_EACH_LBA              (512)
/* length of each logical block address */
#define TOTAL_LOGICAL_BLOCKS_ADDRESS    (2)
/* total number of logical blocks present */
#define DISK_SIZE                       (LENGTH_OF_EACH_LBA * TOTAL_LOGICAL_BLOCKS_ADDRESS)

#define LOGICAL_UNIT_SUPPORTED          (1)

/*****************************************************************************
* Global variables
*****************************************************************************/

/******************************************************************************
* Types
*****************************************************************************/
#pragma pack(1)

typedef struct _disk_variable_struct
{
    uint_8 app_controller_ID;
    boolean start_app;
    /* disk space reserved */
    uint_8 storage_disk[DISK_SIZE];
    uint_8 disk_lock;

}DISK_GLOBAL_VARIABLE_STRUCT, *PTR_DISK_GLOBAL_VARIABLE_STRUCT;

/*****************************************************************************
* Global Functions
*****************************************************************************/
extern void TestApp_Init(void);
extern void TestApp_Task(void);
extern void Disk_App(void);
#endif

/* EOF */
