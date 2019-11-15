/** ###################################################################
**     Filename    : Events.h
**     Project     : ProcessorExpert
**     Processor   : MK60FN1M0VLQ12
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2012-11-16, 09:51, # CodeGen: 10
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         PIT0_OnCounterRestart - void PIT0_OnCounterRestart(LDD_TUserData *UserDataPtr);
**         UART_OnBlockReceived  - void UART_OnBlockReceived(LDD_TUserData *UserDataPtr);
**         UART_OnBlockSent      - void UART_OnBlockSent(LDD_TUserData *UserDataPtr);
**         PTA19_OnPortEvent     - void PTA19_OnPortEvent(LDD_TUserData *UserDataPtr);
**         PTE26_OnPortEvent     - void PTE26_OnPortEvent(LDD_TUserData *UserDataPtr);
**         Cpu_OnNMIINT          - void Cpu_OnNMIINT(void);
**
**     Copyright Freescale Semiconductor, Inc. All Rights Reserved.
** ###################################################################*/

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PTE26.h"
#include "usb_host_audio.h"
#include "usb_host.h"
#include "USB_LDD.h"
#include "PTA19.h"
#include "PWM.h"
#include "PIT0.h"
#include "CsIO1.h"
#include "IO1.h"
#include "PE_LDD.h"

void PIT0_OnCounterRestart(LDD_TUserData *UserDataPtr);
/*
** ===================================================================
**     Event       :  PIT0_OnCounterRestart (module Events)
**
**     Component   :  PIT0 [TimerUnit_LDD]
**     Description :
**         Called if counter overflow/underflow or counter is
**         reinitialized by modulo or compare register matching.
**         OnCounterRestart event and Timer unit must be enabled. See
**         <SetEventMask> and <GetEventMask> methods. This event is
**         available only if a <Interrupt> is enabled.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * UserDataPtr     - Pointer to the user or
**                           RTOS specific data. The pointer passed as
**                           the parameter of Init method.
**     Returns     : Nothing
** ===================================================================
*/

void PTA19_OnPortEvent(LDD_TUserData *UserDataPtr);
/*
** ===================================================================
**     Event       :  PTA19_OnPortEvent (module Events)
**
**     Component   :  PTA19 [GPIO_LDD]
**     Description :
**         Called if defined event on any pin of the port occured.
**         OnPortEvent event and GPIO interrupt must be enabled. See
**         SetPortEventMask() and GetPortEventMask() methods. This
**         event is enabled if <Interrupt service/event> is Enabled and
**         disabled if <Interrupt service/event> is Disabled.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * UserDataPtr     - Pointer to RTOS device
**                           data structure pointer.
**     Returns     : Nothing
** ===================================================================
*/

void PTE26_OnPortEvent(LDD_TUserData *UserDataPtr);
/*
** ===================================================================
**     Event       :  PTE26_OnPortEvent (module Events)
**
**     Component   :  PTE26 [GPIO_LDD]
**     Description :
**         Called if defined event on any pin of the port occured.
**         OnPortEvent event and GPIO interrupt must be enabled. See
**         SetPortEventMask() and GetPortEventMask() methods. This
**         event is enabled if <Interrupt service/event> is Enabled and
**         disabled if <Interrupt service/event> is Disabled.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * UserDataPtr     - Pointer to RTOS device
**                           data structure pointer.
**     Returns     : Nothing
** ===================================================================
*/

void Cpu_OnNMIINT0(void);
/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT0 (module Events)
**
**     Component   :  Cpu [MK60FN1M0LQ15]
**     Description :
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the <NMI
**         interrrupt> property is set to 'Enabled'.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END Events */
#endif /* __Events_H*/

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
