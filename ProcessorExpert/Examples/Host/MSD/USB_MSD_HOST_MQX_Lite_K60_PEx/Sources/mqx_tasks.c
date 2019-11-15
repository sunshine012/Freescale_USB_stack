/** ###################################################################
**     Filename    : mqx_tasks.c
**     Project     : ProcessorExpert
**     Processor   : MK60DN512ZVLQ10
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2012-12-04, 10:41, # CodeGen: 2
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         App_Task - void App_Task(void* task_init_data);
**         Khci_Task - void Khci_Task(void* task_init_data);
**
** ###################################################################*/
/* MODULE mqx_tasks */

#include "Cpu.h"
#include "Events.h"
#include "mqx_tasks.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
#include "msd_commands.h"
#include "usb_host_msd_bo.h"
#include "usb_classes.h"
/*
** ===================================================================
**     Event       :  App_Task (module mqx_tasks)
**
**     Component   :  Task1 [MQXLite_task]
**     Description :
**         MQX task routine. The routine is generated into mqx_tasks.c
**         file.
**     Parameters  :
**         NAME            - DESCRIPTION
**         task_init_data  - 
**     Returns     : Nothing
** ===================================================================
*/
void App_Task(uint32_t task_init_data)
{
  int counter = 0;
  USB_STATUS           status = USB_OK;
  _usb_host_handle     host_handle;
  
  msd_host_init();
  while(1) {
    counter++;
    /* Init polling global variable */
    MSD_Task();
    /* Write your code here ... */
  }
}

/*
** ===================================================================
**     Event       :  Khci_Task (module mqx_tasks)
**
**     Component   :  Task2 [MQXLite_task]
**     Description :
**         MQX task routine. The routine is generated into mqx_tasks.c
**         file.
**     Parameters  :
**         NAME            - DESCRIPTION
**         task_init_data  - 
**     Returns     : Nothing
** ===================================================================
*/
void Khci_Task(uint32_t task_init_data)
{
  int counter = 0;
  _usb_khci_task(task_init_data);
  while(1) {
    counter++;

    /* Write your code here ... */

  }
}

/* END mqx_tasks */

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
