/******************************************************/
/**
* @file hidef.h
* Machine/compiler dependent declarations.
*/
/*----------------------------------------------------
   Copyright (c) Freescale DevTech
               All rights reserved
                  Do not modify!
 *****************************************************/

#ifndef _H_HIDEF_
#define _H_HIDEF_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include "types.h"

/*!< Macro to enable all interrupts. */
#define EnableInterrupts asm ("CPSIE  i")

/*!< Macro to disable all interrupts. */
#define DisableInterrupts asm ("CPSID  i")

#ifdef __cplusplus
 }
#endif

#endif

/*****************************************************/
/* end hidef.h */
