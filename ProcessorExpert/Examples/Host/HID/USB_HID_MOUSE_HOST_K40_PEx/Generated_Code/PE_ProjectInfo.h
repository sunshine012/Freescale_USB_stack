#ifndef __PE_ProjectInfo_H
#define __PE_ProjectInfo_H

/*lint -save -e621 */

/* Selected target CPU */
#define PE_CPUtype "MK40N512LQ100"
#define PE_CPUtype_MK40N512LQ100
#define PE_CPUfamily "Kinetis"
#define PE_CPUfamily_Kinetis
#define PE_CPUsubFamily "MK40"
#define PE_CPUsubFamily_MK40

/* Active PE configuration */
#define PEcfg_Configuration "MK40DX256ZVLQ10_INTERNAL_RAM"
#ifndef PEcfg_MK40DX256ZVLQ10_INTERNAL_RAM
#define PEcfg_MK40DX256ZVLQ10_INTERNAL_RAM 1U
#endif

/* BEAN METHODS IN PROJECT */
#define  _UART_Init
#define  _UART_Deinit
#define  _UART_SendBlock
#define  _UART_ReceiveBlock
#define  _UART_GetSentDataNum
#define  _UART_GetReceivedDataNum
#define  _UART_GetTxCompleteStatus
#define  _UART_Main
#define  _usb_host_hid_usb_class_host_hid_init
#define  _usb_host_hid_usb_class_host_hid_get_report
#define  _usb_host_hid_usb_class_host_hid_set_report
#define  _usb_host_hid_usb_class_host_hid_get_idle
#define  _usb_host_hid_usb_class_host_hid_set_idle
#define  _usb_host_hid_usb_class_host_hid_get_protocol
#define  _usb_host_hid_usb_class_host_hid_set_protocol
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
#define  _UART_BeanTypeName_Serial_LDD
#define  _UART_BeanTypeName_STR "Serial_LDD"
#define  _UART_DeviceName_UART
#define  _UART_DeviceName_STR "UART"
#define  _UART_Device_UART3
#define  _UART_Device_STR "UART3"
#define  _UART_ReentrantMethods FALSE
#define  _UART_ReentrantMethods_no
#define  _UART_IntService FALSE
#define  _UART_IntService_Disabled
#define  _UART_DataWidth_8
#define  _UART_DataWidth_STR "8"
#define  _UART_Parity_None
#define  _UART_Parity_STR "None"
#define  _UART_StopBits_1
#define  _UART_StopBits_STR "1"
#define  _UART_LoopMode_Normal
#define  _UART_LoopMode_STR "Normal"
#define  _UART_BdRate_value 115200.0F  /* This is timing required by the user - may not match with the set value */
#define  _UART_BdRate_unit baud        /* This is timing required by the user - may not match with the set value */
#define  _UART_BdRate_unit_baud        /* This is timing required by the user - may not match with the set value */
#define  _UART_BdRate_valueSet 115246.09843937578F /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _UART_BdRate_unitSet baud     /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _UART_BdRate_unitSet_baud     /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _UART_BdRate_NumTimingItems 1
#define  _UART_WakeupCond_IdleLine
#define  _UART_WakeupCond_STR "IdleLine"
#define  _UART_StopInWait FALSE
#define  _UART_StopInWait_no
#define  _UART_IdleMode_AfterStartBit
#define  _UART_IdleMode_STR "AfterStartBit"
#define  _UART_SCIOutMode_0
#define  _UART_SCIOutMode_STR "0"
#define  _UART_TxPolarity_NotInverted
#define  _UART_TxPolarity_STR "NotInverted"
#define  _UART_RxPolarity_NotInverted
#define  _UART_RxPolarity_STR "NotInverted"
#define  _UART_BreakLength_10_11
#define  _UART_BreakLength_STR "10_11"
#define  _UART_Receiver TRUE
#define  _UART_Receiver_Enabled
#define  _UART_Inp_PTC16_CAN1_RX_UART3_RX_LCD_P36
#define  _UART_Inp_STR "PTC16_CAN1_RX_UART3_RX_LCD_P36"
#define  _UART_Inp_BITNUM 16
#define  _UART_RxDpinSignal_
#define  _UART_Transmitter TRUE
#define  _UART_Transmitter_Enabled
#define  _UART_Out_PTC17_CAN1_TX_UART3_TX_LCD_P37
#define  _UART_Out_STR "PTC17_CAN1_TX_UART3_TX_LCD_P37"
#define  _UART_Out_BITNUM 17
#define  _UART_TxDpinSignal_
#define  _UART_FlowControlGrp_None
#define  _UART_FlowControlGrp_STR "None"
#define  _UART_InitEnable TRUE
#define  _UART_InitEnable_yes
#define  _UART_AutoInitializationGrp_1
#define  _UART_AutoInitializationGrp_STR "1"
#define  _UART_AutoInitialization TRUE
#define  _UART_AutoInitialization_yes
#define  _UART_OnBlockSentInitState FALSE
#define  _UART_OnBlockSentInitState_Disabled
#define  _UART_OnBlockReceivedInitState FALSE
#define  _UART_OnBlockReceivedInitState_Disabled
#define  _UART_OnTxCompleteInitState FALSE
#define  _UART_OnTxCompleteInitState_Disabled
#define  _UART_OnErrorInitState FALSE
#define  _UART_OnErrorInitState_Disabled
#define  _UART_OnBreakInitState FALSE
#define  _UART_OnBreakInitState_Disabled
#define  _UART_ClockConfigGrp_1
#define  _UART_ClockConfigGrp_STR "1"
#define  _UART_SpeedMode0_0
#define  _UART_SpeedMode0_STR "0"
#define  _UART_SpeedMode1_1
#define  _UART_SpeedMode1_STR "1"
#define  _UART_SpeedMode2_1
#define  _UART_SpeedMode2_STR "1"
#define  _UART_SpeedMode3_1
#define  _UART_SpeedMode3_STR "1"
#define  _UART_SpeedMode4_1
#define  _UART_SpeedMode4_STR "1"
#define  _UART_SpeedMode5_1
#define  _UART_SpeedMode5_STR "1"
#define  _UART_SpeedMode6_1
#define  _UART_SpeedMode6_STR "1"
#define  _UART_SpeedMode7_1
#define  _UART_SpeedMode7_STR "1"
/* BEAN usb_host_hid PROPERTIES CONFIGURATION */
#define  _usb_host_hid_BeanTypeName_USB_HID_CLASS
#define  _usb_host_hid_BeanTypeName_STR "USB_HID_CLASS"
#define  _usb_host_hid_DeviceName_usb_host_hid
#define  _usb_host_hid_DeviceName_STR "usb_host_hid"
#define  _usb_host_hid_HID_Mode_HOST
#define  _usb_host_hid_HID_Mode_STR "HOST"
#define  _usb_host_hid_USB_host_component_Usb_Host
#define  _usb_host_hid_USB_host_component_STR "Usb_Host"
#define  _usb_host_hid_Use_poll TRUE
#define  _usb_host_hid_Use_poll_yes
#define  _usb_host_hid_Use_hub TRUE
#define  _usb_host_hid_Use_hub_yes
#define  _usb_host_hid_Hid_class_list_1
#define  _usb_host_hid_Hid_class_list_STR "1"
#define  _usb_host_hid_Hid_class_list_NUMITEMS 1
#define  _usb_host_hid_Hid_class_code0 3
#define  _usb_host_hid_Hid_sub_class_code0_1
#define  _usb_host_hid_Hid_sub_class_code0_STR "1"
#define  _usb_host_hid_Hid_protocol_code0_2
#define  _usb_host_hid_Hid_protocol_code0_STR "2"
#define  _usb_host_hid_Hid_class_code_mask0 255
#define  _usb_host_hid_Hid_sub_class_code_mask0 0
#define  _usb_host_hid_Hid_protocol_code_mask0 0
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
#define  _usb_host_Class_List_1
#define  _usb_host_Class_List_STR "1"
#define  _usb_host_Class_List_NUMITEMS 1
#define  _usb_host_Class_Name0_hid
#define  _usb_host_Class_Name0_STR "hid"
#define  _usb_host_Class_Code0 3
#define  _usb_host_SubClass_Code0 1
#define  _usb_host_Protocol_Code0 1
#define  _usb_host_Class_Code_Mask0 255
#define  _usb_host_SubClass_Code_Mask0 0
#define  _usb_host_Protocol_Code_Mask0 0
/* BEAN Cpu PROPERTIES CONFIGURATION */
#define  _Cpu_BeanTypeName_MK40N512LQ100
#define  _Cpu_BeanTypeName_STR "MK40N512LQ100"
#define  _Cpu_DeviceName_Cpu
#define  _Cpu_DeviceName_STR "Cpu"
#define  _Cpu_CPU_MK40DX256ZVLQ10
#define  _Cpu_CPU_STR "MK40DX256ZVLQ10"
#define  _Cpu_SharedInternalProperties_1
#define  _Cpu_SharedInternalProperties_STR "1"
#define  _Cpu_CPU_peripheral_CPU
#define  _Cpu_CPU_peripheral_STR "CPU"
#define  _Cpu_MemModelDev_MemModel_FlexMem
#define  _Cpu_MemModelDev_STR "MemModel_FlexMem"
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
#define  _Cpu_RTCOSCGrp FALSE
#define  _Cpu_RTCOSCGrp_Disabled
#define  _Cpu_SystemOSCGrp TRUE
#define  _Cpu_SystemOSCGrp_Enabled
#define  _Cpu_SystemOSCSrc_1
#define  _Cpu_SystemOSCSrc_STR "1"
#define  _Cpu_SystemOSCExtalPin_PTA18_FTM0_FLT2_FTM_CLKIN0_EXTAL
#define  _Cpu_SystemOSCExtalPin_STR "PTA18_FTM0_FLT2_FTM_CLKIN0_EXTAL"
#define  _Cpu_SystemOSCExtalPin_BITNUM 18
#define  _Cpu_SystemOSCExtalPinSignal_
#define  _Cpu_SystemOSCXtalPin_PTA19_FTM1_FLT0_FTM_CLKIN1_LPT0_ALT1_XTAL
#define  _Cpu_SystemOSCXtalPin_STR "PTA19_FTM1_FLT0_FTM_CLKIN1_LPT0_ALT1_XTAL"
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
#define  _Cpu_MCGOutputCLKMode0 48.0F
#define  _Cpu_MCGOutputCLKMode0_STR "48.0"
#define  _Cpu_MCG_ERCLKSelectCLKMode0_0
#define  _Cpu_MCG_ERCLKSelectCLKMode0_STR "0"
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
#define  _Cpu_PLLOutputCLKMode0 48.0F
#define  _Cpu_PLLOutputCLKMode0_STR "48.0"
#define  _Cpu_MCG_PRDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_PRDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLRefClkCLKMode0 2.0F
#define  _Cpu_PLLRefClkCLKMode0_STR "2.0"
#define  _Cpu_MCG_VDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_VDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLL_LOLIECLKMode0 FALSE
#define  _Cpu_PLL_LOLIECLKMode0_Disabled
#define  _Cpu_InitPriority_15
#define  _Cpu_InitPriority_STR "15"
#define  _Cpu_WDOGDis TRUE
#define  _Cpu_WDOGDis_yes
#define  _Cpu_SharedADC0_1
#define  _Cpu_SharedADC0_STR "1"
#define  _Cpu_ADCCondGrp_
#define  _Cpu_ADC0CondGrp_
#define  _Cpu_ADC0AsynchroClock_Auto_selected_prescaler
#define  _Cpu_ADC0AsynchroClock_STR "Auto_selected_prescaler"
#define  _Cpu_ADC1CondGrp_
#define  _Cpu_ADC1AsynchroClock_Auto_selected_prescaler
#define  _Cpu_ADC1AsynchroClock_STR "Auto_selected_prescaler"
#define  _Cpu_ADC2CondGrp_
#define  _Cpu_ADC3CondGrp_
#define  _Cpu_ADC4CondGrp_
#define  _Cpu_SharedNMI_1
#define  _Cpu_SharedNMI_STR "1"
#define  _Cpu_NMINMIPinEn TRUE
#define  _Cpu_NMINMIPinEn_Enabled
#define  _Cpu_NMINMIPin_PTA4_FTM0_CH1_NMI_b_EZP_CS_b_TSI0_CH5
#define  _Cpu_NMINMIPin_STR "PTA4_FTM0_CH1_NMI_b_EZP_CS_b_TSI0_CH5"
#define  _Cpu_NMINMIPin_BITNUM 4
#define  _Cpu_NMINMIPinSignal_
#define  _Cpu_SharedNMI0_1
#define  _Cpu_SharedNMI0_STR "1"
#define  _Cpu_ResetFilterType_0
#define  _Cpu_ResetFilterType_STR "0"
#define  _Cpu_ResetFilterValue 1
#define  _Cpu_ResetPin_RESET_b
#define  _Cpu_ResetPin_STR "RESET_b"
#define  _Cpu_ResetPinSignal_
#define  _Cpu_SharedJTAG_1
#define  _Cpu_SharedJTAG_STR "1"
#define  _Cpu_JTAGMode_0
#define  _Cpu_JTAGMode_STR "0"
#define  _Cpu_JTAGTDIPinEn TRUE
#define  _Cpu_JTAGTDIPinEn_Enabled
#define  _Cpu_JTAGTDIPin_PTA1_UART0_RX_FTM0_CH6_JTAG_TDI_EZP_DI_TSI0_CH2
#define  _Cpu_JTAGTDIPin_STR "PTA1_UART0_RX_FTM0_CH6_JTAG_TDI_EZP_DI_TSI0_CH2"
#define  _Cpu_JTAGTDIPin_BITNUM 1
#define  _Cpu_JTAGTDIPinSignal_
#define  _Cpu_JTAGTDOPinEn TRUE
#define  _Cpu_JTAGTDOPinEn_Enabled
#define  _Cpu_JTAGTDOPin_PTA2_UART0_TX_FTM0_CH7_JTAG_TDO_TRACE_SWO_EZP_DO_TSI0_CH3
#define  _Cpu_JTAGTDOPin_STR "PTA2_UART0_TX_FTM0_CH7_JTAG_TDO_TRACE_SWO_EZP_DO_TSI0_CH3"
#define  _Cpu_JTAGTDOPin_BITNUM 2
#define  _Cpu_JTAGTDOPinSignal_
#define  _Cpu_JTAGTCKPinEn TRUE
#define  _Cpu_JTAGTCKPinEn_Enabled
#define  _Cpu_JTAGTCKPin_PTA0_UART0_CTS_b_FTM0_CH5_JTAG_TCLK_SWD_CLK_EZP_CLK_TSI0_CH1
#define  _Cpu_JTAGTCKPin_STR "PTA0_UART0_CTS_b_FTM0_CH5_JTAG_TCLK_SWD_CLK_EZP_CLK_TSI0_CH1"
#define  _Cpu_JTAGTCKPin_BITNUM 0
#define  _Cpu_JTAGTCKPinSignal_
#define  _Cpu_JTAGTMSPinEn TRUE
#define  _Cpu_JTAGTMSPinEn_Enabled
#define  _Cpu_JTAGTMSPin_PTA3_UART0_RTS_b_FTM0_CH0_JTAG_TMS_SWD_DIO_TSI0_CH4
#define  _Cpu_JTAGTMSPin_STR "PTA3_UART0_RTS_b_FTM0_CH0_JTAG_TMS_SWD_DIO_TSI0_CH4"
#define  _Cpu_JTAGTMSPin_BITNUM 3
#define  _Cpu_JTAGTMSPinSignal_
#define  _Cpu_JTAGnTRSTPinEn FALSE
#define  _Cpu_JTAGnTRSTPinEn_Disabled
#define  _Cpu_SharedFlashOrganization_1
#define  _Cpu_SharedFlashOrganization_STR "1"
#define  _Cpu_SharedFLASHGrp_1
#define  _Cpu_SharedFLASHGrp_STR "1"
#define  _Cpu_EEEfeatureGrp_
#define  _Cpu_FlexNVMSize_256_KB
#define  _Cpu_FlexNVMSize_STR "256_KB"
#define  _Cpu_Dpart_256
#define  _Cpu_Dpart_STR "256"
#define  _Cpu_Dpart__0
#define  _Cpu_Dpart__STR "0"
#define  _Cpu_DataFlashAvailable FALSE
#define  _Cpu_DataFlashAvailable_no
#define  _Cpu_EEPROMAvailable FALSE
#define  _Cpu_EEPROMAvailable_no
#define  _Cpu_EEPROMPartitionStart 268697600
#define  _Cpu_EEPROMPartitionSize 0
#define  _Cpu_EEEpart_0
#define  _Cpu_EEEpart_STR "0"
#define  _Cpu_EEEpart__0
#define  _Cpu_EEEpart__STR "0"
#define  _Cpu_FlexRAM FALSE
#define  _Cpu_FlexRAM_Disabled
#define  _Cpu_EEEFeatureIsInitialized TRUE
#define  _Cpu_EEEFeatureIsInitialized_yes
#define  _Cpu_FlashOrgDscrBlockList_2
#define  _Cpu_FlashOrgDscrBlockList_STR "2"
#define  _Cpu_FlashOrgDscrBlockList_NUMITEMS 2
#define  _Cpu_FlashOrgDscrBlockAddress0 0
#define  _Cpu_FlashOrgDscrBlockSize0 262144
#define  _Cpu_FlashOrgDscrBlockWUnitSize0 4
#define  _Cpu_FlashOrgDscrBlockEUnitSize0 2048
#define  _Cpu_FlashOrgDscrBlockPUnitSize0 8192
#define  _Cpu_FlashOrgDscrBlockAddress1 268435456
#define  _Cpu_FlashOrgDscrBlockSize1 262144
#define  _Cpu_FlashOrgDscrBlockWUnitSize1 4
#define  _Cpu_FlashOrgDscrBlockEUnitSize1 2048
#define  _Cpu_FlashOrgDscrBlockPUnitSize1 32768
#define  _Cpu_ShrdPFLASHGrp_1
#define  _Cpu_ShrdPFLASHGrp_STR "1"
#define  _Cpu_FMCGrp FALSE
#define  _Cpu_FMCGrp_Disabled
#define  _Cpu_ShrdFLASHCfgGrp_1
#define  _Cpu_ShrdFLASHCfgGrp_STR "1"
#define  _Cpu_FTFL_FlashConfigGrp FALSE
#define  _Cpu_FTFL_FlashConfigGrp_Disabled
#define  _Cpu_ShrdMPUGrp_1
#define  _Cpu_ShrdMPUGrp_STR "1"
#define  _Cpu_MPUGrp TRUE
#define  _Cpu_MPUGrp_Enabled
#define  _Cpu_PeriphDeviceMPU_MPU
#define  _Cpu_PeriphDeviceMPU_STR "MPU"
#define  _Cpu_MPUValidSetMPU FALSE
#define  _Cpu_MPUValidSetMPU_Disabled
#define  _Cpu_MPUIsInitialized TRUE
#define  _Cpu_MPUIsInitialized_yes
#define  _Cpu_ShrdAXBSGrp_1
#define  _Cpu_ShrdAXBSGrp_STR "1"
#define  _Cpu_AXBSGrp FALSE
#define  _Cpu_AXBSGrp_Disabled
#define  _Cpu_ShrdAIPS0Grp_1
#define  _Cpu_ShrdAIPS0Grp_STR "1"
#define  _Cpu_AIPS0Grp FALSE
#define  _Cpu_AIPS0Grp_Disabled
#define  _Cpu_ShrdAIPS1Grp_1
#define  _Cpu_ShrdAIPS1Grp_STR "1"
#define  _Cpu_AIPS1Grp FALSE
#define  _Cpu_AIPS1Grp_Disabled
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
#define  _Cpu_PMCTraditionalRAM_notPowered
#define  _Cpu_PMCTraditionalRAM_STR "notPowered"
#define  _Cpu_PMCBangapBuffer_disabled
#define  _Cpu_PMCBangapBuffer_STR "disabled"
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
#define  _Cpu_ShrdSCBGrp_1
#define  _Cpu_ShrdSCBGrp_STR "1"
#define  _Cpu_SystemControlGrp FALSE
#define  _Cpu_SystemControlGrp_Disabled
#define  _Cpu_ShrdSCBGrp1_1
#define  _Cpu_ShrdSCBGrp1_STR "1"
#define  _Cpu_PeriphDeviceSIM_SIM
#define  _Cpu_PeriphDeviceSIM_STR "SIM"
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
#define  _Cpu_ShrdFBusGrp_1
#define  _Cpu_ShrdFBusGrp_STR "1"
#define  _Cpu_ExternalBusGrp FALSE
#define  _Cpu_ExternalBusGrp_Disabled
#define  _Cpu_Shared_CPULowPowerGrp_1
#define  _Cpu_Shared_CPULowPowerGrp_STR "1"
#define  _Cpu_MC_AVLP TRUE
#define  _Cpu_MC_AVLP_0
#define  _Cpu_MC_ALLS TRUE
#define  _Cpu_MC_ALLS_0
#define  _Cpu_MC_AVLLS3 TRUE
#define  _Cpu_MC_AVLLS3_0
#define  _Cpu_MC_AVLLS2 TRUE
#define  _Cpu_MC_AVLLS2_0
#define  _Cpu_MC_AVLLS1 TRUE
#define  _Cpu_MC_AVLLS1_0
#define  _Cpu_ShrdLLWUGrp_1
#define  _Cpu_ShrdLLWUGrp_STR "1"
#define  _Cpu_LLWUGrp FALSE
#define  _Cpu_LLWUGrp_Disabled
#define  _Cpu_Shared_CPULowPowerGrp0_1
#define  _Cpu_Shared_CPULowPowerGrp0_STR "1"
#define  _Cpu_SetLowPowerModeGrp_
#define  _Cpu_SetOperationMode_WAIT_SLEEPONEXIT FALSE
#define  _Cpu_SetOperationMode_WAIT_SLEEPONEXIT_no
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
#define  _Cpu_RTC_OSCSpeedMode0 0.032768F
#define  _Cpu_RTC_OSCSpeedMode0_STR "0.032768"
#define  _Cpu_IRCLKSelSpeedMode0_IRC_32kHz
#define  _Cpu_IRCLKSelSpeedMode0_STR "IRC_32kHz"
#define  _Cpu_MCG_ERCLKSelSpeedMode0_SYSTEM_OSC
#define  _Cpu_MCG_ERCLKSelSpeedMode0_STR "SYSTEM_OSC"
#define  _Cpu_ERCLK32KSelSpeedMode0_SYSTEM_OSC
#define  _Cpu_ERCLK32KSelSpeedMode0_STR "SYSTEM_OSC"
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_MCG_FRDIV
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_STR "MCG_FRDIV"
#define  _Cpu_MCG_FRDIVSpeedMode0_256
#define  _Cpu_MCG_FRDIVSpeedMode0_STR "256"
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_640
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_STR "640"
#define  _Cpu_MCG_PRDIVSpeedMode0_4
#define  _Cpu_MCG_PRDIVSpeedMode0_STR "4"
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
#define  _Cpu_MCGOutputSpeedMode0 48.0F
#define  _Cpu_MCGOutputSpeedMode0_STR "48.0"
#define  _Cpu_IRCLKClkSpeedMode0_0_032768
#define  _Cpu_IRCLKClkSpeedMode0_STR "0_032768"
#define  _Cpu_ERCLKClkSpeedMode0_8
#define  _Cpu_ERCLKClkSpeedMode0_STR "8"
#define  _Cpu_ERCLK32KClkSpeedMode0_0
#define  _Cpu_ERCLK32KClkSpeedMode0_STR "0"
#define  _Cpu_FLLFixedClkSpeedMode0_15_625
#define  _Cpu_FLLFixedClkSpeedMode0_STR "15_625"
#define  _Cpu_OUTDIV1PrescSpeedMode0_1
#define  _Cpu_OUTDIV1PrescSpeedMode0_STR "1"
#define  _Cpu_OUTDIV1Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV1Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_CoreClockSpeedMode0 48.0F
#define  _Cpu_CoreClockSpeedMode0_STR "48.0"
#define  _Cpu_OUTDIV2PrescSpeedMode0_1
#define  _Cpu_OUTDIV2PrescSpeedMode0_STR "1"
#define  _Cpu_OUTDIV2Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV2Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_BusClockSpeedMode0 48.0F
#define  _Cpu_BusClockSpeedMode0_STR "48.0"
#define  _Cpu_OUTDIV3PrescSpeedMode0_2
#define  _Cpu_OUTDIV3PrescSpeedMode0_STR "2"
#define  _Cpu_OUTDIV3Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV3Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_ExternalBusClockSpeedMode0 24.0F
#define  _Cpu_ExternalBusClockSpeedMode0_STR "24.0"
#define  _Cpu_OUTDIV4PrescSpeedMode0_2
#define  _Cpu_OUTDIV4PrescSpeedMode0_STR "2"
#define  _Cpu_OUTDIV4Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV4Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_FlashClockSpeedMode0 24.0F
#define  _Cpu_FlashClockSpeedMode0_STR "24.0"
#define  _Cpu_PLLFLLCLkSelSpeedMode0_1
#define  _Cpu_PLLFLLCLkSelSpeedMode0_STR "1"
#define  _Cpu_PLLFLLSelSpeedMode0_MCGPLLCLK
#define  _Cpu_PLLFLLSelSpeedMode0_STR "MCGPLLCLK"
#define  _Cpu_PLLFLLClockSpeedMode0 48.0F
#define  _Cpu_PLLFLLClockSpeedMode0_STR "48.0"
#define  _Cpu_I2S0_CLKINCondGrp0_
#define  _Cpu_I2S0_CLKINSpeedMode0 0.0F
#define  _Cpu_I2S0_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_I2S1_CLKINCondGrp0_
#define  _Cpu_I2SClockCondGrp0_
#define  _Cpu_USBClockCondGrp0_
#define  _Cpu_USB0_CLKINSpeedMode0 0.0F
#define  _Cpu_USB0_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_USBDIVSpeedMode0__1
#define  _Cpu_USBDIVSpeedMode0_STR "_1"
#define  _Cpu_USBFRACSpeedMode0__1
#define  _Cpu_USBFRACSpeedMode0_STR "_1"
#define  _Cpu_USBClockSpeedMode0 48.0F
#define  _Cpu_USBClockSpeedMode0_STR "48.0"
#define  CPU_TICKS_REFERENCE_CLOCK_HZ 4000000.0F

/*lint -restore */

#endif /* __PE_ProjectInfo_H */
