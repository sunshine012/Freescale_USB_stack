/** ###################################################################
**     Filename    : mqx_tasks.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-02-05, 15:37, # CodeGen: 8
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Device_App_Task - void Device_App_Task(void* task_init_data);
**         Host_App_Task   - void Host_App_Task(void* task_init_data);
**         OTG_App_Task    - void OTG_App_Task(void* task_init_data);
**
** ###################################################################*/
/* MODULE mqx_tasks */

#include "Cpu.h"
#include "Events.h"
#include "mqx_tasks.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
#include "otg_task.h"
#include "khci.h"
#include "keyboard_dev.h"
#include "keyboard_host.h"
#include "otg_task.h"
/*
** ===================================================================
**     Event       :  Device_App_Task (module mqx_tasks)
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
void Device_App_Task(uint32_t task_init_data)
{
  int counter = 0;

  while(1) {
    counter++;
    App_PeripheralTask();
    /* Write your code here ... */

  }
}

/*
** ===================================================================
**     Event       :  Host_App_Task (module mqx_tasks)
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
void Host_App_Task(uint32_t task_init_data)
{
  int counter = 0;
  App_Host_Task();
  while(1) {
    counter++;

    /* Write your code here ... */

  }
}

/*
** ===================================================================
**     Event       :  OTG_App_Task (module mqx_tasks)
**
**     Component   :  Task3 [MQXLite_task]
**     Description :
**         MQX task routine. The routine is generated into mqx_tasks.c
**         file.
**     Parameters  :
**         NAME            - DESCRIPTION
**         task_init_data  - 
**     Returns     : Nothing
** ===================================================================
*/
void OTG_App_Task(uint32_t task_init_data)
{
  int counter = 0;
  otg_task_init(task_init_data);
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
