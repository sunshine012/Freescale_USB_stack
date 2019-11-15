/** ###################################################################
**     Filename    : Events.c
**     Project     : ProcessorExpert
**     Processor   : MK60DN512ZVMD10
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : CodeWarrior ARM C Compiler
**     Date/Time   : 2012-02-28, 14:18, # CodeGen: 6
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         AS1_OnBlockReceived - void AS1_OnBlockReceived(LDD_TUserData *UserDataPtr);
**         AS1_OnBlockSent     - void AS1_OnBlockSent(LDD_TUserData *UserDataPtr);
**         Cpu_OnNMIINT        - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
#include "keyboard_dev.h"  

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MK60N512MD100]
**     Description :
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the <NMI
**         interrrupt> property is set to 'Enabled'.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void Cpu_OnNMIINT(void)
{
  /* Write your code here ... */
}

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
void PTE26_OnPortEvent(LDD_TUserData *UserDataPtr)
{
  /* Write your code here ... */
	KeyBoard_Events_Process();
}

/* END Events */

/*
** ###################################################################
**
**     This file was created by Processor Expert 5.3 [05.01]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
