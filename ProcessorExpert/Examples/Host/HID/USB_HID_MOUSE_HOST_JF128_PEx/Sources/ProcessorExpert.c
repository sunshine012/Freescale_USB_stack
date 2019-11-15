/** ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MCF51JF128VLH
**     Version     : Driver 01.00
**     Compiler    : CodeWarrior MCF C Compiler
**     Date/Time   : 2012-11-17, 11:18, # CodeGen: 21
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "UART.h"
#include "usb_host_hid.h"
#include "usb_host.h"
#include "USB_LDD.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "hidmouse.h"
#include "poll.h"
extern uchar main_buffer[HID_BUFFER_SIZE];
extern HID_COMMAND         main_hid_com;
extern void Mouse_Task(uchar *buffer, HID_COMMAND_PTR hid_com);

void main(void)
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  hid_init();
  for(;;){
	  Poll();
	  Mouse_Task(main_buffer,&main_hid_com);     
  }

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
/*
** ###################################################################
**
**     This file was created by Processor Expert 5.4 [05.02]
**     for the Freescale ColdFirePlus series of microcontrollers.
**
** ###################################################################
*/
