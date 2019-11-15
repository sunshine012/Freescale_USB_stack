#ifndef __PE_ProjectInfo_H
#define __PE_ProjectInfo_H

/*lint -save -e621 */

/* Selected target CPU */
#define PE_CPUtype "MK60FN1M0LQ15"
#define PE_CPUtype_MK60FN1M0LQ15
#define PE_CPUfamily "Kinetis"
#define PE_CPUfamily_Kinetis
#define PE_CPUsubFamily "MK60"
#define PE_CPUsubFamily_MK60

/* Active PE configuration */
#define PEcfg_Configuration "RAM"
#ifndef PEcfg_RAM
#define PEcfg_RAM 1U
#endif

/* BEAN METHODS IN PROJECT */
#define  _usb_msc_USB_Service_Bulk_In
#define  _usb_msc_USB_Service_Bulk_Out
#define  _usb_msc_USB_Class_MSC_Event
#define  _usb_msc_USB_BYTE_SWAP4
#define  _usb_msc_USB_memzero
#define  _usb_msc_USB_memcopy
#define  _usb_msc_USB_Class_MSC_Init
#define  _usb_msc_USB_Class_MSC_DeInit
#define  _usb_msc_USB_MSC_LBA_Transfer
#define  _usb_msc_USB_Class_MSC_Send_Data
#define  _usb_msc_USB_MSC_SCSI_Init
#define  _usb_msc_msc_request_sense_command
#define  _usb_msc_msc_inquiry_command
#define  _usb_msc_msc_read_command
#define  _usb_msc_msc_write_command
#define  _usb_msc_msc_test_unit_ready_command
#define  _usb_msc_msc_verify_command
#define  _usb_msc_msc_mode_sense_command
#define  _usb_msc_msc_mode_select_command
#define  _usb_msc_msc_read_capacity_command
#define  _usb_msc_msc_read_format_capacity_command
#define  _usb_msc_msc_format_unit_command
#define  _usb_msc_msc_prevent_allow_medium_removal
#define  _usb_msc_msc_start_stop_unit_command
#define  _usb_msc_msc_send_diagnostic_command
#define  _usb_msc_msc_unsupported_command
#define  _usb_device_USB_Class_Init
#define  _usb_device_USB_Class_DeInit
#define  _usb_device_USB_Class_Send_Data
#define  _usb_device_USB_Class_Periodic_Task
#define  _usb_device__usb_device_init
#define  _usb_device__usb_device_deinit
#define  _usb_device__usb_device_init_endpoint
#define  _usb_device__usb_device_deinit_endpoint
#define  _usb_device__usb_device_get_status
#define  _usb_device__usb_device_set_status
#define  _usb_device__usb_device_register_service
#define  _usb_device__usb_device_unregister_service
#define  _usb_device_USB_Device_Call_Service
#define  _usb_device_USB_Framework_Init
#define  _usb_device_USB_Framework_DeInit
#define  _usb_device_USB_Framework_Reset
#define  _usb_device_USB_DCI_Bus_Reset_Handler
#define  _usb_device_USB_DCI_Init
#define  _usb_device_USB_DCI_DeInit
#define  _usb_device_USB_DCI_Init_EndPoint
#define  _usb_device_USB_DCI_Deinit_EndPoint
#define  _usb_device_USB_DCI_Cancel_Transfer
#define  _usb_device_USB_DCI_Stall_EndPoint
#define  _usb_device_USB_DCI_Unstall_EndPoint
#define  _usb_device_USB_DCI_Get_Setup_Data
#define  _usb_device_USB_DCI_Get_Transfer_Status
#define  _usb_device_USB_DCI_Recv_Data
#define  _usb_device_USB_DCI_Send_Data
#define  _usb_device_USB_DCI_Assert_Resume
#define  _usb_device_USB_DCI_Set_Address
#define  _usb_device_USB_DCI_OnDeviceSpeedDetect
#define  _usb_device_USB_DCI_OnDeviceSuspend
#define  _usb_device_USB_DCI_OnDeviceResume
#define  _usb_device_USB_DCI_OnDeviceSetupPacket
#define  _usb_device_USB_DCI_OnDeviceError
#define  _usb_device_Clear_Mem
#define  _usb_device_USB_Desc_Get_Descriptor
#define  _usb_device_USB_Desc_Get_Interface
#define  _usb_device_USB_Desc_Set_Interface
#define  _usb_device_USB_Desc_Valid_Configation
#define  _usb_device_USB_Desc_Valid_Interface
#define  _usb_device_USB_Desc_Remote_Wakeup
#define  _usb_device_USB_Desc_Get_Endpoints

/* BEAN EVENTS IN PROJECT */
#define  _Cpu_OnNMIINT

/* BEAN usb_msc PROPERTIES CONFIGURATION */
#define  _usb_msc_BeanTypeName_USB_MSD_CLASS
#define  _usb_msc_BeanTypeName_STR "USB_MSD_CLASS"
#define  _usb_msc_DeviceName_usb_msc
#define  _usb_msc_DeviceName_STR "usb_msc"
#define  _usb_msc_MSD_Mode_DEVICE
#define  _usb_msc_MSD_Mode_STR "DEVICE"
#define  _usb_msc_Usb_device_component_Usb_Device
#define  _usb_msc_Usb_device_component_STR "Usb_Device"
#define  _usb_msc_Protocol_80
#define  _usb_msc_Protocol_STR "80"
#define  _usb_msc_Subclass_06
#define  _usb_msc_Subclass_STR "06"
#define  _usb_msc_Interface_number 0
#define  _usb_msc_Ep0_max_packet_size_32
#define  _usb_msc_Ep0_max_packet_size_STR "32"
#define  _usb_msc_Speed_FULL_SPEED
#define  _usb_msc_Speed_STR "FULL_SPEED"
#define  _usb_msc_Bulk_in_number 1
#define  _usb_msc_EP_IN_max_packet_size_32
#define  _usb_msc_EP_IN_max_packet_size_STR "32"
#define  _usb_msc_Bulk_out_number 2
#define  _usb_msc_EP_OUT_max_packet_size_32
#define  _usb_msc_EP_OUT_max_packet_size_STR "32"
/* BEAN usb_device PROPERTIES CONFIGURATION */
#define  _usb_device_BeanTypeName_USB_DEVICE_STACK
#define  _usb_device_BeanTypeName_STR "USB_DEVICE_STACK"
#define  _usb_device_DeviceName_usb_device
#define  _usb_device_DeviceName_STR "usb_device"
#define  _usb_device_LDD_Component_USB_LDD
#define  _usb_device_LDD_Component_STR "USB_LDD"
#define  _usb_device_OS_None
#define  _usb_device_OS_STR "None"
#define  _usb_device_bcdUSB 512
#define  _usb_device_Device_Class 0
#define  _usb_device_Device_SubClass 0
#define  _usb_device_Device_Protocol 0
#define  _usb_device_MaxPacketSize_32
#define  _usb_device_MaxPacketSize_STR "32"
#define  _usb_device_VendorID 5538
#define  _usb_device_ProductID 512
#define  _usb_device_bcdDevice 2
#define  _usb_device_Manufacturer 1
#define  _usb_device_Product 2
#define  _usb_device_SerialNumber 3
#define  _usb_device_NumConfigurations 1
#define  _usb_device_NumInterfaces 1
#define  _usb_device_Configuration_Value 1
#define  _usb_device_Configuration_Index 0
#define  _usb_device_Attributes_Self_Powered
#define  _usb_device_Attributes_STR "Self_Powered"
#define  _usb_device_MaxPower 50
#define  _usb_device_Interfaces_List_1
#define  _usb_device_Interfaces_List_STR "1"
#define  _usb_device_Interfaces_List_NUMITEMS 1
#define  _usb_device_InterfaceNumber0 0
#define  _usb_device_AlternateSetting0 0
#define  _usb_device_NumEndpoints0 2
#define  _usb_device_InterfaceClass0 8
#define  _usb_device_InterfaceSubClass0 6
#define  _usb_device_InterfaceProtocol0 80
#define  _usb_device_Interface_des_index0 0
#define  _usb_device_Endpoints_List0_2
#define  _usb_device_Endpoints_List0_STR "2"
#define  _usb_device_Endpoints_List0_NUMITEMS 2
#define  _usb_device_EndpointNumber0_0 1
#define  _usb_device_EndpointDirection0_0 FALSE
#define  _usb_device_EndpointDirection0_0_IN
#define  _usb_device_Transfer_Type0_0_BULK
#define  _usb_device_Transfer_Type0_0_STR "BULK"
#define  _usb_device_Synchronisation_Type0_0_No_Synchonisation
#define  _usb_device_Synchronisation_Type0_0_STR "No_Synchonisation"
#define  _usb_device_Usage_Type0_0_Data_Endpoint
#define  _usb_device_Usage_Type0_0_STR "Data_Endpoint"
#define  _usb_device_EndpointMaxPacketSize0_0_32
#define  _usb_device_EndpointMaxPacketSize0_0_STR "32"
#define  _usb_device_EndpointMaxPacketSize_int_iso0_0 0
#define  _usb_device_Interval0_0 0
#define  _usb_device_EndpointNumber0_1 2
#define  _usb_device_EndpointDirection0_1 TRUE
#define  _usb_device_EndpointDirection0_1_OUT
#define  _usb_device_Transfer_Type0_1_BULK
#define  _usb_device_Transfer_Type0_1_STR "BULK"
#define  _usb_device_Synchronisation_Type0_1_No_Synchonisation
#define  _usb_device_Synchronisation_Type0_1_STR "No_Synchonisation"
#define  _usb_device_Usage_Type0_1_Data_Endpoint
#define  _usb_device_Usage_Type0_1_STR "Data_Endpoint"
#define  _usb_device_EndpointMaxPacketSize0_1_32
#define  _usb_device_EndpointMaxPacketSize0_1_STR "32"
#define  _usb_device_EndpointMaxPacketSize_int_iso0_1 0
#define  _usb_device_Interval0_1 0
#define  _usb_device_LANGID 2308
#define  _usb_device_String_desc_list_3
#define  _usb_device_String_desc_list_STR "3"
#define  _usb_device_String_desc_list_NUMITEMS 3
#define  _usb_device_String0_FREESCALE_SEMICONDUCTOR_INC_
#define  _usb_device_String0_STR "FREESCALE_SEMICONDUCTOR_INC_"
#define  _usb_device_String1_USB_MSD_DEVICE_PEx_DEMO
#define  _usb_device_String1_STR "USB_MSD_DEVICE_PEx_DEMO"
#define  _usb_device_String2_0123456789ABCDEF
#define  _usb_device_String2_STR "0123456789ABCDEF"
#define  _usb_device_Gen_desc_en FALSE
#define  _usb_device_Gen_desc_en_no
#define  _usb_device_OTG_en FALSE
#define  _usb_device_OTG_en_no
/* BEAN Cpu PROPERTIES CONFIGURATION */
#define  _Cpu_BeanTypeName_MK60FN1M0LQ15
#define  _Cpu_BeanTypeName_STR "MK60FN1M0LQ15"
#define  _Cpu_DeviceName_Cpu
#define  _Cpu_DeviceName_STR "Cpu"
#define  _Cpu_CPU_MK60FN1M0VLQ12
#define  _Cpu_CPU_STR "MK60FN1M0VLQ12"
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
#define  _Cpu_RTCOSCGrp FALSE
#define  _Cpu_RTCOSCGrp_Disabled
#define  _Cpu_SystemOSCGrp TRUE
#define  _Cpu_SystemOSCGrp_Enabled
#define  _Cpu_SystemOSCSrc_0
#define  _Cpu_SystemOSCSrc_STR "0"
#define  _Cpu_SystemOSCExtalPin_EXTAL0_PTA18_FTM0_FLT2_FTM_CLKIN0
#define  _Cpu_SystemOSCExtalPin_STR "EXTAL0_PTA18_FTM0_FLT2_FTM_CLKIN0"
#define  _Cpu_SystemOSCExtalPin_BITNUM 18
#define  _Cpu_SystemOSCExtalPinSignal_
#define  _Cpu_SystemOSC 50.0F
#define  _Cpu_SystemOSC_STR "50.0"
#define  _Cpu_SystemOSC1Grp FALSE
#define  _Cpu_SystemOSC1Grp_Disabled
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
#define  _Cpu_ERCLKClkCLKMode0 50.0F
#define  _Cpu_ERCLKClkCLKMode0_STR "50.0"
#define  _Cpu_SystemOSC1ERCLKENCLKMode0 TRUE
#define  _Cpu_SystemOSC1ERCLKENCLKMode0_Enabled
#define  _Cpu_SystemOSC1EREFSTENCLKMode0 FALSE
#define  _Cpu_SystemOSC1EREFSTENCLKMode0_Disabled
#define  _Cpu_ERCLK1ClkCLKMode0 0.0F
#define  _Cpu_ERCLK1ClkCLKMode0_STR "0.0"
#define  _Cpu_ERCLK32KSelectCLKMode0_0
#define  _Cpu_ERCLK32KSelectCLKMode0_STR "0"
#define  _Cpu_ERCLK32KClkCLKMode0 50.0F
#define  _Cpu_ERCLK32KClkCLKMode0_STR "50.0"
#define  _Cpu_MCGModeSelCLKMode0_4
#define  _Cpu_MCGModeSelCLKMode0_STR "4"
#define  _Cpu_PLLCSCLKMode0_0
#define  _Cpu_PLLCSCLKMode0_STR "0"
#define  _Cpu_MCGOUTSelectCLKMode0_PLLOUT
#define  _Cpu_MCGOUTSelectCLKMode0_STR "PLLOUT"
#define  _Cpu_MCGModeCLKMode0_
#define  _Cpu_MCGOutputCLKMode0 120.0F
#define  _Cpu_MCGOutputCLKMode0_STR "120.0"
#define  _Cpu_MCG_ERCLKSelectCLKMode0_0
#define  _Cpu_MCG_ERCLKSelectCLKMode0_STR "0"
#define  _Cpu_MCG_ERCLKClkCLKMode0 50.0F
#define  _Cpu_MCG_ERCLKClkCLKMode0_STR "50.0"
#define  _Cpu_MCGCMECLKMode0 FALSE
#define  _Cpu_MCGCMECLKMode0_Disabled
#define  _Cpu_FLLEnblCLKMode0 FALSE
#define  _Cpu_FLLEnblCLKMode0_Disabled
#define  _Cpu_FLLOutputCLKMode0 0.0F
#define  _Cpu_FLLOutputCLKMode0_STR "0.0"
#define  _Cpu_FLLFixedClkCLKMode0 24.4140625F
#define  _Cpu_FLLFixedClkCLKMode0_STR "24.4140625"
#define  _Cpu_FLL_RefClkSrcCLKMode0_0
#define  _Cpu_FLL_RefClkSrcCLKMode0_STR "0"
#define  _Cpu_MCG_FRDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_FRDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_FLLRefClkCLKMode0 48.828125F
#define  _Cpu_FLLRefClkCLKMode0_STR "48.828125"
#define  _Cpu_MCG_FLL_MFactor_CLKMode0_Auto_select
#define  _Cpu_MCG_FLL_MFactor_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLEnblCLKMode0 TRUE
#define  _Cpu_PLLEnblCLKMode0_Enabled
#define  _Cpu_PLLSTENCLKMode0 FALSE
#define  _Cpu_PLLSTENCLKMode0_Disabled
#define  _Cpu_PLLREFSELCLKMode0_0
#define  _Cpu_PLLREFSELCLKMode0_STR "0"
#define  _Cpu_PLLOutputCLKMode0 120.0F
#define  _Cpu_PLLOutputCLKMode0_STR "120.0"
#define  _Cpu_MCG_PRDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_PRDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLRefClkCLKMode0 10.0F
#define  _Cpu_PLLRefClkCLKMode0_STR "10.0"
#define  _Cpu_MCG_VDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_VDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLL_LOLIECLKMode0 FALSE
#define  _Cpu_PLL_LOLIECLKMode0_Disabled
#define  _Cpu_PLLEnbl1CLKMode0 FALSE
#define  _Cpu_PLLEnbl1CLKMode0_Disabled
#define  _Cpu_PLLSTEN1CLKMode0 FALSE
#define  _Cpu_PLLSTEN1CLKMode0_Disabled
#define  _Cpu_PLLOutput1CLKMode0 0.0F
#define  _Cpu_PLLOutput1CLKMode0_STR "0.0"
#define  _Cpu_PLLREFSEL1CLKMode0_0
#define  _Cpu_PLLREFSEL1CLKMode0_STR "0"
#define  _Cpu_MCG_PRDIV1_CLKMode0_Auto_select
#define  _Cpu_MCG_PRDIV1_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLRefClk1CLKMode0 1.0F
#define  _Cpu_PLLRefClk1CLKMode0_STR "1.0"
#define  _Cpu_MCG_VDIV1_CLKMode0_Auto_select
#define  _Cpu_MCG_VDIV1_CLKMode0_STR "Auto_select"
#define  _Cpu_PLL_LOLIE1CLKMode0 FALSE
#define  _Cpu_PLL_LOLIE1CLKMode0_Disabled
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
#define  _Cpu_ADC2AsynchroClock_Auto_selected_prescaler
#define  _Cpu_ADC2AsynchroClock_STR "Auto_selected_prescaler"
#define  _Cpu_ADC3CondGrp_
#define  _Cpu_ADC3AsynchroClock_Auto_selected_prescaler
#define  _Cpu_ADC3AsynchroClock_STR "Auto_selected_prescaler"
#define  _Cpu_ADC4CondGrp_
#define  _Cpu_SharedNMI_1
#define  _Cpu_SharedNMI_STR "1"
#define  _Cpu_NMINMIPinEn TRUE
#define  _Cpu_NMINMIPinEn_Enabled
#define  _Cpu_NMINMIPin_TSI0_CH5_PTA4_LLWU_P3_FTM0_CH1_NMI_b_EZP_CS_b
#define  _Cpu_NMINMIPin_STR "TSI0_CH5_PTA4_LLWU_P3_FTM0_CH1_NMI_b_EZP_CS_b"
#define  _Cpu_NMINMIPin_BITNUM 4
#define  _Cpu_NMINMIPinSignal_
#define  _Cpu_SharedNMI0_1
#define  _Cpu_SharedNMI0_STR "1"
#define  _Cpu_RCMGrp TRUE
#define  _Cpu_RCMGrp_Enabled
#define  _Cpu_PeriphDeviceRCM_RCM
#define  _Cpu_PeriphDeviceRCM_STR "RCM"
#define  _Cpu_RCMResetPin_RESET_b
#define  _Cpu_RCMResetPin_STR "RESET_b"
#define  _Cpu_RCMResetPinSignal_
#define  _Cpu_RCMFilterInStop_disabled
#define  _Cpu_RCMFilterInStop_STR "disabled"
#define  _Cpu_RCMFilterInRunWait_disabled
#define  _Cpu_RCMFilterInRunWait_STR "disabled"
#define  _Cpu_RCMFilterWidth 1
#define  _Cpu_RCMIsInitialized TRUE
#define  _Cpu_RCMIsInitialized_yes
#define  _Cpu_SharedJTAG_1
#define  _Cpu_SharedJTAG_STR "1"
#define  _Cpu_JTAGMode_0
#define  _Cpu_JTAGMode_STR "0"
#define  _Cpu_JTAGTDIPinEn TRUE
#define  _Cpu_JTAGTDIPinEn_Enabled
#define  _Cpu_JTAGTDIPin_TSI0_CH2_PTA1_UART0_RX_FTM0_CH6_JTAG_TDI_EZP_DI
#define  _Cpu_JTAGTDIPin_STR "TSI0_CH2_PTA1_UART0_RX_FTM0_CH6_JTAG_TDI_EZP_DI"
#define  _Cpu_JTAGTDIPin_BITNUM 1
#define  _Cpu_JTAGTDIPinSignal_
#define  _Cpu_JTAGTDOPinEn TRUE
#define  _Cpu_JTAGTDOPinEn_Enabled
#define  _Cpu_JTAGTDOPin_TSI0_CH3_PTA2_UART0_TX_FTM0_CH7_JTAG_TDO_TRACE_SWO_EZP_DO
#define  _Cpu_JTAGTDOPin_STR "TSI0_CH3_PTA2_UART0_TX_FTM0_CH7_JTAG_TDO_TRACE_SWO_EZP_DO"
#define  _Cpu_JTAGTDOPin_BITNUM 2
#define  _Cpu_JTAGTDOPinSignal_
#define  _Cpu_JTAGTCKPinEn TRUE
#define  _Cpu_JTAGTCKPinEn_Enabled
#define  _Cpu_JTAGTCKPin_TSI0_CH1_PTA0_UART0_CTS_b_UART0_COL_b_FTM0_CH5_JTAG_TCLK_SWD_CLK_EZP_CLK
#define  _Cpu_JTAGTCKPin_STR "TSI0_CH1_PTA0_UART0_CTS_b_UART0_COL_b_FTM0_CH5_JTAG_TCLK_SWD_CLK_EZP_CLK"
#define  _Cpu_JTAGTCKPin_BITNUM 0
#define  _Cpu_JTAGTCKPinSignal_
#define  _Cpu_JTAGTMSPinEn TRUE
#define  _Cpu_JTAGTMSPinEn_Enabled
#define  _Cpu_JTAGTMSPin_TSI0_CH4_PTA3_UART0_RTS_b_FTM0_CH0_JTAG_TMS_SWD_DIO
#define  _Cpu_JTAGTMSPin_STR "TSI0_CH4_PTA3_UART0_RTS_b_FTM0_CH0_JTAG_TMS_SWD_DIO"
#define  _Cpu_JTAGTMSPin_BITNUM 3
#define  _Cpu_JTAGTMSPinSignal_
#define  _Cpu_JTAGnTRSTPinEn FALSE
#define  _Cpu_JTAGnTRSTPinEn_Disabled
#define  _Cpu_SharedFlashOrganization_1
#define  _Cpu_SharedFlashOrganization_STR "1"
#define  _Cpu_SharedFLASHGrp_1
#define  _Cpu_SharedFLASHGrp_STR "1"
#define  _Cpu_EEEfeatureGrp_
#define  _Cpu_FlashOrgDscrBlockList_2
#define  _Cpu_FlashOrgDscrBlockList_STR "2"
#define  _Cpu_FlashOrgDscrBlockList_NUMITEMS 2
#define  _Cpu_FlashOrgDscrBlockAddress0 0
#define  _Cpu_FlashOrgDscrBlockSize0 524288
#define  _Cpu_FlashOrgDscrBlockWUnitSize0 8
#define  _Cpu_FlashOrgDscrBlockEUnitSize0 4096
#define  _Cpu_FlashOrgDscrBlockPUnitSize0 32768
#define  _Cpu_FlashOrgDscrBlockAddress1 524288
#define  _Cpu_FlashOrgDscrBlockSize1 524288
#define  _Cpu_FlashOrgDscrBlockWUnitSize1 8
#define  _Cpu_FlashOrgDscrBlockEUnitSize1 4096
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
#define  _Cpu_ShrdSCBGrp_1
#define  _Cpu_ShrdSCBGrp_STR "1"
#define  _Cpu_SystemControlGrp FALSE
#define  _Cpu_SystemControlGrp_Disabled
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
#define  _Cpu_SIMCMTUARTPAD_singlePad
#define  _Cpu_SIMCMTUARTPAD_STR "singlePad"
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
#define  _Cpu_SetOperationMode_SLEEP_SLEEPONEXIT FALSE
#define  _Cpu_SetOperationMode_SLEEP_SLEEPONEXIT_no
#define  _Cpu_SetOperationMode_STOP FALSE
#define  _Cpu_SetOperationMode_STOP_Disabled
#define  _Cpu_SpeedModeList_1
#define  _Cpu_SpeedModeList_STR "1"
#define  _Cpu_SpeedModeList_NUMITEMS 1
#define  _Cpu_IRC_32kHzSpeedMode0 0.032768F
#define  _Cpu_IRC_32kHzSpeedMode0_STR "0.032768"
#define  _Cpu_IRC_4MHzSpeedMode0 2.0F
#define  _Cpu_IRC_4MHzSpeedMode0_STR "2.0"
#define  _Cpu_SYSTEM_OSCSpeedMode0 50.0F
#define  _Cpu_SYSTEM_OSCSpeedMode0_STR "50.0"
#define  _Cpu_OSC1SpeedMode0 8.0F
#define  _Cpu_OSC1SpeedMode0_STR "8.0"
#define  _Cpu_RTC_OSCSpeedMode0 0.032768F
#define  _Cpu_RTC_OSCSpeedMode0_STR "0.032768"
#define  _Cpu_IRCLKSelSpeedMode0_IRC_32kHz
#define  _Cpu_IRCLKSelSpeedMode0_STR "IRC_32kHz"
#define  _Cpu_MCG_ERCLKSelSpeedMode0_SYSTEM_OSC
#define  _Cpu_MCG_ERCLKSelSpeedMode0_STR "SYSTEM_OSC"
#define  _Cpu_PLLREFSEL0SelSpeedMode0_SYSTEM_OSC
#define  _Cpu_PLLREFSEL0SelSpeedMode0_STR "SYSTEM_OSC"
#define  _Cpu_PLLREFSEL1SelSpeedMode0_Auto_selected_prescaler
#define  _Cpu_PLLREFSEL1SelSpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_ERCLK32KSelSpeedMode0_SYSTEM_OSC
#define  _Cpu_ERCLK32KSelSpeedMode0_STR "SYSTEM_OSC"
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_MCG_FRDIV
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_STR "MCG_FRDIV"
#define  _Cpu_MCG_FRDIVSpeedMode0_1024
#define  _Cpu_MCG_FRDIVSpeedMode0_STR "1024"
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_640
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_STR "640"
#define  _Cpu_MCG_PRDIVSpeedMode0_5
#define  _Cpu_MCG_PRDIVSpeedMode0_STR "5"
#define  _Cpu_MCG_VDIVSpeedMode0_24
#define  _Cpu_MCG_VDIVSpeedMode0_STR "24"
#define  _Cpu_MCG_PRDIV1SpeedMode0_Auto_selected_prescaler
#define  _Cpu_MCG_PRDIV1SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_MCG_VDIV1SpeedMode0_Auto_selected_prescaler
#define  _Cpu_MCG_VDIV1SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_MCGPLLCSCLKSelSpeedMode0_MCGPLL0CLK
#define  _Cpu_MCGPLLCSCLKSelSpeedMode0_STR "MCGPLL0CLK"
#define  _Cpu_MCGOUTSelSpeedMode0_MCGPLLCLK
#define  _Cpu_MCGOUTSelSpeedMode0_STR "MCGPLLCLK"
#define  _Cpu_VLPRSpeedMode0 FALSE
#define  _Cpu_VLPRSpeedMode0_Disabled
#define  _Cpu_CLKModeSpeedMode0_0
#define  _Cpu_CLKModeSpeedMode0_STR "0"
#define  _Cpu_MCGModeSelSpeedMode0_4
#define  _Cpu_MCGModeSelSpeedMode0_STR "4"
#define  _Cpu_MCGOutputSpeedMode0 120.0F
#define  _Cpu_MCGOutputSpeedMode0_STR "120.0"
#define  _Cpu_IRCLKClkSpeedMode0_0_032768
#define  _Cpu_IRCLKClkSpeedMode0_STR "0_032768"
#define  _Cpu_ERCLKClkSpeedMode0_50
#define  _Cpu_ERCLKClkSpeedMode0_STR "50"
#define  _Cpu_ERCLK32KClkSpeedMode0_50
#define  _Cpu_ERCLK32KClkSpeedMode0_STR "50"
#define  _Cpu_FLLFixedClkSpeedMode0_24_4140625
#define  _Cpu_FLLFixedClkSpeedMode0_STR "24_4140625"
#define  _Cpu_OUTDIV1PrescSpeedMode0_2
#define  _Cpu_OUTDIV1PrescSpeedMode0_STR "2"
#define  _Cpu_OUTDIV1Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV1Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_CoreClockSpeedMode0 60.0F
#define  _Cpu_CoreClockSpeedMode0_STR "60.0"
#define  _Cpu_OUTDIV2PrescSpeedMode0_2
#define  _Cpu_OUTDIV2PrescSpeedMode0_STR "2"
#define  _Cpu_OUTDIV2Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV2Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_BusClockSpeedMode0 60.0F
#define  _Cpu_BusClockSpeedMode0_STR "60.0"
#define  _Cpu_OUTDIV3PrescSpeedMode0_5
#define  _Cpu_OUTDIV3PrescSpeedMode0_STR "5"
#define  _Cpu_OUTDIV3Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV3Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_ExternalBusClockSpeedMode0 24.0F
#define  _Cpu_ExternalBusClockSpeedMode0_STR "24.0"
#define  _Cpu_OUTDIV4PrescSpeedMode0_10
#define  _Cpu_OUTDIV4PrescSpeedMode0_STR "10"
#define  _Cpu_OUTDIV4Presc_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV4Presc_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_FlashClockSpeedMode0 12.0F
#define  _Cpu_FlashClockSpeedMode0_STR "12.0"
#define  _Cpu_USB0_CLKINSpeedMode0 0.0F
#define  _Cpu_USB0_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_USBHS_CLKINSpeedMode0 60.0F
#define  _Cpu_USBHS_CLKINSpeedMode0_STR "60.0"
#define  _Cpu_PLLFLLCLkSelSpeedMode0_1
#define  _Cpu_PLLFLLCLkSelSpeedMode0_STR "1"
#define  _Cpu_PLLFLLSelSpeedMode0_MCGPLL0CLK
#define  _Cpu_PLLFLLSelSpeedMode0_STR "MCGPLL0CLK"
#define  _Cpu_PLLFLLClockSpeedMode0 120.0F
#define  _Cpu_PLLFLLClockSpeedMode0_STR "120.0"
#define  _Cpu_I2S0_CLKINCondGrp0_
#define  _Cpu_I2S0_CLKINSpeedMode0 0.0F
#define  _Cpu_I2S0_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_I2S1_CLKINCondGrp0_
#define  _Cpu_I2S1_CLKINSpeedMode0 0.0F
#define  _Cpu_I2S1_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_I2SClockCondGrp0_
#define  _Cpu_I2S0_MclkClkSrcCondGrp0_
#define  _Cpu_I2S0_MclkPinSourceSpeedMode0_Auto_selected_prescaler
#define  _Cpu_I2S0_MclkPinSourceSpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_I2S1_MclkClkSrcCondGrp0_
#define  _Cpu_I2S1_MclkPinSourceSpeedMode0_Auto_selected_prescaler
#define  _Cpu_I2S1_MclkPinSourceSpeedMode0_STR "Auto_selected_prescaler"
#define  CPU_TICKS_REFERENCE_CLOCK_HZ 4000000.0F

/*lint -restore */

#endif /* __PE_ProjectInfo_H */
