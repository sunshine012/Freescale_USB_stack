/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : types.h
**     Project   : ProcessorExpert
**     Processor : MKL25Z128LK4
**     Component : USB_DEVICE_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2012-11-19, 11:20, # CodeGen: 18
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

#ifndef __TYPES_H
#define __TYPES_H
#include <stddef.h>

/******************************************************************************
 * Macro's
 *****************************************************************************/
#define LSB(a)      ((a)._byte.byte0)
#define MSB(a)      ((a)._byte.byte1)

#define LOWER_LSB(a)    ((a)._byte.byte0)
#define LOWER_MSB(a)    ((a)._byte.byte1)
#define UPPER_LSB(a)    ((a)._byte.byte2)
#define UPPER_MSB(a)    ((a)._byte.byte3)

#define _PTR_ *
#define _CODE_PTR_ *

#ifndef TRUE
#define FALSE 0
#define TRUE 1
#endif
#define USB_PACKET_SIZE  uint_32
#define BYTESWAP16(x)        (uint_16)((((x) & 0xFF00) >> 0x8) | (((x) & 0xFF) << 0x8))
#define BYTESWAP32(val)        (uint_32)((BYTESWAP16((uint_32)(val) & (uint_32)0xFFFF) << 0x10) |  \
                                        (BYTESWAP16((uint_32)((val) >> 0x10))))

#define ieee_htons(x)                BYTESWAP16(x)
#define ieee_htonl(x)                BYTESWAP32(x)
#define ieee_ntohs(x)                BYTESWAP16(x)
#define ieee_ntohl(x)                BYTESWAP32(x)

#define UNUSED(x)   (void)x;
/******************************************************************************
 * Types
 *****************************************************************************/
typedef unsigned char   uint_8;             /* 8-bit*/
typedef   signed char    int_8;             /* 8-bit*/

typedef unsigned short  uint_16;            /* 16-bit*/
typedef   signed short   int_16;            /* 16-bit*/

typedef unsigned long   uint_32;            /* 32-bit*/
typedef   signed long   int_32;             /* 32-bit*/

typedef unsigned char   boolean;            /* 8-bit*/

typedef uint_8*         uint_8_ptr;         /* ptr to 8-bit*/
typedef uint_16*        uint_16_ptr;        /* ptr to 16-bit */
typedef uint_32*        uint_32_ptr;        /* ptr to 32-bit*/

typedef uint_8_ptr      uchar_ptr;          /* ptr to 8-bit*/
#endif

