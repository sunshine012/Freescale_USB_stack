/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PTA19.c
**     Project     : ProcessorExpert
**     Processor   : MK60DN512ZVLQ10
**     Component   : GPIO_LDD
**     Version     : Component 01.126, Driver 01.06, CPU db: 3.00.001
**     Compiler    : CodeWarrior ARM C Compiler
**     Date/Time   : 2012-11-19, 11:52, # CodeGen: 191
**     Abstract    :
**         The HAL GPIO component will provide a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL GPIO API will be simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : PTA19
**          Port                                           : PTA
**          Port width                                     : 32 bits
**          Mask of allocated pins                         : 80000
**          Interrupt service/event                        : Enabled
**            Interrupt                                    : INT_PORTA
**            Interrupt priority                           : 0
**          Bit fields                                     : 1
**            Bit field                                    : 
**              Field name                                 : PLAY
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTA19/FTM1_FLT0/FTM_CLKIN1/LPT0_ALT1/XTAL
**                  Pin signal                             : 
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Rising edge
**                  Lock initialization function           : no
**          Initialization                                 : 
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnPortEvent                                : Enabled
**     Contents    :
**         Init - LDD_TDeviceData* PTA19_Init(LDD_TUserData *UserDataPtr);
**
**     Copyright : 1997 - 2012 Freescale, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

/* MODULE PTA19. */

#include "Events.h"
#include "PTA19.h"
/* {Default RTOS Adapter} No RTOS includes */
#include "IO_Map.h"

typedef struct {
  PTA19_TPortValue EventFlags;         /* Holds event flags */
  LDD_TUserData *UserData;             /* RTOS device data structure */
} PTA19_TDeviceData, *PTA19_TDeviceDataPtr; /* Device data structure type */
/* {Default RTOS Adapter} Static object used for simulation of dynamic driver memory allocation */
static PTA19_TDeviceData DeviceDataPrv__DEFAULT_RTOS_ALLOC;
/* {Default RTOS Adapter} Global variable used for passing a parameter into ISR */
static PTA19_TDeviceData * INT_PORTA__DEFAULT_RTOS_ISRPARAM;
/*
** ===================================================================
**     Method      :  PTA19_Init (component GPIO_LDD)
**
**     Description :
**         This method initializes the associated peripheral(s) and the
**         component internal variables. The method is called
**         automatically as a part of the application initialization
**         code.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * UserDataPtr     - Pointer to the RTOS device
**                           structure. This pointer will be passed to
**                           all events as parameter.
**     Returns     :
**         ---             - Pointer to the dynamically allocated
**                           private structure or NULL if there was an
**                           error.
** ===================================================================
*/
LDD_TDeviceData* PTA19_Init(LDD_TUserData *UserDataPtr)
{
  /* Allocate LDD device structure */
  PTA19_TDeviceData *DeviceDataPrv;

  /* {Default RTOS Adapter} Driver memory allocation: Dynamic allocation is simulated by a pointer to the static object */
  DeviceDataPrv = &DeviceDataPrv__DEFAULT_RTOS_ALLOC;
  /* Save RTOS Device structure */
  DeviceDataPrv->EventFlags = 0x00U;   /* Clears stored events */
  DeviceDataPrv->UserData = UserDataPtr; /* Store the RTOS device structure */
  /* Interrupt vector(s) allocation */
  /* {Default RTOS Adapter} Set interrupt vector: IVT is static, ISR parameter is passed by the global variable */
  INT_PORTA__DEFAULT_RTOS_ISRPARAM = DeviceDataPrv;
  /* GPIOA_PDDR: PDD&=~0x00080000 */
  GPIOA_PDDR &= (uint32_t)~(uint32_t)(GPIO_PDDR_PDD(0x00080000));                                                   
  /* Initialization of Port Control registers */
  /* PORTA_PCR19: ISF=0,LK=0,MUX=1 */
  PORTA_PCR19 = (uint32_t)((PORTA_PCR19 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_LK_MASK |
                 PORT_PCR_MUX(0x06)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x01)
                ));                                                  
  /* PORTA_PCR19: ISF=1,IRQC=9 */
  PORTA_PCR19 = (uint32_t)((PORTA_PCR19 & (uint32_t)~(uint32_t)(
                 PORT_PCR_IRQC(0x06)
                )) | (uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_IRQC(0x09)
                ));                                                  
  /* NVICIP87: PRI87=0 */
  NVICIP87 = 0x00U;                                                   
  /* NVICISER2: SETENA|=0x00800000 */
  NVICISER2 |= NVIC_ISER_SETENA(0x00800000);                                                   
  /* Registration of the device structure */
  PE_LDD_RegisterDeviceStructure(PE_LDD_COMPONENT_PTA19_ID,DeviceDataPrv);
  return ((LDD_TDeviceData *)DeviceDataPrv);
}

/*
** ===================================================================
**     Method      :  PTA19_Interrupt (component GPIO_LDD)
**
**     Description :
**         The method services the interrupt of the selected peripheral(s)
**         and eventually invokes event(s) of the component.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(PTA19_Interrupt)
{
  /* {Default RTOS Adapter} ISR parameter is passed through the global variable */
  PTA19_TDeviceDataPtr DeviceDataPrv = INT_PORTA__DEFAULT_RTOS_ISRPARAM;
  PTA19_TPortValue State;

  State = (PTA19_TPortValue)(PORT_PDD_GetInterruptFlags(PTA19_PORTCONTROL_BASE_ADDRESS)
          & ((PTA19_TPortValue)PTA19_ALLOCATED_PINS_MASK)); /* Retrieve flags */
  DeviceDataPrv->EventFlags |= State;
  PORT_PDD_ClearInterruptFlags(PTA19_PORTCONTROL_BASE_ADDRESS, State); /* Clears flags */
  PTA19_OnPortEvent(DeviceDataPrv->UserData); /* Call OnPortEvent event */
}

/* END PTA19. */

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
