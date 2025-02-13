/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PE_Const.h
**     Project     : ProcessorExpert
**     Processor   : MCF51JF128VLH
**     Component   : PE_Const
**     Version     : Driver 01.00
**     Compiler    : CodeWarrior MCF C Compiler
**     Date/Time   : 2012-11-19, 08:57, # CodeGen: 19
**     Abstract    :
**         This component "PE_Const" contains internal definitions
**         of the constants.
**     Settings    :
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2012 Freescale, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef __PE_Const_H
#define __PE_Const_H


/* Reset cause constants */
#define RSTSRC_WAKEUP     0x01U        /* LLWU module wakeup reset */
#define RSTSRC_LVD        0x02U        /* Low-voltage detect reset */
#define RSTSRC_LOC        0x04U        /* Loss-of-clock reset      */
#define RSTSRC_ILAD       0x08U        /* Illegal address reset    */
#define RSTSRC_ILOP       0x20U        /* Illegal opcode reset     */
#define RSTSRC_WDOG       0x40U        /* Watchdog reset           */
#define RSTSRC_PIN        0x80U        /* External reset pin      */
#define RSTSRC_POR        0x0100U      /* Power-on reset          */
#define RSTSRC_BDFR       0x1000U      /* Background Debug Force reset*/
#define RSTSRC_EZP        0x2000U      /* EzPort reset           */
#define RSTSRC_SACKERR    0x4000U      /* Stop mode acknowledge error reset*/


/* Low voltage interrupt cause constants */
#define LVDSRC_LVD        0x01U        /* Low voltage detect       */
#define LVDSRC_LVW        0x02U        /* Low-voltage warning      */

#endif /* _PE_Const_H */
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale ColdFirePlus series of microcontrollers.
**
** ###################################################################
*/
