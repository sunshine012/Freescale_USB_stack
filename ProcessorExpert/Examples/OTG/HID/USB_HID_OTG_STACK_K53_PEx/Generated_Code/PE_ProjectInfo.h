#ifndef __PE_ProjectInfo_H
#define __PE_ProjectInfo_H

/*lint -save -e621 */

/* Selected target CPU */
#define PE_CPUtype "MK53N512MD100"
#define PE_CPUtype_MK53N512MD100
#define PE_CPUfamily "Kinetis"
#define PE_CPUfamily_Kinetis
#define PE_CPUsubFamily "MK53"
#define PE_CPUsubFamily_MK53

/* Active PE configuration */
#define PEcfg_Configuration "MK53DN512ZCMD10_INTERNAL_RAM"
#ifndef PEcfg_MK53DN512ZCMD10_INTERNAL_RAM
#define PEcfg_MK53DN512ZCMD10_INTERNAL_RAM 1U
#endif

/* BEAN METHODS IN PROJECT */
#define  _usb_otg_USB_Class_Init
#define  _usb_otg_USB_Class_DeInit
#define  _usb_otg_USB_Class_Send_Data
#define  _usb_otg_usb_class_hub_init
#define  _usb_otg_usb_class_hub_cntrl_callback
#define  _usb_otg_usb_class_hub_cntrl_common
#define  _usb_otg_usb_class_hub_get_descriptor
#define  _usb_otg_usb_class_hub_set_port_feature
#define  _usb_otg_usb_class_hub_clear_port_feature
#define  _usb_otg_usb_class_hub_get_port_status
#define  _usb_otg_usb_host_hub_device_event
#define  _usb_otg__usb_khci_task
#define  _usb_otg__usb_event_init
#define  _usb_otg__usb_event_clear
#define  _usb_otg__usb_event_wait_ticks
#define  _usb_otg__usb_host_register_ch9_callback
#define  _usb_otg__usb_host_ch9_clear_feature
#define  _usb_otg__usb_host_ch9_get_configuration
#define  _usb_otg__usb_host_ch9_get_descriptor
#define  _usb_otg__usb_host_ch9_get_interface
#define  _usb_otg__usb_host_ch9_get_status
#define  _usb_otg__usb_host_ch9_synch_frame
#define  _usb_otg__usb_host_ch9_set_address
#define  _usb_otg__usb_host_ch9_set_descriptor
#define  _usb_otg__usb_host_ch9_set_interface
#define  _usb_otg__usb_hostdev_cntrl_request
#define  _usb_otg__usb_host_close_pipe
#define  _usb_otg__usb_host_close_all_pipes
#define  _usb_otg__usb_host_cancel_transfer
#define  _usb_otg_usb_hostdev_validate
#define  _usb_otg__usb_hostdev_get_buffer
#define  _usb_otg__usb_hostdev_get_descriptor
#define  _usb_otg__usb_hostdev_find_pipe_handle
#define  _usb_otg_usb_hostdev_get_pipe_handle
#define  _usb_otg_usb_host_class_intf_init
#define  _usb_otg_usb_host_class_intf_validate
#define  _usb_otg__usb_host_driver_info_register
#define  _usb_otg__usb_hostdev_select_config
#define  _usb_otg__usb_hostdev_select_interface
#define  _usb_otg_usb_dev_list_attach_device
#define  _usb_otg_usb_hostdev_tr_init
#define  _usb_otg__usb_host_init
#define  _usb_otg__usb_host_register_service
#define  _usb_otg__usb_host_unregister_service
#define  _usb_otg__usb_host_open_pipe
#define  _usb_otg__usb_host_send_setup
#define  _usb_otg__usb_host_get_transfer_status
#define  _usb_otg__usb_host_recv_data
#define  _usb_otg__usb_host_shutdown
#define  _usb_otg__usb_host_get_frame_number
#define  _usb_otg__usb_host_get_micro_frame_number
#define  _usb_otg__usb_host_send_data
#define  _usb_otg__usb_otg_sm
#define  _usb_otg__usb_otg_a_change_state
#define  _usb_otg__usb_otg_b_change_state
#define  _usb_otg__usb_otg_init
#define  _usb_otg__usb_otg_register_callback
#define  _usb_otg__usb_otg_session_request
#define  _usb_otg__usb_otg_bus_request
#define  _usb_otg__usb_otg_bus_release
#define  _usb_otg__usb_otg_hnp_enable
#define  _usb_otg__usb_otg_task
#define  _usb_otg__usb_otg_ext_isr
#define  _usb_otg__usb_otg_set_a_bus_req
#define  _usb_otg__usb_otg_set_a_bus_drop
#define  _usb_otg__usb_otg_set_a_clear_err
#define  _usb_otg__usb_otg_a_set_b_hnp_en
#define  _usb_otg__usb_otg_get_otg_attribute
#define  _usb_otg__usb_otg_set_feature_required
#define  _usb_otg__usb_otg_on_interface_event
#define  _usb_otg__usb_otg_on_detach_event
#define  _usb_otg_MAX3353_Init
#define  _usb_otg__otg_max3353_enable_disable
#define  _usb_otg__otg_max3353_get_status
#define  _usb_otg__otg_max3353_get_interrupts
#define  _usb_otg__otg_max3353_set_pdowns
#define  _usb_otg__otg_max3353_set_VBUS
#define  _usb_otg_MAX3353_GetUsbInputSignal
#define  _usb_otg_MAX3353_SetUsbOutputSignal
#define  _AS1_Init
#define  _AS1_Deinit
#define  _AS1_SendBlock
#define  _AS1_ReceiveBlock
#define  _AS1_GetSentDataNum
#define  _AS1_GetReceivedDataNum
#define  _AS1_Main
#define  _PTC5_Init
#define  _PTC5_Deinit
#define  _PTC5_SetFieldValue
#define  _PTC5_GetFieldValue
#define  _PTC5_ClearFieldBits
#define  _PTC5_SetFieldBits
#define  _PTC5_ToggleFieldBits
#define  _PTC5_SetFieldInputDirection
#define  _PTC5_SetFieldOutputDirection
#define  _PTC5_ConnectPin

/* BEAN EVENTS IN PROJECT */
#define  _AS1_OnBlockReceived
#define  _AS1_OnBlockSent
#define  _PTC5_OnPortEvent
#define  _Cpu_OnNMIINT

/* BEAN usb_otg PROPERTIES CONFIGURATION */
#define  _usb_otg_BeanTypeName_USB_OTG_STACK
#define  _usb_otg_BeanTypeName_STR "USB_OTG_STACK"
#define  _usb_otg_DeviceName_usb_otg
#define  _usb_otg_DeviceName_STR "usb_otg"
#define  _usb_otg_LDD_Component_USB_LDD
#define  _usb_otg_LDD_Component_STR "USB_LDD"
#define  _usb_otg_Max3353_INT_Pin_OTG_MAX3353_INT_PIN
#define  _usb_otg_Max3353_INT_Pin_STR "OTG_MAX3353_INT_PIN"
#define  _usb_otg_Max3353_I2C_OTG_MAX3353
#define  _usb_otg_Max3353_I2C_STR "OTG_MAX3353"
#define  _usb_otg_bcdUSB 512
#define  _usb_otg_Device_Class 0
#define  _usb_otg_Device_SubClass 0
#define  _usb_otg_Device_Protocol 0
#define  _usb_otg_MaxPacketSize_32
#define  _usb_otg_MaxPacketSize_STR "32"
#define  _usb_otg_VendorID 5538
#define  _usb_otg_ProductID 257
#define  _usb_otg_bcdDevice 2
#define  _usb_otg_Manufacturer 1
#define  _usb_otg_Product 2
#define  _usb_otg_SerialNumber 0
#define  _usb_otg_NumConfigurations 1
#define  _usb_otg_NumInterfaces 1
#define  _usb_otg_Configuration_Value 1
#define  _usb_otg_Configuration_Index 0
#define  _usb_otg_Attributes_Self_Powered
#define  _usb_otg_Attributes_STR "Self_Powered"
#define  _usb_otg_MaxPower 50
#define  _usb_otg_Interfaces_List_1
#define  _usb_otg_Interfaces_List_STR "1"
#define  _usb_otg_Interfaces_List_NUMITEMS 1
#define  _usb_otg_InterfaceNumber0 0
#define  _usb_otg_AlternateSetting0 0
#define  _usb_otg_NumEndpoints0 1
#define  _usb_otg_InterfaceClass0 3
#define  _usb_otg_InterfaceSubClass0 1
#define  _usb_otg_InterfaceProtocol0 1
#define  _usb_otg_Interface_des_index0 0
#define  _usb_otg_Endpoints_List0_1
#define  _usb_otg_Endpoints_List0_STR "1"
#define  _usb_otg_Endpoints_List0_NUMITEMS 1
#define  _usb_otg_EndpointNumber0_0 1
#define  _usb_otg_EndpointDirection0_0 FALSE
#define  _usb_otg_EndpointDirection0_0_IN
#define  _usb_otg_Transfer_Type0_0_INTERRUPT
#define  _usb_otg_Transfer_Type0_0_STR "INTERRUPT"
#define  _usb_otg_Synchronisation_Type0_0_No_Synchonisation
#define  _usb_otg_Synchronisation_Type0_0_STR "No_Synchonisation"
#define  _usb_otg_Usage_Type0_0_Data_Endpoint
#define  _usb_otg_Usage_Type0_0_STR "Data_Endpoint"
#define  _usb_otg_EndpointMaxPacketSize0_0_32
#define  _usb_otg_EndpointMaxPacketSize0_0_STR "32"
#define  _usb_otg_EndpointMaxPacketSize_int_iso0_0 8
#define  _usb_otg_Interval0_0 10
#define  _usb_otg_LANGID 2308
#define  _usb_otg_String_desc_list_2
#define  _usb_otg_String_desc_list_STR "2"
#define  _usb_otg_String_desc_list_NUMITEMS 2
#define  _usb_otg_String0_FREESCALE_SEMICONDUCTOR_INC_
#define  _usb_otg_String0_STR "FREESCALE_SEMICONDUCTOR_INC_"
#define  _usb_otg_String1_USB_HID_OTG_DEVICE_PEx_DEMO
#define  _usb_otg_String1_STR "USB_HID_OTG_DEVICE_PEx_DEMO"
#define  _usb_otg_Gen_desc_en TRUE
#define  _usb_otg_Gen_desc_en_yes
#define  _usb_otg_OTG_en FALSE
#define  _usb_otg_OTG_en_no
#define  _usb_otg_Common_Class TRUE
#define  _usb_otg_Common_Class_yes
#define  _usb_otg_Use_Poll TRUE
#define  _usb_otg_Use_Poll_yes
#define  _usb_otg_Use_Hub TRUE
#define  _usb_otg_Use_Hub_yes
#define  _usb_otg_Class_List_1
#define  _usb_otg_Class_List_STR "1"
#define  _usb_otg_Class_List_NUMITEMS 1
#define  _usb_otg_Class_Name0_hid_keyboard
#define  _usb_otg_Class_Name0_STR "hid_keyboard"
#define  _usb_otg_Class_Code0 3
#define  _usb_otg_SubClass_Code0 0
#define  _usb_otg_Protocol_Code0 0
#define  _usb_otg_Class_Code_Mask0 255
#define  _usb_otg_SubClass_Code_Mask0 0
#define  _usb_otg_Protocol_Code_Mask0 0
/* BEAN AS1 PROPERTIES CONFIGURATION */
#define  _AS1_BeanTypeName_Serial_LDD
#define  _AS1_BeanTypeName_STR "Serial_LDD"
#define  _AS1_DeviceName_AS1
#define  _AS1_DeviceName_STR "AS1"
#define  _AS1_Device_UART3
#define  _AS1_Device_STR "UART3"
#define  _AS1_ReentrantMethods FALSE
#define  _AS1_ReentrantMethods_no
#define  _AS1_IntService FALSE
#define  _AS1_IntService_Disabled
#define  _AS1_DataWidth_8
#define  _AS1_DataWidth_STR "8"
#define  _AS1_Parity_None
#define  _AS1_Parity_STR "None"
#define  _AS1_StopBits_1
#define  _AS1_StopBits_STR "1"
#define  _AS1_LoopMode_Normal
#define  _AS1_LoopMode_STR "Normal"
#define  _AS1_BdRate_value 115200.0F   /* This is timing required by the user - may not match with the set value */
#define  _AS1_BdRate_unit baud         /* This is timing required by the user - may not match with the set value */
#define  _AS1_BdRate_unit_baud         /* This is timing required by the user - may not match with the set value */
#define  _AS1_BdRate_valueSet 115246.09843937578F /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _AS1_BdRate_unitSet baud      /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _AS1_BdRate_unitSet_baud      /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _AS1_BdRate_NumTimingItems 1
#define  _AS1_WakeupCond_IdleLine
#define  _AS1_WakeupCond_STR "IdleLine"
#define  _AS1_StopInWait FALSE
#define  _AS1_StopInWait_no
#define  _AS1_IdleMode_AfterStartBit
#define  _AS1_IdleMode_STR "AfterStartBit"
#define  _AS1_SCIOutMode_0
#define  _AS1_SCIOutMode_STR "0"
#define  _AS1_TxPolarity_NotInverted
#define  _AS1_TxPolarity_STR "NotInverted"
#define  _AS1_RxPolarity_NotInverted
#define  _AS1_RxPolarity_STR "NotInverted"
#define  _AS1_BreakLength_10_11
#define  _AS1_BreakLength_STR "10_11"
#define  _AS1_Receiver TRUE
#define  _AS1_Receiver_Enabled
#define  _AS1_Inp_PTC16_UART3_RX_ENET0_1588_TMR0_LCD_P36
#define  _AS1_Inp_STR "PTC16_UART3_RX_ENET0_1588_TMR0_LCD_P36"
#define  _AS1_Inp_BITNUM 16
#define  _AS1_RxDpinSignal_
#define  _AS1_Transmitter TRUE
#define  _AS1_Transmitter_Enabled
#define  _AS1_Out_PTC17_UART3_TX_ENET0_1588_TMR1_LCD_P37
#define  _AS1_Out_STR "PTC17_UART3_TX_ENET0_1588_TMR1_LCD_P37"
#define  _AS1_Out_BITNUM 17
#define  _AS1_TxDpinSignal_
#define  _AS1_FlowControlGrp_None
#define  _AS1_FlowControlGrp_STR "None"
#define  _AS1_InitEnable TRUE
#define  _AS1_InitEnable_yes
#define  _AS1_AutoInitializationGrp_1
#define  _AS1_AutoInitializationGrp_STR "1"
#define  _AS1_AutoInitialization FALSE
#define  _AS1_AutoInitialization_no
#define  _AS1_OnBlockSentInitState TRUE
#define  _AS1_OnBlockSentInitState_Enabled
#define  _AS1_OnBlockReceivedInitState TRUE
#define  _AS1_OnBlockReceivedInitState_Enabled
#define  _AS1_OnTxCompleteInitState FALSE
#define  _AS1_OnTxCompleteInitState_Disabled
#define  _AS1_OnErrorInitState FALSE
#define  _AS1_OnErrorInitState_Disabled
#define  _AS1_OnBreakInitState FALSE
#define  _AS1_OnBreakInitState_Disabled
#define  _AS1_ClockConfigGrp_1
#define  _AS1_ClockConfigGrp_STR "1"
#define  _AS1_SpeedMode0_0
#define  _AS1_SpeedMode0_STR "0"
#define  _AS1_SpeedMode1_1
#define  _AS1_SpeedMode1_STR "1"
#define  _AS1_SpeedMode2_1
#define  _AS1_SpeedMode2_STR "1"
#define  _AS1_SpeedMode3_1
#define  _AS1_SpeedMode3_STR "1"
#define  _AS1_SpeedMode4_1
#define  _AS1_SpeedMode4_STR "1"
#define  _AS1_SpeedMode5_1
#define  _AS1_SpeedMode5_STR "1"
#define  _AS1_SpeedMode6_1
#define  _AS1_SpeedMode6_STR "1"
#define  _AS1_SpeedMode7_1
#define  _AS1_SpeedMode7_STR "1"
/* BEAN PTC5 PROPERTIES CONFIGURATION */
#define  _PTC5_BeanTypeName_GPIO_LDD
#define  _PTC5_BeanTypeName_STR "GPIO_LDD"
#define  _PTC5_DeviceName_PTC5
#define  _PTC5_DeviceName_STR "PTC5"
#define  _PTC5_Port_PTC
#define  _PTC5_Port_STR "PTC"
#define  _PTC5_PortWidthProp_32_bits
#define  _PTC5_PortWidthProp_STR "32_bits"
#define  _PTC5_AllocatedPinsMaskProp_32
#define  _PTC5_AllocatedPinsMaskProp_STR "32"
#define  _PTC5_ReentrantMethods FALSE
#define  _PTC5_ReentrantMethods_no
#define  _PTC5_IntService TRUE
#define  _PTC5_IntService_Enabled
#define  _PTC5_PortInterrupt_INT_PORTC
#define  _PTC5_PortInterrupt_STR "INT_PORTC"
#define  _PTC5_PortInterruptPriority_8
#define  _PTC5_PortInterruptPriority_STR "8"
#define  _PTC5_BitFields_1
#define  _PTC5_BitFields_STR "1"
#define  _PTC5_BitFields_NUMITEMS 1
#define  _PTC5_FieldName0_key
#define  _PTC5_FieldName0_STR "key"
#define  _PTC5_FieldMaskProp0_32
#define  _PTC5_FieldMaskProp0_STR "32"
#define  _PTC5_FieldStartBit0 5
#define  _PTC5_AllocatedPins0_1
#define  _PTC5_AllocatedPins0_STR "1"
#define  _PTC5_AllocatedPins0_NUMITEMS 1
#define  _PTC5_Pin0_0_PTC5_SPI0_SCK_LPT0_ALT2_CMP0_OUT_LCD_P25
#define  _PTC5_Pin0_0_STR "PTC5_SPI0_SCK_LPT0_ALT2_CMP0_OUT_LCD_P25"
#define  _PTC5_Pin0_0_BITNUM 5
#define  _PTC5_PinSignal0_0_
#define  _PTC5_PinFieldIndexProp0_0_0
#define  _PTC5_PinFieldIndexProp0_0_STR "0"
#define  _PTC5_PinIndexProp0_0_5
#define  _PTC5_PinIndexProp0_0_STR "5"
#define  _PTC5_PinFieldMaskProp0_0_1
#define  _PTC5_PinFieldMaskProp0_0_STR "1"
#define  _PTC5_PinMaskProp0_0_32
#define  _PTC5_PinMaskProp0_0_STR "32"
#define  _PTC5_InitPinDirection0_0 FALSE
#define  _PTC5_InitPinDirection0_0_Input
#define  _PTC5_InitialInterrupt0_0_Rising
#define  _PTC5_InitialInterrupt0_0_STR "Rising"
#define  _PTC5_LockInitSupport0_0_
#define  _PTC5_Lock0_0 FALSE
#define  _PTC5_Lock0_0_no
#define  _PTC5_AutoInitializationGrp_1
#define  _PTC5_AutoInitializationGrp_STR "1"
#define  _PTC5_AutoInitialization TRUE
#define  _PTC5_AutoInitialization_yes
#define  _PTC5_OnPortEventInitState TRUE
#define  _PTC5_OnPortEventInitState_Enabled
/* BEAN Cpu PROPERTIES CONFIGURATION */
#define  _Cpu_BeanTypeName_MK53N512MD100
#define  _Cpu_BeanTypeName_STR "MK53N512MD100"
#define  _Cpu_DeviceName_Cpu
#define  _Cpu_DeviceName_STR "Cpu"
#define  _Cpu_CPU_MK53DN512ZCMD10
#define  _Cpu_CPU_STR "MK53DN512ZCMD10"
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
#define  _Cpu_SystemOSCExtalPin_PTA18_FTM0_FLT2_FTM_CLKIN0_EXTAL
#define  _Cpu_SystemOSCExtalPin_STR "PTA18_FTM0_FLT2_FTM_CLKIN0_EXTAL"
#define  _Cpu_SystemOSCExtalPin_BITNUM 18
#define  _Cpu_SystemOSCExtalPinSignal_
#define  _Cpu_SystemOSC 50.0F
#define  _Cpu_SystemOSC_STR "50.0"
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
#define  _Cpu_FlashOrgDscrBlockList_2
#define  _Cpu_FlashOrgDscrBlockList_STR "2"
#define  _Cpu_FlashOrgDscrBlockList_NUMITEMS 2
#define  _Cpu_FlashOrgDscrBlockAddress0 0
#define  _Cpu_FlashOrgDscrBlockSize0 262144
#define  _Cpu_FlashOrgDscrBlockWUnitSize0 4
#define  _Cpu_FlashOrgDscrBlockEUnitSize0 2048
#define  _Cpu_FlashOrgDscrBlockPUnitSize0 16384
#define  _Cpu_FlashOrgDscrBlockAddress1 262144
#define  _Cpu_FlashOrgDscrBlockSize1 262144
#define  _Cpu_FlashOrgDscrBlockWUnitSize1 4
#define  _Cpu_FlashOrgDscrBlockEUnitSize1 2048
#define  _Cpu_FlashOrgDscrBlockPUnitSize1 16384
#define  _Cpu_ShrdPFLASHGrp_1
#define  _Cpu_ShrdPFLASHGrp_STR "1"
#define  _Cpu_FMCGrp TRUE
#define  _Cpu_FMCGrp_Enabled
#define  _Cpu_PeriphDeviceFMC_FMC
#define  _Cpu_PeriphDeviceFMC_STR "FMC"
#define  _Cpu_FMCMaster0Prefetch_enabled
#define  _Cpu_FMCMaster0Prefetch_STR "enabled"
#define  _Cpu_FMCMaster0AccessProtection_read_write
#define  _Cpu_FMCMaster0AccessProtection_STR "read_write"
#define  _Cpu_FMCMaster1Prefetch_enabled
#define  _Cpu_FMCMaster1Prefetch_STR "enabled"
#define  _Cpu_FMCMaster1AccessProtection_read_write
#define  _Cpu_FMCMaster1AccessProtection_STR "read_write"
#define  _Cpu_FMCMaster2Prefetch_enabled
#define  _Cpu_FMCMaster2Prefetch_STR "enabled"
#define  _Cpu_FMCMaster2AccessProtection_read_write
#define  _Cpu_FMCMaster2AccessProtection_STR "read_write"
#define  _Cpu_FMCMaster3Prefetch_disabled
#define  _Cpu_FMCMaster3Prefetch_STR "disabled"
#define  _Cpu_FMCMaster3AccessProtection_no_access
#define  _Cpu_FMCMaster3AccessProtection_STR "no_access"
#define  _Cpu_FMCMaster4Prefetch_disabled
#define  _Cpu_FMCMaster4Prefetch_STR "disabled"
#define  _Cpu_FMCMaster4AccessProtection_read_write
#define  _Cpu_FMCMaster4AccessProtection_STR "read_write"
#define  _Cpu_FMCMaster5Prefetch_disabled
#define  _Cpu_FMCMaster5Prefetch_STR "disabled"
#define  _Cpu_FMCMaster5AccessProtection_no_access
#define  _Cpu_FMCMaster5AccessProtection_STR "no_access"
#define  _Cpu_FMCBank0ReplacementCtrl_0
#define  _Cpu_FMCBank0ReplacementCtrl_STR "0"
#define  _Cpu_FMCBank0DCE_enabled
#define  _Cpu_FMCBank0DCE_STR "enabled"
#define  _Cpu_FMCBank0ICE_enabled
#define  _Cpu_FMCBank0ICE_STR "enabled"
#define  _Cpu_FMCBank0DPE_enabled
#define  _Cpu_FMCBank0DPE_STR "enabled"
#define  _Cpu_FMCBank0IPE_enabled
#define  _Cpu_FMCBank0IPE_STR "enabled"
#define  _Cpu_FMCBank0PBE_enabled
#define  _Cpu_FMCBank0PBE_STR "enabled"
#define  _Cpu_FMCBank1DCE_enabled
#define  _Cpu_FMCBank1DCE_STR "enabled"
#define  _Cpu_FMCBank1ICE_enabled
#define  _Cpu_FMCBank1ICE_STR "enabled"
#define  _Cpu_FMCBank1DPE_enabled
#define  _Cpu_FMCBank1DPE_STR "enabled"
#define  _Cpu_FMCBank1IPE_enabled
#define  _Cpu_FMCBank1IPE_STR "enabled"
#define  _Cpu_FMCBank1PBE_enabled
#define  _Cpu_FMCBank1PBE_STR "enabled"
#define  _Cpu_FMCIsInitialized TRUE
#define  _Cpu_FMCIsInitialized_yes
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
#define  _Cpu_AXBSGrp TRUE
#define  _Cpu_AXBSGrp_Enabled
#define  _Cpu_PeriphDeviceAXBS_AXBS
#define  _Cpu_PeriphDeviceAXBS_STR "AXBS"
#define  _Cpu_AXBSBusSlave0_Flash_Master0_CORE_CODE_P1
#define  _Cpu_AXBSBusSlave0_Flash_Master0_CORE_CODE_STR "P1"
#define  _Cpu_AXBSBusSlave0_Flash_Master1_CORE_SYSTEM_P2
#define  _Cpu_AXBSBusSlave0_Flash_Master1_CORE_SYSTEM_STR "P2"
#define  _Cpu_AXBSBusSlave0_Flash_Master2_DMA_EzPort_P3
#define  _Cpu_AXBSBusSlave0_Flash_Master2_DMA_EzPort_STR "P3"
#define  _Cpu_AXBSBusSlave0_Flash_Master3_ENET_P4
#define  _Cpu_AXBSBusSlave0_Flash_Master3_ENET_STR "P4"
#define  _Cpu_AXBSBusSlave0_Flash_Master4_USB_P5
#define  _Cpu_AXBSBusSlave0_Flash_Master4_USB_STR "P5"
#define  _Cpu_AXBSBusSlave0_Flash_Master5_SDHC_P6
#define  _Cpu_AXBSBusSlave0_Flash_Master5_SDHC_STR "P6"
#define  _Cpu_AXBSBusSlave0_Flash_ArbMode_Fixed_priority
#define  _Cpu_AXBSBusSlave0_Flash_ArbMode_STR "Fixed_priority"
#define  _Cpu_AXBSBusSlave0_Flash_Parking_Master0
#define  _Cpu_AXBSBusSlave0_Flash_Parking_STR "Master0"
#define  _Cpu_AXBSBusSlave0_Flash_ReadOnly_No
#define  _Cpu_AXBSBusSlave0_Flash_ReadOnly_STR "No"
#define  _Cpu_AXBSBusSlave0_Flash_HLP_high
#define  _Cpu_AXBSBusSlave0_Flash_HLP_STR "high"
#define  _Cpu_AXBSBusSlave1_SRAM_Master0_CORE_CODE_P1
#define  _Cpu_AXBSBusSlave1_SRAM_Master0_CORE_CODE_STR "P1"
#define  _Cpu_AXBSBusSlave1_SRAM_Master1_CORE_SYSTEM_P2
#define  _Cpu_AXBSBusSlave1_SRAM_Master1_CORE_SYSTEM_STR "P2"
#define  _Cpu_AXBSBusSlave1_SRAM_Master2_DMA_EzPort_P3
#define  _Cpu_AXBSBusSlave1_SRAM_Master2_DMA_EzPort_STR "P3"
#define  _Cpu_AXBSBusSlave1_SRAM_Master3_ENET_P4
#define  _Cpu_AXBSBusSlave1_SRAM_Master3_ENET_STR "P4"
#define  _Cpu_AXBSBusSlave1_SRAM_Master4_USB_P5
#define  _Cpu_AXBSBusSlave1_SRAM_Master4_USB_STR "P5"
#define  _Cpu_AXBSBusSlave1_SRAM_Master5_SDHC_P6
#define  _Cpu_AXBSBusSlave1_SRAM_Master5_SDHC_STR "P6"
#define  _Cpu_AXBSBusSlave1_SRAM_ArbMode_Fixed_priority
#define  _Cpu_AXBSBusSlave1_SRAM_ArbMode_STR "Fixed_priority"
#define  _Cpu_AXBSBusSlave1_SRAM_Parking_Master0
#define  _Cpu_AXBSBusSlave1_SRAM_Parking_STR "Master0"
#define  _Cpu_AXBSBusSlave1_SRAM_ReadOnly_No
#define  _Cpu_AXBSBusSlave1_SRAM_ReadOnly_STR "No"
#define  _Cpu_AXBSBusSlave1_SRAM_HLP_high
#define  _Cpu_AXBSBusSlave1_SRAM_HLP_STR "high"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master0_CORE_CODE_P1
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master0_CORE_CODE_STR "P1"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master1_CORE_SYSTEM_P2
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master1_CORE_SYSTEM_STR "P2"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master2_DMA_EzPort_P3
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master2_DMA_EzPort_STR "P3"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master3_ENET_P4
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master3_ENET_STR "P4"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master4_USB_P5
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master4_USB_STR "P5"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master5_SDHC_P6
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Master5_SDHC_STR "P6"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_ArbMode_Fixed_priority
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_ArbMode_STR "Fixed_priority"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Parking_Master0
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_Parking_STR "Master0"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_ReadOnly_No
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_ReadOnly_STR "No"
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_HLP_high
#define  _Cpu_AXBSBusSlave2_PBRIDGE0_HLP_STR "high"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master0_CORE_CODE_P1
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master0_CORE_CODE_STR "P1"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master1_CORE_SYSTEM_P2
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master1_CORE_SYSTEM_STR "P2"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master2_DMA_EzPort_P3
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master2_DMA_EzPort_STR "P3"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master3_ENET_P4
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master3_ENET_STR "P4"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master4_USB_P5
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master4_USB_STR "P5"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master5_SDHC_P6
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Master5_SDHC_STR "P6"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_ArbMode_Fixed_priority
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_ArbMode_STR "Fixed_priority"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Parking_Master0
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_Parking_STR "Master0"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_ReadOnly_No
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_ReadOnly_STR "No"
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_HLP_high
#define  _Cpu_AXBSBusSlave3_PBRIDGE1_HLP_STR "high"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master0_CORE_CODE_P1
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master0_CORE_CODE_STR "P1"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master1_CORE_SYSTEM_P2
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master1_CORE_SYSTEM_STR "P2"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master2_DMA_EzPort_P3
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master2_DMA_EzPort_STR "P3"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master3_ENET_P4
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master3_ENET_STR "P4"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master4_USB_P5
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master4_USB_STR "P5"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master5_SDHC_P6
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Master5_SDHC_STR "P6"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_ArbMode_Fixed_priority
#define  _Cpu_AXBSBusSlave4_FLEXBUS_ArbMode_STR "Fixed_priority"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Parking_Master0
#define  _Cpu_AXBSBusSlave4_FLEXBUS_Parking_STR "Master0"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_ReadOnly_No
#define  _Cpu_AXBSBusSlave4_FLEXBUS_ReadOnly_STR "No"
#define  _Cpu_AXBSBusSlave4_FLEXBUS_HLP_high
#define  _Cpu_AXBSBusSlave4_FLEXBUS_HLP_STR "high"
#define  _Cpu_AXBSBusMasterAULB0_notAllowed
#define  _Cpu_AXBSBusMasterAULB0_STR "notAllowed"
#define  _Cpu_AXBSBusMasterAULB1_notAllowed
#define  _Cpu_AXBSBusMasterAULB1_STR "notAllowed"
#define  _Cpu_AXBSBusMasterAULB2_notAllowed
#define  _Cpu_AXBSBusMasterAULB2_STR "notAllowed"
#define  _Cpu_AXBSBusMasterAULB3_notAllowed
#define  _Cpu_AXBSBusMasterAULB3_STR "notAllowed"
#define  _Cpu_AXBSBusMasterAULB4_notAllowed
#define  _Cpu_AXBSBusMasterAULB4_STR "notAllowed"
#define  _Cpu_AXBSBusMasterAULB5_notAllowed
#define  _Cpu_AXBSBusMasterAULB5_STR "notAllowed"
#define  _Cpu_AXBSIsInitialized TRUE
#define  _Cpu_AXBSIsInitialized_yes
#define  _Cpu_ShrdAIPS0Grp_1
#define  _Cpu_ShrdAIPS0Grp_STR "1"
#define  _Cpu_AIPS0Grp TRUE
#define  _Cpu_AIPS0Grp_Enabled
#define  _Cpu_PeriphDeviceAIPS0_AIPS0
#define  _Cpu_PeriphDeviceAIPS0_STR "AIPS0"
#define  _Cpu_AIPS0BusMaster_CORE_CODE_TrustedRead_yes
#define  _Cpu_AIPS0BusMaster_CORE_CODE_TrustedRead_STR "yes"
#define  _Cpu_AIPS0BusMaster_CORE_CODE_TrustedWrite_yes
#define  _Cpu_AIPS0BusMaster_CORE_CODE_TrustedWrite_STR "yes"
#define  _Cpu_AIPS0BusMaster_CORE_CODE_PrivilegeLevel_yes
#define  _Cpu_AIPS0BusMaster_CORE_CODE_PrivilegeLevel_STR "yes"
#define  _Cpu_AIPS0BusMaster_CORE_SYSTEM_TrustedRead_yes
#define  _Cpu_AIPS0BusMaster_CORE_SYSTEM_TrustedRead_STR "yes"
#define  _Cpu_AIPS0BusMaster_CORE_SYSTEM_TrustedWrite_yes
#define  _Cpu_AIPS0BusMaster_CORE_SYSTEM_TrustedWrite_STR "yes"
#define  _Cpu_AIPS0BusMaster_CORE_SYSTEM_PrivilegeLevel_yes
#define  _Cpu_AIPS0BusMaster_CORE_SYSTEM_PrivilegeLevel_STR "yes"
#define  _Cpu_AIPS0BusMaster_DMA_EzPort_TrustedRead_yes
#define  _Cpu_AIPS0BusMaster_DMA_EzPort_TrustedRead_STR "yes"
#define  _Cpu_AIPS0BusMaster_DMA_EzPort_TrustedWrite_yes
#define  _Cpu_AIPS0BusMaster_DMA_EzPort_TrustedWrite_STR "yes"
#define  _Cpu_AIPS0BusMaster_DMA_EzPort_PrivilegeLevel_yes
#define  _Cpu_AIPS0BusMaster_DMA_EzPort_PrivilegeLevel_STR "yes"
#define  _Cpu_AIPS0BusMaster_ENET_TrustedRead_no
#define  _Cpu_AIPS0BusMaster_ENET_TrustedRead_STR "no"
#define  _Cpu_AIPS0BusMaster_ENET_TrustedWrite_no
#define  _Cpu_AIPS0BusMaster_ENET_TrustedWrite_STR "no"
#define  _Cpu_AIPS0BusMaster_ENET_PrivilegeLevel_no
#define  _Cpu_AIPS0BusMaster_ENET_PrivilegeLevel_STR "no"
#define  _Cpu_AIPS0BusMaster_USB_TrustedRead_yes
#define  _Cpu_AIPS0BusMaster_USB_TrustedRead_STR "yes"
#define  _Cpu_AIPS0BusMaster_USB_TrustedWrite_yes
#define  _Cpu_AIPS0BusMaster_USB_TrustedWrite_STR "yes"
#define  _Cpu_AIPS0BusMaster_USB_PrivilegeLevel_no
#define  _Cpu_AIPS0BusMaster_USB_PrivilegeLevel_STR "no"
#define  _Cpu_AIPS0BusMaster_SDHC_TrustedRead_no
#define  _Cpu_AIPS0BusMaster_SDHC_TrustedRead_STR "no"
#define  _Cpu_AIPS0BusMaster_SDHC_TrustedWrite_no
#define  _Cpu_AIPS0BusMaster_SDHC_TrustedWrite_STR "no"
#define  _Cpu_AIPS0BusMaster_SDHC_PrivilegeLevel_no
#define  _Cpu_AIPS0BusMaster_SDHC_PrivilegeLevel_STR "no"
#define  _Cpu_AIPS0PrphAccess_AIPS0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_AIPS0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_AIPS0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_AIPS0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_AIPS0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_AIPS0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_AXBS_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_AXBS_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_AXBS_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_AXBS_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_AXBS_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_AXBS_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_DESCRIPTORS_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_DESCRIPTORS_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_DESCRIPTORS_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_DESCRIPTORS_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_DESCRIPTORS_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_DESCRIPTORS_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FB_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FB_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FB_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FB_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FB_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FB_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MPU_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MPU_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MPU_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MPU_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MPU_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MPU_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTFL_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTFL_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTFL_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTFL_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTFL_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTFL_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_MULTIPLEXOR_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_MULTIPLEXOR_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_MULTIPLEXOR_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_MULTIPLEXOR_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_DMA_MULTIPLEXOR_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_DMA_MULTIPLEXOR_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SPI0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SPI0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SPI0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SPI0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SPI0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SPI0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SPI1_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SPI1_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SPI1_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SPI1_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SPI1_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SPI1_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2S0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2S0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2S0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2S0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2S0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2S0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CRC_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CRC_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CRC_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CRC_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CRC_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CRC_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_USBDCD_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_USBDCD_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_USBDCD_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_USBDCD_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_USBDCD_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_USBDCD_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PDB0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PDB0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PDB0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PDB0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PDB0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PDB0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PIT_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PIT_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PIT_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PIT_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PIT_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PIT_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTM0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTM0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTM0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTM0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTM0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTM0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTM1_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTM1_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTM1_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTM1_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_FTM1_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_FTM1_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_ADC0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_ADC0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_ADC0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_ADC0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_ADC0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_ADC0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_RTC_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_RTC_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_RTC_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_RTC_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_RTC_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_RTC_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_VBAT_REGS_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_VBAT_REGS_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_VBAT_REGS_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_VBAT_REGS_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_VBAT_REGS_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_VBAT_REGS_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_LPTMR0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_LPTMR0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_LPTMR0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_LPTMR0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_LPTMR0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_LPTMR0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SYSTEM_REGS_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SYSTEM_REGS_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SYSTEM_REGS_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SYSTEM_REGS_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SYSTEM_REGS_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SYSTEM_REGS_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_TSI0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_TSI0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_TSI0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_TSI0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_TSI0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_TSI0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SIM_LP_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SIM_LP_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SIM_LP_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SIM_LP_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SIM_LP_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SIM_LP_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SIM_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SIM_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SIM_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SIM_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_SIM_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_SIM_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTA_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTA_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTA_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTA_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTA_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTA_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTB_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTB_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTB_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTB_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTB_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTB_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTC_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTC_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTC_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTC_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTC_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTC_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTD_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTD_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTD_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTD_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTD_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTD_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTE_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTE_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTE_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTE_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PORTE_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PORTE_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_WDOG_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_WDOG_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_WDOG_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_WDOG_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_WDOG_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_WDOG_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_EWM_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_EWM_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_EWM_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_EWM_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_EWM_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_EWM_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CMT_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CMT_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CMT_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CMT_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CMT_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CMT_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MCG_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MCG_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MCG_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MCG_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MCG_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MCG_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_XOSC_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_XOSC_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_XOSC_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_XOSC_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_XOSC_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_XOSC_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2C0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2C0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2C0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2C0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2C0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2C0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2C1_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2C1_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2C1_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2C1_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_I2C1_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_I2C1_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART1_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART1_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART1_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART1_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART1_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART1_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART2_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART2_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART2_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART2_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART2_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART2_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART3_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART3_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART3_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART3_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_UART3_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_UART3_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_USB0_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_USB0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_USB0_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_USB0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_USB0_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_USB0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CMP_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CMP_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CMP_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CMP_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_CMP_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_CMP_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_VREF_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_VREF_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_VREF_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_VREF_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_VREF_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_VREF_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_LLWU_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_LLWU_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_LLWU_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_LLWU_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_LLWU_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_LLWU_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PMC_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PMC_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PMC_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PMC_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_PMC_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_PMC_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MC_SupervisorProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MC_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MC_WriteProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MC_WriteProtect_STR "disabled"
#define  _Cpu_AIPS0PrphAccess_MC_TrustedProtect_disabled
#define  _Cpu_AIPS0PrphAccess_MC_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS0IsInitialized TRUE
#define  _Cpu_AIPS0IsInitialized_yes
#define  _Cpu_ShrdAIPS1Grp_1
#define  _Cpu_ShrdAIPS1Grp_STR "1"
#define  _Cpu_AIPS1Grp TRUE
#define  _Cpu_AIPS1Grp_Enabled
#define  _Cpu_PeriphDeviceAIPS1_AIPS1
#define  _Cpu_PeriphDeviceAIPS1_STR "AIPS1"
#define  _Cpu_AIPS1BusMaster_CORE_CODE_TrustedRead_yes
#define  _Cpu_AIPS1BusMaster_CORE_CODE_TrustedRead_STR "yes"
#define  _Cpu_AIPS1BusMaster_CORE_CODE_TrustedWrite_yes
#define  _Cpu_AIPS1BusMaster_CORE_CODE_TrustedWrite_STR "yes"
#define  _Cpu_AIPS1BusMaster_CORE_CODE_PrivilegeLevel_yes
#define  _Cpu_AIPS1BusMaster_CORE_CODE_PrivilegeLevel_STR "yes"
#define  _Cpu_AIPS1BusMaster_CORE_SYSTEM_TrustedRead_yes
#define  _Cpu_AIPS1BusMaster_CORE_SYSTEM_TrustedRead_STR "yes"
#define  _Cpu_AIPS1BusMaster_CORE_SYSTEM_TrustedWrite_yes
#define  _Cpu_AIPS1BusMaster_CORE_SYSTEM_TrustedWrite_STR "yes"
#define  _Cpu_AIPS1BusMaster_CORE_SYSTEM_PrivilegeLevel_yes
#define  _Cpu_AIPS1BusMaster_CORE_SYSTEM_PrivilegeLevel_STR "yes"
#define  _Cpu_AIPS1BusMaster_DMA_EzPort_TrustedRead_yes
#define  _Cpu_AIPS1BusMaster_DMA_EzPort_TrustedRead_STR "yes"
#define  _Cpu_AIPS1BusMaster_DMA_EzPort_TrustedWrite_yes
#define  _Cpu_AIPS1BusMaster_DMA_EzPort_TrustedWrite_STR "yes"
#define  _Cpu_AIPS1BusMaster_DMA_EzPort_PrivilegeLevel_yes
#define  _Cpu_AIPS1BusMaster_DMA_EzPort_PrivilegeLevel_STR "yes"
#define  _Cpu_AIPS1BusMaster_ENET_TrustedRead_no
#define  _Cpu_AIPS1BusMaster_ENET_TrustedRead_STR "no"
#define  _Cpu_AIPS1BusMaster_ENET_TrustedWrite_no
#define  _Cpu_AIPS1BusMaster_ENET_TrustedWrite_STR "no"
#define  _Cpu_AIPS1BusMaster_ENET_PrivilegeLevel_no
#define  _Cpu_AIPS1BusMaster_ENET_PrivilegeLevel_STR "no"
#define  _Cpu_AIPS1BusMaster_USB_TrustedRead_yes
#define  _Cpu_AIPS1BusMaster_USB_TrustedRead_STR "yes"
#define  _Cpu_AIPS1BusMaster_USB_TrustedWrite_yes
#define  _Cpu_AIPS1BusMaster_USB_TrustedWrite_STR "yes"
#define  _Cpu_AIPS1BusMaster_USB_PrivilegeLevel_no
#define  _Cpu_AIPS1BusMaster_USB_PrivilegeLevel_STR "no"
#define  _Cpu_AIPS1BusMaster_SDHC_TrustedRead_no
#define  _Cpu_AIPS1BusMaster_SDHC_TrustedRead_STR "no"
#define  _Cpu_AIPS1BusMaster_SDHC_TrustedWrite_no
#define  _Cpu_AIPS1BusMaster_SDHC_TrustedWrite_STR "no"
#define  _Cpu_AIPS1BusMaster_SDHC_PrivilegeLevel_no
#define  _Cpu_AIPS1BusMaster_SDHC_PrivilegeLevel_STR "no"
#define  _Cpu_AIPS1PrphAccess_RNGB_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_RNGB_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_RNGB_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_RNGB_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_RNGB_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_RNGB_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_SPI2_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_SPI2_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_SPI2_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_SPI2_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_SPI2_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_SPI2_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_SDHC_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_SDHC_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_SDHC_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_SDHC_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_SDHC_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_SDHC_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_FTM2_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_FTM2_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_FTM2_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_FTM2_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_FTM2_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_FTM2_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_ADC1_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_ADC1_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_ADC1_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_ADC1_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_ADC1_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_ADC1_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_LCD_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_LCD_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_LCD_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_LCD_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_LCD_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_LCD_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_ENET_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_ENET_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_ENET_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_ENET_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_ENET_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_ENET_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_DAC0_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_DAC0_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_DAC0_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_DAC0_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_DAC0_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_DAC0_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_DAC1_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_DAC1_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_DAC1_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_DAC1_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_DAC1_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_DAC1_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_UART4_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_UART4_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_UART4_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_UART4_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_UART4_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_UART4_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_UART5_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_UART5_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_UART5_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_UART5_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_UART5_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_UART5_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_OPAMP_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_OPAMP_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_OPAMP_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_OPAMP_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_OPAMP_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_OPAMP_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_TRIAMP_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_TRIAMP_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_TRIAMP_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_TRIAMP_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_TRIAMP_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_TRIAMP_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_AIPS1_SupervisorProtect_disabled
#define  _Cpu_AIPS1PrphAccess_AIPS1_SupervisorProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_AIPS1_WriteProtect_disabled
#define  _Cpu_AIPS1PrphAccess_AIPS1_WriteProtect_STR "disabled"
#define  _Cpu_AIPS1PrphAccess_AIPS1_TrustedProtect_disabled
#define  _Cpu_AIPS1PrphAccess_AIPS1_TrustedProtect_STR "disabled"
#define  _Cpu_AIPS1IsInitialized TRUE
#define  _Cpu_AIPS1IsInitialized_yes
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
#define  _Cpu_PMCTraditionalRAM_notPowered
#define  _Cpu_PMCTraditionalRAM_STR "notPowered"
#define  _Cpu_PMCBangapBuffer_disabled
#define  _Cpu_PMCBangapBuffer_STR "disabled"
#define  _Cpu_PMCLVDIntName_INT_LVD_LVW
#define  _Cpu_PMCLVDIntName_STR "INT_LVD_LVW"
#define  _Cpu_PMCLVDIntNameRequestFeatureGroup_Only_if_property_present
#define  _Cpu_PMCLVDIntNameRequestFeatureGroup_STR "Only_if_property_present"
#define  _Cpu_PMCLVDIntNameRequest_enabled
#define  _Cpu_PMCLVDIntNameRequest_STR "enabled"
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
#define  _Cpu_SYSTEM_OSCSpeedMode0 50.0F
#define  _Cpu_SYSTEM_OSCSpeedMode0_STR "50.0"
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
#define  _Cpu_MCG_FRDIVSpeedMode0_1024
#define  _Cpu_MCG_FRDIVSpeedMode0_STR "1024"
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_640
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_STR "640"
#define  _Cpu_MCG_PRDIVSpeedMode0_25
#define  _Cpu_MCG_PRDIVSpeedMode0_STR "25"
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
#define  _Cpu_ERCLKClkSpeedMode0_50
#define  _Cpu_ERCLKClkSpeedMode0_STR "50"
#define  _Cpu_ERCLK32KClkSpeedMode0_0
#define  _Cpu_ERCLK32KClkSpeedMode0_STR "0"
#define  _Cpu_FLLFixedClkSpeedMode0_24_4140625
#define  _Cpu_FLLFixedClkSpeedMode0_STR "24_4140625"
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
