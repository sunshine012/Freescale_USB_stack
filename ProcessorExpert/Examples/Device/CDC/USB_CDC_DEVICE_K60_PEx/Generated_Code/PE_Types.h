/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PE_Types.h
**     Project     : ProcessorExpert
**     Processor   : MK60DN512ZVMD10
**     Component   : PE_Types
**     Version     : Driver 01.01
**     Compiler    : CodeWarrior ARM C Compiler
**     Date/Time   : 2012-11-20, 10:31, # CodeGen: 29
**     Abstract    :
**         PE_Types.h - contains definitions of basic types,
**         register access macros and hardware specific macros
**         which can be used in user application.
**     Settings    :
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2012 Freescale, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef __PE_Types_H
#define __PE_Types_H

/* Standard ANSI C types */
/*lint -save -e???? */
#include <stdint.h>
/*lint -restore */

#ifndef FALSE
  #define  FALSE  0x00u                /* Boolean value FALSE. FALSE is defined always as a zero value. */
#endif
#ifndef TRUE
  #define  TRUE   0x01u                /* Boolean value TRUE. TRUE is defined always as a non zero value. */
#endif

#ifndef NULL
  #define  NULL   0x00u
#endif

/* PE types definition */
#ifndef __cplusplus
typedef unsigned char           bool;
#endif
typedef unsigned char           byte;
typedef unsigned short          word;
typedef unsigned long           dword;
typedef unsigned long long      dlong;
typedef unsigned char           TPE_ErrCode;
#ifndef TPE_Float
typedef float                   TPE_Float;
#endif
#ifndef char_t
typedef char                    char_t;
#endif

/* Other basic data types */
typedef signed char             int8;
typedef signed short int        int16;
typedef signed long int         int32;

typedef unsigned char           uint8;
typedef unsigned short int      uint16;
typedef unsigned long int       uint32;


/**********************************************************/
/* Uniform multiplatform 8-bits peripheral access macros */
/**********************************************************/

/* Enable maskable interrupts */
#define __EI()\
 do {\
  /*lint -save  -e950 Disable MISRA rule (1.1) checking. */\
     asm(CPSIE f);\
  /*lint -restore Enable MISRA rule (1.1) checking. */\
 } while(0)

/* Disable maskable interrupts */
#define __DI() \
 do {\
  /*lint -save  -e950 Disable MISRA rule (1.1) checking. */\
     asm (CPSID f);\
  /*lint -restore Enable MISRA rule (1.1) checking. */\
 } while(0)


/* Save status register and disable interrupts */
#define EnterCritical() \
 do {\
   if (++SR_lock == 1u) {\
  /*lint -save  -e586 -e950 Disable MISRA rule (2.1,1.1) checking. */\
     asm (PUSH {R0,R1});asm(MRS R0, FAULTMASK);asm(CPSID f);asm(LDA R1, SR_reg);asm(STRB R0, [R1]);asm(POP {R0,R1});\
  /*lint -restore Enable MISRA rule (2.1,1.1) checking. */\
   }\
 } while(0)

/* Restore status register  */
#define ExitCritical() \
 do {\
   if (--SR_lock == 0u) { \
  /*lint -save  -e586 -e950 Disable MISRA rule (2.1,1.1) checking. */\
     asm (PUSH {R0,R1});asm(LDA R1, SR_reg);asm(LDRB R0, [R1]);asm(MSR FAULTMASK,R0;);asm(POP {R0,R1});\
  /*lint -restore Enable MISRA rule (2.1,1.1) checking. */\
   }\
 } while(0)


#define PE_DEBUGHALT() \
  /*lint -save  -e586 -e950 Disable MISRA rule (2.1,1.1) checking. */\
  asm (BKPT 255) \
  /*lint -restore Enable MISRA rule (2.1,1.1) checking. */

#define PE_NOP() \
  /*lint -save  -e586 -e950 Disable MISRA rule (2.1,1.1) checking. */\
  asm (NOP) \
  /*lint -restore Enable MISRA rule (2.1,1.1) checking. */

#define PE_WFI() \
  /*lint -save  -e586 -e950 Disable MISRA rule (2.1,1.1) checking. */\
  asm (WFI) \
  /*lint -restore Enable MISRA rule (2.1,1.1) checking. */


/* Interrupt definition template */
#if !defined(PE_ISR)
  #define PE_ISR(ISR_name) void ISR_name(void)
#endif

#endif /* __PE_Types_H */

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
