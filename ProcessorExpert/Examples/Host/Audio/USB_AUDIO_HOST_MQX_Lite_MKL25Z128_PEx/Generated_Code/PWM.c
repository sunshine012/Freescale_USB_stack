/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PWM.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : Init_TPM
**     Version     : Component 01.000, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2012-12-24, 09:43, # CodeGen: 87
**     Abstract    :
**          This file implements the TPM (TPM0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : PWM
**          Device                                         : TPM0
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              Clock source                               : Counter clock
**              Prescaler                                  : divide by 1
**              Modulo counter                             : 255
**              Period                                     : (1 * 256) / External Clock Source
**            BDM mode                                     : TPM counter stopped; output pins remain the same
**            Global time base                             : Disabled
**            Counter reload on trigger                    : Disabled
**            Counter start on trigger                     : Disabled
**            Counter stop on overflow                     : Disabled
**          Channels                                       : 
**            Channel 0                                    : Enabled
**              Channel mode                               : Edge-aligned PWM
**                PWM polarity                             : High-true
**                Channel value register                   : 0
**              Pin                                        : Enabled
**                Pin                                      : PTE24/TPM0_CH0/I2C0_SCL
**                Pin signal                               : 
**              Interrupt/DMA                              : 
**                Interrupt                                : INT_TPM0
**                Channel interrupt                        : Disabled
**                DMA request                              : Disabled
**            Channel 1                                    : Disabled
**            Channel 2                                    : Disabled
**            Channel 3                                    : Disabled
**            Channel 4                                    : Disabled
**            Channel 5                                    : Disabled
**          Pins                                           : 
**            External clock pin                           : Disabled
**            HW Synchronization trigger                   : Disabled
**          Interrupts                                     : 
**            Channels / Timer overflow / Fault            : 
**              Interrupt                                  : INT_TPM0
**              Interrupt request                          : Disabled
**              Interrupt priority                         : 0 (Highest)
**              ISR Name                                   : 
**              Channels interrupt/DMA                     : See the respective Channel settings
**              Timer overflow interrupt                   : Disabled
**          Initialization                                 : 
**            Call Init method                             : yes
**     Contents    :
**         Init - void PWM_Init(void);
**
**     Copyright : 1997 - 2012 Freescale, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

/* MODULE PWM. */

#include "PWM.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


/*
** ===================================================================
**     Method      :  PWM_Init (component Init_TPM)
**
**     Description :
**         This method initializes registers of the TPM module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void PWM_Init(void)
{
  /* SIM_SCGC6: TPM0=1 */
  SIM_SCGC6 |= SIM_SCGC6_TPM0_MASK;                                                   
  /* TPM0_SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,DMA=0,TOF=0,TOIE=0,CPWMS=0,CMOD=0,PS=0 */
  TPM0_SC = 0x00U;                     /* Stop the counter and clear the interrupt flag */
  /* TPM0_C0SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=1,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  TPM0_C0SC = TPM_CnSC_CHF_MASK;                                                   
  /* TPM0_C1SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=1,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  TPM0_C1SC = TPM_CnSC_CHF_MASK;                                                   
  /* TPM0_C2SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=1,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  TPM0_C2SC = TPM_CnSC_CHF_MASK;                                                   
  /* TPM0_C3SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=1,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  TPM0_C3SC = TPM_CnSC_CHF_MASK;                                                   
  /* TPM0_C4SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=1,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  TPM0_C4SC = TPM_CnSC_CHF_MASK;                                                   
  /* TPM0_C5SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=1,CHIE=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0,DMA=0 */
  TPM0_C5SC = TPM_CnSC_CHF_MASK;                                                   
  /* TPM0_SC: TOF=0,CPWMS=0 */
  TPM0_SC &= (uint32_t)~(uint32_t)((TPM_SC_TOF_MASK | TPM_SC_CPWMS_MASK));                                                   
  /* TPM0_CONF: CROT=0,CSOO=0,CSOT=0,GTBEEN=0,DBGMODE=0 */
  TPM0_CONF &= (uint32_t)~(uint32_t)(
                TPM_CONF_CROT_MASK |
                TPM_CONF_CSOO_MASK |
                TPM_CONF_CSOT_MASK |
                TPM_CONF_GTBEEN_MASK |
                TPM_CONF_DBGMODE(0x03)
               );                                                   
  /* TPM0_C0SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,CHIE=0,MSB=1,ELSB=1,ELSA=0,??=0,DMA=0 */
  TPM0_C0SC = (uint32_t)((TPM0_C0SC & (uint32_t)~(uint32_t)(
               TPM_CnSC_CHF_MASK |
               TPM_CnSC_CHIE_MASK |
               TPM_CnSC_ELSA_MASK |
               TPM_CnSC_DMA_MASK |
               0xFFFFFF02U
              )) | (uint32_t)(
               TPM_CnSC_MSB_MASK |
               TPM_CnSC_ELSB_MASK
              ));                                                  
  /* TPM0_C1SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  TPM0_C1SC &= (uint32_t)~(uint32_t)(
                TPM_CnSC_CHF_MASK |
                TPM_CnSC_MSB_MASK |
                TPM_CnSC_MSA_MASK |
                TPM_CnSC_ELSB_MASK |
                TPM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                                   
  /* TPM0_C2SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  TPM0_C2SC &= (uint32_t)~(uint32_t)(
                TPM_CnSC_CHF_MASK |
                TPM_CnSC_MSB_MASK |
                TPM_CnSC_MSA_MASK |
                TPM_CnSC_ELSB_MASK |
                TPM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                                   
  /* TPM0_C3SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  TPM0_C3SC &= (uint32_t)~(uint32_t)(
                TPM_CnSC_CHF_MASK |
                TPM_CnSC_MSB_MASK |
                TPM_CnSC_MSA_MASK |
                TPM_CnSC_ELSB_MASK |
                TPM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                                   
  /* TPM0_C4SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  TPM0_C4SC &= (uint32_t)~(uint32_t)(
                TPM_CnSC_CHF_MASK |
                TPM_CnSC_MSB_MASK |
                TPM_CnSC_MSA_MASK |
                TPM_CnSC_ELSB_MASK |
                TPM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                                   
  /* TPM0_C5SC: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CHF=0,MSB=0,MSA=0,ELSB=0,ELSA=0,??=0 */
  TPM0_C5SC &= (uint32_t)~(uint32_t)(
                TPM_CnSC_CHF_MASK |
                TPM_CnSC_MSB_MASK |
                TPM_CnSC_MSA_MASK |
                TPM_CnSC_ELSB_MASK |
                TPM_CnSC_ELSA_MASK |
                0xFFFFFF02U
               );                                                   
  /* TPM0_C0V: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,VAL=0 */
  TPM0_C0V = 0x00U;                                                   
  /* TPM0_MOD: MOD=0xFF */
  TPM0_MOD = (uint32_t)((TPM0_MOD & (uint32_t)~(uint32_t)(
              TPM_MOD_MOD(0xFF00)
             )) | (uint32_t)(
              TPM_MOD_MOD(0xFF)
             ));                                                  
  /* TPM0_CNT: COUNT=0 */
  TPM0_CNT &= (uint32_t)~(uint32_t)(TPM_CNT_COUNT(0xFFFF));                                                   
  /* TPM0_SC: TOF=0,TOIE=0,CPWMS=0,CMOD=1,PS=0 */
  TPM0_SC = (uint32_t)((TPM0_SC & (uint32_t)~(uint32_t)(
             TPM_SC_TOF_MASK |
             TPM_SC_TOIE_MASK |
             TPM_SC_CPWMS_MASK |
             TPM_SC_CMOD(0x02) |
             TPM_SC_PS(0x07)
            )) | (uint32_t)(
             TPM_SC_CMOD(0x01)
            ));                                                  
}


/* END PWM. */
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
