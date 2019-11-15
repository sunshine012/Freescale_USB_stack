#ifndef __PE_ProjectInfo_H
#define __PE_ProjectInfo_H

/*lint -save -e621 */

/* Selected target CPU */
#define PE_CPUtype "MKL25Z128LK4"
#define PE_CPUtype_MKL25Z128LK4
#define PE_CPUfamily "Kinetis"
#define PE_CPUfamily_Kinetis
#define PE_CPUsubFamily "MKL25"
#define PE_CPUsubFamily_MKL25

/* Active PE configuration */
#define PEcfg_Configuration "FLASH"
#ifndef PEcfg_FLASH
#define PEcfg_FLASH 1U
#endif

/* BEAN METHODS IN PROJECT */
#define  _usb_cdc_usb_class_cdc_init_ipipe
#define  _usb_cdc_usb_class_cdc_install_driver
#define  _usb_cdc__io_cdc_serial_open
#define  _usb_cdc__io_cdc_serial_read
#define  _usb_cdc__io_cdc_serial_write
#define  _usb_cdc_usb_class_cdc_get_ctrl_interface
#define  _usb_cdc_usb_class_cdc_get_acm_descriptors
#define  _usb_cdc_usb_class_cdc_set_acm_descriptors
#define  _usb_cdc_usb_class_cdc_get_ctrl_descriptor
#define  _usb_cdc_usb_class_cdc_bind_data_interfaces
#define  _usb_cdc_usb_class_cdc_unbind_data_interfaces
#define  _usb_cdc_usb_class_cdc_bind_acm_interface
#define  _usb_cdc_usb_class_cdc_unbind_acm_interface
#define  _usb_cdc_usb_class_cdc_get_data_interface
#define  _usb_host_usb_class_hub_init
#define  _usb_host_usb_class_hub_cntrl_callback
#define  _usb_host_usb_class_hub_cntrl_common
#define  _usb_host_usb_class_hub_get_descriptor
#define  _usb_host_usb_class_hub_set_port_feature
#define  _usb_host_usb_class_hub_clear_port_feature
#define  _usb_host_usb_class_hub_get_port_status
#define  _usb_host_usb_host_hub_device_event
#define  _usb_host__usb_khci_task
#define  _usb_host__usb_event_init
#define  _usb_host__usb_event_clear
#define  _usb_host__usb_event_wait_ticks
#define  _usb_host__usb_host_register_ch9_callback
#define  _usb_host__usb_host_ch9_clear_feature
#define  _usb_host__usb_host_ch9_get_configuration
#define  _usb_host__usb_host_ch9_get_descriptor
#define  _usb_host__usb_host_ch9_get_interface
#define  _usb_host__usb_host_ch9_get_status
#define  _usb_host__usb_host_ch9_set_address
#define  _usb_host__usb_host_ch9_set_descriptor
#define  _usb_host__usb_host_ch9_set_interface
#define  _usb_host__usb_host_ch9_synch_frame
#define  _usb_host__usb_hostdev_cntrl_request
#define  _usb_host__usb_host_close_pipe
#define  _usb_host__usb_host_close_all_pipes
#define  _usb_host__usb_host_cancel_transfer
#define  _usb_host_usb_hostdev_validate
#define  _usb_host__usb_hostdev_get_buffer
#define  _usb_host__usb_hostdev_get_descriptor
#define  _usb_host__usb_hostdev_find_pipe_handle
#define  _usb_host_usb_hostdev_get_pipe_handle
#define  _usb_host_usb_host_class_intf_init
#define  _usb_host_usb_host_class_intf_validate
#define  _usb_host__usb_host_driver_info_register
#define  _usb_host__usb_hostdev_select_config
#define  _usb_host__usb_hostdev_select_interface
#define  _usb_host_usb_dev_list_attach_device
#define  _usb_host_usb_hostdev_tr_init
#define  _usb_host__usb_host_init
#define  _usb_host__usb_host_register_service
#define  _usb_host__usb_host_unregister_service
#define  _usb_host__usb_host_open_pipe
#define  _usb_host__usb_host_send_setup
#define  _usb_host__usb_host_get_transfer_status
#define  _usb_host__usb_host_recv_data
#define  _usb_host__usb_host_shutdown
#define  _usb_host__usb_host_get_frame_number
#define  _usb_host__usb_host_get_micro_frame_number
#define  _usb_host__usb_host_send_data

/* BEAN EVENTS IN PROJECT */
#define  _Cpu_OnNMIINT

/* BEAN UART PROPERTIES CONFIGURATION */
#define  _UART_BeanTypeName_ConsoleIO
#define  _UART_BeanTypeName_STR "ConsoleIO"
#define  _UART_DeviceName_UART
#define  _UART_DeviceName_STR "UART"
#define  _UART_Serial_LDD_Link_IO1
#define  _UART_Serial_LDD_Link_STR "IO1"
#define  _UART_RxNewLineSequence_CR
#define  _UART_RxNewLineSequence_STR "CR"
#define  _UART_TxNewLineSequence_CRLF
#define  _UART_TxNewLineSequence_STR "CRLF"
/* BEAN usb_cdc PROPERTIES CONFIGURATION */
#define  _usb_cdc_BeanTypeName_USB_CDC_CLASS
#define  _usb_cdc_BeanTypeName_STR "USB_CDC_CLASS"
#define  _usb_cdc_DeviceName_usb_cdc
#define  _usb_cdc_DeviceName_STR "usb_cdc"
#define  _usb_cdc_CDC_Mode_HOST
#define  _usb_cdc_CDC_Mode_STR "HOST"
#define  _usb_cdc_Usb_Host_Usb_Host
#define  _usb_cdc_Usb_Host_STR "Usb_Host"
#define  _usb_cdc_Use_Poll TRUE
#define  _usb_cdc_Use_Poll_yes
#define  _usb_cdc_Use_Hub TRUE
#define  _usb_cdc_Use_Hub_yes
#define  _usb_cdc_Cdc_class_list_1
#define  _usb_cdc_Cdc_class_list_STR "1"
#define  _usb_cdc_Cdc_class_list_NUMITEMS 1
#define  _usb_cdc_Cdc_class_code0_02
#define  _usb_cdc_Cdc_class_code0_STR "02"
#define  _usb_cdc_Cdc_sub_class_code0_2
#define  _usb_cdc_Cdc_sub_class_code0_STR "2"
#define  _usb_cdc_Cdc_protocol_code0_00
#define  _usb_cdc_Cdc_protocol_code0_STR "00"
#define  _usb_cdc_Cdc_class_code_mask0 255
#define  _usb_cdc_Cdc_sub_class_code_mask0 255
#define  _usb_cdc_Cdc_protocol_code_mask0 254
#define  _usb_cdc_Data_class_code_0A
#define  _usb_cdc_Data_class_code_STR "0A"
#define  _usb_cdc_Data_sub_class_code_00
#define  _usb_cdc_Data_sub_class_code_STR "00"
#define  _usb_cdc_Data_protocol_code_00
#define  _usb_cdc_Data_protocol_code_STR "00"
#define  _usb_cdc_Data_class_code_mask 255
#define  _usb_cdc_Data_sub_class_code_mask 0
#define  _usb_cdc_Data_protocol_code_mask 0
/* BEAN usb_host PROPERTIES CONFIGURATION */
#define  _usb_host_BeanTypeName_USB_HOST_STACK
#define  _usb_host_BeanTypeName_STR "USB_HOST_STACK"
#define  _usb_host_DeviceName_usb_host
#define  _usb_host_DeviceName_STR "usb_host"
#define  _usb_host_LDD_Component_USB_LDD
#define  _usb_host_LDD_Component_STR "USB_LDD"
#define  _usb_host_Common_Class FALSE
#define  _usb_host_Common_Class_no
#define  _usb_host_Use_Poll TRUE
#define  _usb_host_Use_Poll_yes
#define  _usb_host_Use_Hub TRUE
#define  _usb_host_Use_Hub_yes
#define  _usb_host_Class_List_2
#define  _usb_host_Class_List_STR "2"
#define  _usb_host_Class_List_NUMITEMS 2
#define  _usb_host_Class_Name0_acm
#define  _usb_host_Class_Name0_STR "acm"
#define  _usb_host_Class_Code0 2
#define  _usb_host_SubClass_Code0 2
#define  _usb_host_Protocol_Code0 0
#define  _usb_host_Class_Code_Mask0 255
#define  _usb_host_SubClass_Code_Mask0 255
#define  _usb_host_Protocol_Code_Mask0 254
#define  _usb_host_Class_Name1_data
#define  _usb_host_Class_Name1_STR "data"
#define  _usb_host_Class_Code1 10
#define  _usb_host_SubClass_Code1 0
#define  _usb_host_Protocol_Code1 0
#define  _usb_host_Class_Code_Mask1 255
#define  _usb_host_SubClass_Code_Mask1 0
#define  _usb_host_Protocol_Code_Mask1 0
/* BEAN Cpu PROPERTIES CONFIGURATION */
#define  _Cpu_BeanTypeName_MKL25Z128LK4
#define  _Cpu_BeanTypeName_STR "MKL25Z128LK4"
#define  _Cpu_DeviceName_Cpu
#define  _Cpu_DeviceName_STR "Cpu"
#define  _Cpu_CPU_MKL25Z128VLK4
#define  _Cpu_CPU_STR "MKL25Z128VLK4"
#define  _Cpu_SharedInternalProperties_1
#define  _Cpu_SharedInternalProperties_STR "1"
#define  _Cpu_CPU_peripheral_CPU
#define  _Cpu_CPU_peripheral_STR "CPU"
#define  _Cpu_MemModelDev_MemModel_NoFlexMem
#define  _Cpu_MemModelDev_STR "MemModel_NoFlexMem"
#define  _Cpu_Shared_ClockSettings_1
#define  _Cpu_Shared_ClockSettings_STR "1"
#define  _Cpu_IntOsc 32.768F
#define  _Cpu_IntOsc_STR "32.768"
#define  _Cpu_InitializeSlowTRIM FALSE
#define  _Cpu_InitializeSlowTRIM_no
#define  _Cpu_IntOscFast 4.0F
#define  _Cpu_IntOscFast_STR "4.0"
#define  _Cpu_InitializeFastTRIM FALSE
#define  _Cpu_InitializeFastTRIM_no
#define  _Cpu_RTC_CLKINGrp FALSE
#define  _Cpu_RTC_CLKINGrp_Disabled
#define  _Cpu_SystemOSCGrp TRUE
#define  _Cpu_SystemOSCGrp_Enabled
#define  _Cpu_SystemOSCSrc_1
#define  _Cpu_SystemOSCSrc_STR "1"
#define  _Cpu_SystemOSCExtalPin_EXTAL0_PTA18_UART1_RX_TPM_CLKIN0
#define  _Cpu_SystemOSCExtalPin_STR "EXTAL0_PTA18_UART1_RX_TPM_CLKIN0"
#define  _Cpu_SystemOSCExtalPin_BITNUM 18
#define  _Cpu_SystemOSCExtalPinSignal_
#define  _Cpu_SystemOSCXtalPin_XTAL0_PTA19_UART1_TX_TPM_CLKIN1_LPTMR0_ALT1
#define  _Cpu_SystemOSCXtalPin_STR "XTAL0_PTA19_UART1_TX_TPM_CLKIN1_LPTMR0_ALT1"
#define  _Cpu_SystemOSCXtalPin_BITNUM 19
#define  _Cpu_SystemOSCXtalPinSignal_
#define  _Cpu_SystemOSC 8.0F
#define  _Cpu_SystemOSC_STR "8.0"
#define  _Cpu_SystemOSC_CapacitorLoad_0
#define  _Cpu_SystemOSC_CapacitorLoad_STR "0"
#define  _Cpu_ExtOscOperatingMode_0
#define  _Cpu_ExtOscOperatingMode_STR "0"
#define  _Cpu_CLKModeList_1
#define  _Cpu_CLKModeList_STR "1"
#define  _Cpu_CLKModeList_NUMITEMS 1
#define  _Cpu_IRCLKENCLKMode0 TRUE
#define  _Cpu_IRCLKENCLKMode0_Enabled
#define  _Cpu_IREFSTENCLKMode0 FALSE
#define  _Cpu_IREFSTENCLKMode0_Disabled
#define  _Cpu_IRCLKSelectCLKMode0_0
#define  _Cpu_IRCLKSelectCLKMode0_STR "0"
#define  _Cpu_IRCLKClkCLKMode0 0.032768F
#define  _Cpu_IRCLKClkCLKMode0_STR "0.032768"
#define  _Cpu_SystemOSCERCLKENCLKMode0 TRUE
#define  _Cpu_SystemOSCERCLKENCLKMode0_Enabled
#define  _Cpu_SystemOSCEREFSTENCLKMode0 FALSE
#define  _Cpu_SystemOSCEREFSTENCLKMode0_Disabled
#define  _Cpu_ERCLKClkCLKMode0 8.0F
#define  _Cpu_ERCLKClkCLKMode0_STR "8.0"
#define  _Cpu_ERCLK32KSelectCLKMode0_0
#define  _Cpu_ERCLK32KSelectCLKMode0_STR "0"
#define  _Cpu_ERCLK32KClkCLKMode0 0.0F
#define  _Cpu_ERCLK32KClkCLKMode0_STR "0.0"
#define  _Cpu_MCGModeSelCLKMode0_4
#define  _Cpu_MCGModeSelCLKMode0_STR "4"
#define  _Cpu_MCGOUTSelectCLKMode0_PLLOUT
#define  _Cpu_MCGOUTSelectCLKMode0_STR "PLLOUT"
#define  _Cpu_MCGModeCLKMode0_
#define  _Cpu_MCGOutputCLKMode0 96.0F
#define  _Cpu_MCGOutputCLKMode0_STR "96.0"
#define  _Cpu_MCG_ERCLKClkCLKMode0 8.0F
#define  _Cpu_MCG_ERCLKClkCLKMode0_STR "8.0"
#define  _Cpu_MCGCMECLKMode0 FALSE
#define  _Cpu_MCGCMECLKMode0_Disabled
#define  _Cpu_FLLEnblCLKMode0 FALSE
#define  _Cpu_FLLEnblCLKMode0_Disabled
#define  _Cpu_FLLOutputCLKMode0 0.0F
#define  _Cpu_FLLOutputCLKMode0_STR "0.0"
#define  _Cpu_FLLFixedClkCLKMode0 15.625F
#define  _Cpu_FLLFixedClkCLKMode0_STR "15.625"
#define  _Cpu_FLL_RefClkSrcCLKMode0_0
#define  _Cpu_FLL_RefClkSrcCLKMode0_STR "0"
#define  _Cpu_MCG_FRDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_FRDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_FLLRefClkCLKMode0 31.25F
#define  _Cpu_FLLRefClkCLKMode0_STR "31.25"
#define  _Cpu_MCG_FLL_MFactor_CLKMode0_Auto_select
#define  _Cpu_MCG_FLL_MFactor_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLEnblCLKMode0 TRUE
#define  _Cpu_PLLEnblCLKMode0_Enabled
#define  _Cpu_PLLSTENCLKMode0 FALSE
#define  _Cpu_PLLSTENCLKMode0_Disabled
#define  _Cpu_PLLOutputCLKMode0 96.0F
#define  _Cpu_PLLOutputCLKMode0_STR "96.0"
#define  _Cpu_MCG_PRDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_PRDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLRefClkCLKMode0 4.0F
#define  _Cpu_PLLRefClkCLKMode0_STR "4.0"
#define  _Cpu_MCG_VDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_VDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLL_LOLIECLKMode0 FALSE
#define  _Cpu_PLL_LOLIECLKMode0_Disabled
#define  _Cpu_InitPriority_1
#define  _Cpu_InitPriority_STR "1"
#define  _Cpu_WDOGDis TRUE
#define  _Cpu_WDOGDis_yes
#define  _Cpu_SharedADC0_1
#define  _Cpu_SharedADC0_STR "1"
#define  _Cpu_ADCCondGrp_
#define  _Cpu_ADC0CondGrp_
#define  _Cpu_ADC0AsynchroClock_Auto_selected_prescaler
#define  _Cpu_ADC0AsynchroClock_STR "Auto_selected_prescaler"
#define  _Cpu_ADC1CondGrp_
#define  _Cpu_ADC2CondGrp_
#define  _Cpu_ADC3CondGrp_
#define  _Cpu_ADC4CondGrp_
#define  _Cpu_SharedNMI_1
#define  _Cpu_SharedNMI_STR "1"
#define  _Cpu_NMINMIPinEn TRUE
#define  _Cpu_NMINMIPinEn_Enabled
#define  _Cpu_NMINMIPin_TSI0_CH5_PTA4_I2C1_SDA_TPM0_CH1_NMI_b
#define  _Cpu_NMINMIPin_STR "TSI0_CH5_PTA4_I2C1_SDA_TPM0_CH1_NMI_b"
#define  _Cpu_NMINMIPin_BITNUM 4
#define  _Cpu_NMINMIPinSignal_
#define  _Cpu_SharedNMI0_1
#define  _Cpu_SharedNMI0_STR "1"
#define  _Cpu_RCMGrp TRUE
#define  _Cpu_RCMGrp_Enabled
#define  _Cpu_PeriphDeviceRCM_RCM
#define  _Cpu_PeriphDeviceRCM_STR "RCM"
#define  _Cpu_RCMResetPin_PTA20_RESET_b
#define  _Cpu_RCMResetPin_STR "PTA20_RESET_b"
#define  _Cpu_RCMResetPin_BITNUM 20
#define  _Cpu_RCMResetPinSignal_
#define  _Cpu_RCMFilterInStop_disabled
#define  _Cpu_RCMFilterInStop_STR "disabled"
#define  _Cpu_RCMFilterInRunWait_disabled
#define  _Cpu_RCMFilterInRunWait_STR "disabled"
#define  _Cpu_RCMFilterWidth 1
#define  _Cpu_RCMIsInitialized TRUE
#define  _Cpu_RCMIsInitialized_yes
#define  _Cpu_SharedFlashOrganization_1
#define  _Cpu_SharedFlashOrganization_STR "1"
#define  _Cpu_SharedFLASHGrp_1
#define  _Cpu_SharedFLASHGrp_STR "1"
#define  _Cpu_EEEfeatureGrp_
#define  _Cpu_FlashOrgDscrBlockList_1
#define  _Cpu_FlashOrgDscrBlockList_STR "1"
#define  _Cpu_FlashOrgDscrBlockList_NUMITEMS 1
#define  _Cpu_FlashOrgDscrBlockAddress0 0
#define  _Cpu_FlashOrgDscrBlockSize0 131072
#define  _Cpu_FlashOrgDscrBlockWUnitSize0 4
#define  _Cpu_FlashOrgDscrBlockEUnitSize0 1024
#define  _Cpu_FlashOrgDscrBlockPUnitSize0 4096
#define  _Cpu_ShrdFLASHCfgGrp_1
#define  _Cpu_ShrdFLASHCfgGrp_STR "1"
#define  _Cpu_FTFL_FlashConfigGrp FALSE
#define  _Cpu_FTFL_FlashConfigGrp_Disabled
#define  _Cpu_ShrdMCMGrp_1
#define  _Cpu_ShrdMCMGrp_STR "1"
#define  _Cpu_MCMGrp FALSE
#define  _Cpu_MCMGrp_Disabled
#define  _Cpu_ShrdPMCGrp_1
#define  _Cpu_ShrdPMCGrp_STR "1"
#define  _Cpu_PeriphDevicePMC_PMC
#define  _Cpu_PeriphDevicePMC_STR "PMC"
#define  _Cpu_PMCLVDreset_enabled
#define  _Cpu_PMCLVDreset_STR "enabled"
#define  _Cpu_PMCLVDvoltageSelect_low
#define  _Cpu_PMCLVDvoltageSelect_STR "low"
#define  _Cpu_PMCLVWvoltageSelect_low
#define  _Cpu_PMCLVWvoltageSelect_STR "low"
#define  _Cpu_PMCBangapBuffer_disabled
#define  _Cpu_PMCBangapBuffer_STR "disabled"
#define  _Cpu_PMCBangapVLPBuffer_disabled
#define  _Cpu_PMCBangapVLPBuffer_STR "disabled"
#define  _Cpu_PMCLVDIntName_INT_LVD_LVW
#define  _Cpu_PMCLVDIntName_STR "INT_LVD_LVW"
#define  _Cpu_PMCLVDIntNameRequestFeatureGroup_Only_if_property_present
#define  _Cpu_PMCLVDIntNameRequestFeatureGroup_STR "Only_if_property_present"
#define  _Cpu_PMCLVDIntNameRequest_disabled
#define  _Cpu_PMCLVDIntNameRequest_STR "disabled"
#define  _Cpu_PMCLVDIntNamePriorityFeatureGroup_Only_if_property_present
#define  _Cpu_PMCLVDIntNamePriorityFeatureGroup_STR "Only_if_property_present"
#define  _Cpu_PMCLVDIntNamePriority_0
#define  _Cpu_PMCLVDIntNamePriority_STR "0"
#define  _Cpu_DevInit_PMCISRnameLVDGrp_
#define  _Cpu_PMCLVDinterrupt_disabled
#define  _Cpu_PMCLVDinterrupt_STR "disabled"
#define  _Cpu_PMCLVWinterrupt_disabled
#define  _Cpu_PMCLVWinterrupt_STR "disabled"
#define  _Cpu_PMCIsInitialized TRUE
#define  _Cpu_PMCIsInitialized_yes
#define  _Cpu_ShrdSCBGrp1_1
#define  _Cpu_ShrdSCBGrp1_STR "1"
#define  _Cpu_PeriphDeviceSIM_SIM
#define  _Cpu_PeriphDeviceSIM_STR "SIM"
#define  _Cpu_SIMCLKOUTGrp FALSE
#define  _Cpu_SIMCLKOUTGrp_Disabled
#define  _Cpu_SIMSCGCGrp FALSE
#define  _Cpu_SIMSCGCGrp_Disabled
#define  _Cpu_SIMIsInitialized TRUE
#define  _Cpu_SIMIsInitialized_yes
#define  _Cpu_Shared_CPUInterrupts_1
#define  _Cpu_Shared_CPUInterrupts_STR "1"
#define  _Cpu_IntNMIGrp TRUE
#define  _Cpu_IntNMIGrp_Enabled
#define  _Cpu_IntNMI_INT_NMI
#define  _Cpu_IntNMI_STR "INT_NMI"
#define  _Cpu_DevInit_NMINMIInterruptISRNameGrp_
#define  _Cpu_DevInit_Default_ISRGrp_
#define  _Cpu_MCU_Reset_Vector_Grp_
#define  _Cpu_IntHardFaultGrp FALSE
#define  _Cpu_IntHardFaultGrp_Disabled
#define  _Cpu_IntMPUGrp FALSE
#define  _Cpu_IntMPUGrp_Disabled
#define  _Cpu_IntBusFaultGrp FALSE
#define  _Cpu_IntBusFaultGrp_Disabled
#define  _Cpu_IntUsageFaultGrp FALSE
#define  _Cpu_IntUsageFaultGrp_Disabled
#define  _Cpu_IntSVCallGrp FALSE
#define  _Cpu_IntSVCallGrp_Disabled
#define  _Cpu_IntPendSVGrp FALSE
#define  _Cpu_IntPendSVGrp_Disabled
#define  _Cpu_IntLossOfLockNotFeatureGrp_
#define  _Cpu_IntLossOfLockGrp FALSE
#define  _Cpu_IntLossOfLockGrp_Disabled
#define  _Cpu_Shared_CPULowPowerGrp_1
#define  _Cpu_Shared_CPULowPowerGrp_STR "1"
#define  _Cpu_SMC_AVLP TRUE
#define  _Cpu_SMC_AVLP_0
#define  _Cpu_SMC_ALLS TRUE
#define  _Cpu_SMC_ALLS_0
#define  _Cpu_SMC_AVLLS TRUE
#define  _Cpu_SMC_AVLLS_0
#define  _Cpu_ShrdLLWUGrp_1
#define  _Cpu_ShrdLLWUGrp_STR "1"
#define  _Cpu_LLWUGrp FALSE
#define  _Cpu_LLWUGrp_Disabled
#define  _Cpu_Shared_CPULowPowerGrp0_1
#define  _Cpu_Shared_CPULowPowerGrp0_STR "1"
#define  _Cpu_SetLowPowerModeGrp_
#define  _Cpu_SetOperationMode_WAIT_SLEEPONEXIT FALSE
#define  _Cpu_SetOperationMode_WAIT_SLEEPONEXIT_no
#define  _Cpu_SetOperationMode_SLEEP_Sel_0
#define  _Cpu_SetOperationMode_SLEEP_Sel_STR "0"
#define  _Cpu_SetOperationMode_SLEEP_SLEEPONEXIT FALSE
#define  _Cpu_SetOperationMode_SLEEP_SLEEPONEXIT_no
#define  _Cpu_SetOperationMode_STOP FALSE
#define  _Cpu_SetOperationMode_STOP_Disabled
#define  _Cpu_SpeedModeList_1
#define  _Cpu_SpeedModeList_STR "1"
#define  _Cpu_SpeedModeList_NUMITEMS 1
#define  _Cpu_IRC_32kHzSpeedMode0 0.032768F
#define  _Cpu_IRC_32kHzSpeedMode0_STR "0.032768"
#define  _Cpu_IRC_4MHzSpeedMode0 4.0F
#define  _Cpu_IRC_4MHzSpeedMode0_STR "4.0"
#define  _Cpu_SYSTEM_OSCSpeedMode0 8.0F
#define  _Cpu_SYSTEM_OSCSpeedMode0_STR "8.0"
#define  _Cpu_RTC_CLKINSpeedMode0 0.032768F
#define  _Cpu_RTC_CLKINSpeedMode0_STR "0.032768"
#define  _Cpu_IRCLKSelSpeedMode0_IRC_32kHz
#define  _Cpu_IRCLKSelSpeedMode0_STR "IRC_32kHz"
#define  _Cpu_ERCLK32KSelSpeedMode0_SYSTEM_OSC
#define  _Cpu_ERCLK32KSelSpeedMode0_STR "SYSTEM_OSC"
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_MCG_FRDIV
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_STR "MCG_FRDIV"
#define  _Cpu_MCG_FRDIVSpeedMode0_256
#define  _Cpu_MCG_FRDIVSpeedMode0_STR "256"
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_640
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_STR "640"
#define  _Cpu_MCG_PRDIVSpeedMode0_2
#define  _Cpu_MCG_PRDIVSpeedMode0_STR "2"
#define  _Cpu_MCG_VDIVSpeedMode0_24
#define  _Cpu_MCG_VDIVSpeedMode0_STR "24"
#define  _Cpu_MCGOUTSelSpeedMode0_MCGPLLCLK
#define  _Cpu_MCGOUTSelSpeedMode0_STR "MCGPLLCLK"
#define  _Cpu_VLPRSpeedMode0 FALSE
#define  _Cpu_VLPRSpeedMode0_Disabled
#define  _Cpu_CLKModeSpeedMode0_0
#define  _Cpu_CLKModeSpeedMode0_STR "0"
#define  _Cpu_MCGModeSelSpeedMode0_4
#define  _Cpu_MCGModeSelSpeedMode0_STR "4"
#define  _Cpu_MCGOutputSpeedMode0 96.0F
#define  _Cpu_MCGOutputSpeedMode0_STR "96.0"
#define  _Cpu_IRCLKClkSpeedMode0_0_032768
#define  _Cpu_IRCLKClkSpeedMode0_STR "0_032768"
#define  _Cpu_ERCLKClkSpeedMode0_8
#define  _Cpu_ERCLKClkSpeedMode0_STR "8"
#define  _Cpu_ERCLK32KClkSpeedMode0_0
#define  _Cpu_ERCLK32KClkSpeedMode0_STR "0"
#define  _Cpu_FLLFixedClkSpeedMode0_15_625
#define  _Cpu_FLLFixedClkSpeedMode0_STR "15_625"
#define  _Cpu_OUTDIV1PrescSpeedMode0_2
#define  _Cpu_OUTDIV1PrescSpeedMode0_STR "2"
#define  _Cpu_OUTDIV1Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV1Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_CoreClockSpeedMode0 48.0F
#define  _Cpu_CoreClockSpeedMode0_STR "48.0"
#define  _Cpu_OUTDIV4PrescSpeedMode0_2
#define  _Cpu_OUTDIV4PrescSpeedMode0_STR "2"
#define  _Cpu_OUTDIV4Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV4Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_BusClockSpeedMode0 24.0F
#define  _Cpu_BusClockSpeedMode0_STR "24.0"
#define  _Cpu_USB0_CLKINSpeedMode0 0.0F
#define  _Cpu_USB0_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_PLLFLLCLkSelSpeedMode0__1
#define  _Cpu_PLLFLLCLkSelSpeedMode0_STR "_1"
#define  _Cpu_PLLFLLSelSpeedMode0_MCGPLLCLKDIV2
#define  _Cpu_PLLFLLSelSpeedMode0_STR "MCGPLLCLKDIV2"
#define  _Cpu_PLLFLLClockSpeedMode0 48.0F
#define  _Cpu_PLLFLLClockSpeedMode0_STR "48.0"
#define  _Cpu_TPMClkSelSpeedMode0__1
#define  _Cpu_TPMClkSelSpeedMode0_STR "_1"
#define  _Cpu_TPMClkSpeedMode0_PLLFLLSelDistr
#define  _Cpu_TPMClkSpeedMode0_STR "PLLFLLSelDistr"
#define  _Cpu_TPMClockSpeedMode0 48.0F
#define  _Cpu_TPMClockSpeedMode0_STR "48.0"
#define  CPU_TICKS_REFERENCE_CLOCK_HZ 4000000.0F

/*lint -restore */

#endif /* __PE_ProjectInfo_H */
