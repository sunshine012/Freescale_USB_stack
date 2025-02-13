/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : IO1.h
**     Project     : ProcessorExpert
**     Processor   : MK60DN512ZVLQ10
**     Component   : Serial_LDD
**     Version     : Component 01.165, Driver 01.10, CPU db: 3.00.001
**     Compiler    : GNU C Compiler
**     Date/Time   : 2012-12-26, 09:26, # CodeGen: 22
**     Abstract    :
**         This component "Serial_LDD" implements an asynchronous serial
**         communication. The component supports different settings of
**         parity, word width, stop-bit and communication speed,
**         user can select interrupt or polling handler.
**         Communication speed can be changed also in runtime.
**         The component requires one on-chip asynchronous serial communication channel.
**     Settings    :
**          Component name                                 : IO1
**          Device                                         : UART3
**          Interrupt service/event                        : Disabled
**          Settings                                       : 
**            Data width                                   : 8 bits
**            Parity                                       : None
**            Stop bits                                    : 1
**            Loop mode                                    : Normal
**            Baud rate                                    : 115200 baud
**            Wakeup condition                             : Idle line wakeup
**            Stop in wait mode                            : no
**            Idle line mode                               : Starts after start bit
**            Transmitter output                           : Not inverted
**            Receiver input                               : Not inverted
**            Break generation length                      : 10/11 bits
**            Receiver                                     : Enabled
**              RxD                                        : PTC16/CAN1_RX/UART3_RX/ENET0_1588_TMR0/FB_CS5_b/FB_TSIZ1/FB_BE23_16_BLS15_8_b
**              RxD pin signal                             : 
**            Transmitter                                  : Enabled
**              TxD                                        : PTC17/CAN1_TX/UART3_TX/ENET0_1588_TMR1/FB_CS4_b/FB_TSIZ0/FB_BE31_24_BLS7_0_b
**              TxD pin signal                             : 
**            Flow control                                 : None
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnBlockSent                                : Disabled
**              OnBlockReceived                            : Disabled
**              OnTxComplete                               : Disabled
**              OnError                                    : Disabled
**              OnBreak                                    : Disabled
**          CPU clock/configuration selection              : 
**            Clock configuration 0                        : This component enabled
**            Clock configuration 1                        : This component enabled
**            Clock configuration 2                        : This component enabled
**            Clock configuration 3                        : This component enabled
**            Clock configuration 4                        : This component enabled
**            Clock configuration 5                        : This component enabled
**            Clock configuration 6                        : This component enabled
**            Clock configuration 7                        : This component enabled
**     Contents    :
**         Init - LDD_TDeviceData* IO1_Init(LDD_TUserData *UserDataPtr);
**         Main - void IO1_Main(LDD_TDeviceData *DeviceDataPtr);
**
**     Copyright : 1997 - 2012 Freescale, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef __IO1_H
#define __IO1_H

/* MODULE IO1. */

#include "PE_LDD.h"

#include "Cpu.h"


/* Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define IO1_PRPH_BASE_ADDRESS  0x4006D000U
  
/* Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define IO1_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_IO1_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define IO1_Init_METHOD_ENABLED
#define IO1_Main_METHOD_ENABLED

/* Events configuration constants - generated for all enabled component's events */

#define ENABLED_TX_INT        0x01U    /* TX interrupt enabled      */
#define BREAK_DETECTED        0x02U    /* Break detect              */
#define TX_COMPLETED          0x04U    /* Transmission completed    */
#define ENABLE_TX_COMPLETE    0x10U    /* Enable/Disable of TX complete detection. Used in the polling mode only. */

typedef struct {
  uint16_t SerFlag;                    /* Flags for serial communication */
  uint16_t InpRecvDataNum;             /* The counter of received characters */
  uint8_t *InpDataPtr;                 /* The buffer pointer for received characters */
  uint16_t InpDataNumReq;              /* The counter of characters to receive by ReceiveBlock() */
  uint16_t OutSentDataNum;             /* The counter of sent characters */
  uint8_t *OutDataPtr;                 /* The buffer pointer for data to be transmitted */
  uint16_t OutDataNumReq;              /* The counter of characters to be send by SendBlock() */
  LDD_TUserData *UserDataPtr;          /* Pointer to user data */
} IO1_TDeviceData;                     /* Device data structure type */

typedef IO1_TDeviceData *IO1_TDeviceDataPtr ; /* Pointer to the device data structure. */

LDD_TDeviceData* IO1_Init(LDD_TUserData *UserDataPtr);
/*
** ===================================================================
**     Method      :  IO1_Init (component Serial_LDD)
**
**     Description :
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc. If the "Enable
**         in init. code" is set to "yes" value then the device is also
**         enabled(see the description of the Enable() method). In this
**         case the Enable() method is not necessary and needn't to be
**         generated. 
**     Parameters  :
**         NAME            - DESCRIPTION
**       * UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     Returns     :
**         ---             - Device data structure pointer.
** ===================================================================
*/

void IO1_Main(LDD_TDeviceData *DeviceDataPtr);
/*
** ===================================================================
**     Method      :  IO1_Main (component Serial_LDD)
**
**     Description :
**         This method is available only in the polling mode (Interrupt
**         service/event = 'no'). If interrupt service is disabled this
**         method replaces the interrupt handler. This method should be
**         called if Receive/SendBlock was invoked before in order to
**         run the reception/transmission. The end of the
**         receiving/transmitting is indicated by OnBlockSent or
**         OnBlockReceived event. 
**     Parameters  :
**         NAME            - DESCRIPTION
**       * DeviceDataPtr   - Device data structure
**                           pointer returned by <Init> method.
**     Returns     : Nothing
** ===================================================================
*/

/* END IO1. */

#endif
/* ifndef __IO1_H */
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
