#ifndef __PE_ProjectInfo_H
#define __PE_ProjectInfo_H

/*lint -save -e621 */

/* Selected target CPU */
#define PE_CPUtype "MCF51JF128_64"
#define PE_CPUtype_MCF51JF128_64
#define PE_CPUfamily "ColdFirePlus"
#define PE_CPUfamily_ColdFirePlus
#define PE_CPUsubFamily "MCF51JF"
#define PE_CPUsubFamily_MCF51JF

/* Active PE configuration */
#define PEcfg_Configuration "51JF128VLH_INTERNAL_FLASH"
#ifndef PEcfg_51JF128VLH_INTERNAL_FLASH
#define PEcfg_51JF128VLH_INTERNAL_FLASH 1U
#endif

/* BEAN METHODS IN PROJECT */
#define  _usb_hid_USB_Class_HID_Init
#define  _usb_hid_USB_Class_HID_DeInit
#define  _usb_hid_USB_Class_HID_Send_Data
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

/* BEAN usb_hid PROPERTIES CONFIGURATION */
#define  _usb_hid_BeanTypeName_USB_HID_CLASS
#define  _usb_hid_BeanTypeName_STR "USB_HID_CLASS"
#define  _usb_hid_DeviceName_usb_hid
#define  _usb_hid_DeviceName_STR "usb_hid"
#define  _usb_hid_HID_Mode_DEVICE
#define  _usb_hid_HID_Mode_STR "DEVICE"
#define  _usb_hid_Usb_device_component_Usb_Device
#define  _usb_hid_Usb_device_component_STR "Usb_Device"
#define  _usb_hid_Protocol_2
#define  _usb_hid_Protocol_STR "2"
#define  _usb_hid_Subclass_1
#define  _usb_hid_Subclass_STR "1"
#define  _usb_hid_Interface_number 0
#define  _usb_hid_Ep0_max_packet_size_16
#define  _usb_hid_Ep0_max_packet_size_STR "16"
#define  _usb_hid_Speed_FULL_SPEED
#define  _usb_hid_Speed_STR "FULL_SPEED"
#define  _usb_hid_Interrupt_in_number_1
#define  _usb_hid_Interrupt_in_number_STR "1"
#define  _usb_hid_EP_IN_max_packet_size 8
#define  _usb_hid_Report_descriptor_item_list_27
#define  _usb_hid_Report_descriptor_item_list_STR "27"
#define  _usb_hid_Report_descriptor_item_list_NUMITEMS 27
#define  _usb_hid_Item_name0_0x05
#define  _usb_hid_Item_name0_STR "0x05"
#define  _usb_hid_Item_value0 1
#define  _usb_hid_Item_name1_0x09
#define  _usb_hid_Item_name1_STR "0x09"
#define  _usb_hid_Item_value1 2
#define  _usb_hid_Item_name2_0xA1
#define  _usb_hid_Item_name2_STR "0xA1"
#define  _usb_hid_Item_value2 1
#define  _usb_hid_Item_name3_0x09
#define  _usb_hid_Item_name3_STR "0x09"
#define  _usb_hid_Item_value3 1
#define  _usb_hid_Item_name4_0xA1
#define  _usb_hid_Item_name4_STR "0xA1"
#define  _usb_hid_Item_value4 0
#define  _usb_hid_Item_name5_0x05
#define  _usb_hid_Item_name5_STR "0x05"
#define  _usb_hid_Item_value5 9
#define  _usb_hid_Item_name6_0x19
#define  _usb_hid_Item_name6_STR "0x19"
#define  _usb_hid_Item_value6 1
#define  _usb_hid_Item_name7_0x29
#define  _usb_hid_Item_name7_STR "0x29"
#define  _usb_hid_Item_value7 3
#define  _usb_hid_Item_name8_0x15
#define  _usb_hid_Item_name8_STR "0x15"
#define  _usb_hid_Item_value8 0
#define  _usb_hid_Item_name9_0x25
#define  _usb_hid_Item_name9_STR "0x25"
#define  _usb_hid_Item_value9 1
#define  _usb_hid_Item_name10_0x95
#define  _usb_hid_Item_name10_STR "0x95"
#define  _usb_hid_Item_value10 3
#define  _usb_hid_Item_name11_0x75
#define  _usb_hid_Item_name11_STR "0x75"
#define  _usb_hid_Item_value11 1
#define  _usb_hid_Item_name12_0x81
#define  _usb_hid_Item_name12_STR "0x81"
#define  _usb_hid_Item_value12 2
#define  _usb_hid_Item_name13_0x95
#define  _usb_hid_Item_name13_STR "0x95"
#define  _usb_hid_Item_value13 1
#define  _usb_hid_Item_name14_0x75
#define  _usb_hid_Item_name14_STR "0x75"
#define  _usb_hid_Item_value14 5
#define  _usb_hid_Item_name15_0x81
#define  _usb_hid_Item_name15_STR "0x81"
#define  _usb_hid_Item_value15 1
#define  _usb_hid_Item_name16_0x05
#define  _usb_hid_Item_name16_STR "0x05"
#define  _usb_hid_Item_value16 1
#define  _usb_hid_Item_name17_0x09
#define  _usb_hid_Item_name17_STR "0x09"
#define  _usb_hid_Item_value17 48
#define  _usb_hid_Item_name18_0x09
#define  _usb_hid_Item_name18_STR "0x09"
#define  _usb_hid_Item_value18 49
#define  _usb_hid_Item_name19_0x09
#define  _usb_hid_Item_name19_STR "0x09"
#define  _usb_hid_Item_value19 56
#define  _usb_hid_Item_name20_0x15
#define  _usb_hid_Item_name20_STR "0x15"
#define  _usb_hid_Item_value20 129
#define  _usb_hid_Item_name21_0x25
#define  _usb_hid_Item_name21_STR "0x25"
#define  _usb_hid_Item_value21 127
#define  _usb_hid_Item_name22_0x75
#define  _usb_hid_Item_name22_STR "0x75"
#define  _usb_hid_Item_value22 8
#define  _usb_hid_Item_name23_0x95
#define  _usb_hid_Item_name23_STR "0x95"
#define  _usb_hid_Item_value23 3
#define  _usb_hid_Item_name24_0x81
#define  _usb_hid_Item_name24_STR "0x81"
#define  _usb_hid_Item_value24 6
#define  _usb_hid_Item_name25_0xC0
#define  _usb_hid_Item_name25_STR "0xC0"
#define  _usb_hid_Item_value25 0
#define  _usb_hid_Item_name26_0xC0
#define  _usb_hid_Item_name26_STR "0xC0"
#define  _usb_hid_Item_value26 0
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
#define  _usb_device_ProductID 256
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
#define  _usb_device_NumEndpoints0 1
#define  _usb_device_InterfaceClass0 3
#define  _usb_device_InterfaceSubClass0 1
#define  _usb_device_InterfaceProtocol0 2
#define  _usb_device_Interface_des_index0 0
#define  _usb_device_Endpoints_List0_1
#define  _usb_device_Endpoints_List0_STR "1"
#define  _usb_device_Endpoints_List0_NUMITEMS 1
#define  _usb_device_EndpointNumber0_0 1
#define  _usb_device_EndpointDirection0_0 FALSE
#define  _usb_device_EndpointDirection0_0_IN
#define  _usb_device_Transfer_Type0_0_INTERRUPT
#define  _usb_device_Transfer_Type0_0_STR "INTERRUPT"
#define  _usb_device_Synchronisation_Type0_0_No_Synchonisation
#define  _usb_device_Synchronisation_Type0_0_STR "No_Synchonisation"
#define  _usb_device_Usage_Type0_0_Data_Endpoint
#define  _usb_device_Usage_Type0_0_STR "Data_Endpoint"
#define  _usb_device_EndpointMaxPacketSize0_0_32
#define  _usb_device_EndpointMaxPacketSize0_0_STR "32"
#define  _usb_device_EndpointMaxPacketSize_int_iso0_0 8
#define  _usb_device_Interval0_0 0
#define  _usb_device_LANGID 2308
#define  _usb_device_String_desc_list_2
#define  _usb_device_String_desc_list_STR "2"
#define  _usb_device_String_desc_list_NUMITEMS 2
#define  _usb_device_String0_FREESCALE_SEMICONDUCTOR_INC_
#define  _usb_device_String0_STR "FREESCALE_SEMICONDUCTOR_INC_"
#define  _usb_device_String1_USB_HID_MOUSE_DEVICE_PEx_DEMO
#define  _usb_device_String1_STR "USB_HID_MOUSE_DEVICE_PEx_DEMO"
#define  _usb_device_Gen_desc_en FALSE
#define  _usb_device_Gen_desc_en_no
#define  _usb_device_OTG_en FALSE
#define  _usb_device_OTG_en_no
/* BEAN Cpu PROPERTIES CONFIGURATION */
#define  _Cpu_BeanTypeName_MCF51JF128_64
#define  _Cpu_BeanTypeName_STR "MCF51JF128_64"
#define  _Cpu_DeviceName_Cpu
#define  _Cpu_DeviceName_STR "Cpu"
#define  _Cpu_CPU_MCF51JF128VLH
#define  _Cpu_CPU_STR "MCF51JF128VLH"
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
#define  _Cpu_InitializeSlowTRIM TRUE
#define  _Cpu_InitializeSlowTRIM_yes
#define  _Cpu_SlowTRIMvalueAddress 1023
#define  _Cpu_SlowFTRIMvalueAddress 1022
#define  _Cpu_IntOscFast 4.0F
#define  _Cpu_IntOscFast_STR "4.0"
#define  _Cpu_InitializeFastTRIM FALSE
#define  _Cpu_InitializeFastTRIM_no
#define  _Cpu_OSC1Grp FALSE
#define  _Cpu_OSC1Grp_Disabled
#define  _Cpu_OSC2Grp FALSE
#define  _Cpu_OSC2Grp_Disabled
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
#define  _Cpu_ERCLKEN2CLKMode0 TRUE
#define  _Cpu_ERCLKEN2CLKMode0_Enabled
#define  _Cpu_EREFSTEN2CLKMode0 FALSE
#define  _Cpu_EREFSTEN2CLKMode0_Disabled
#define  _Cpu_ERCLK2ClkCLKMode0 0.0F
#define  _Cpu_ERCLK2ClkCLKMode0_STR "0.0"
#define  _Cpu_ERCLK2LowClkCLKMode0 0.0F
#define  _Cpu_ERCLK2LowClkCLKMode0_STR "0.0"
#define  _Cpu_ERCLKEN1CLKMode0 TRUE
#define  _Cpu_ERCLKEN1CLKMode0_Enabled
#define  _Cpu_EREFSTEN1CLKMode0 FALSE
#define  _Cpu_EREFSTEN1CLKMode0_Disabled
#define  _Cpu_ERCLK1ClkCLKMode0 0.0F
#define  _Cpu_ERCLK1ClkCLKMode0_STR "0.0"
#define  _Cpu_ERCLK1LowClkCLKMode0 0.0F
#define  _Cpu_ERCLK1LowClkCLKMode0_STR "0.0"
#define  _Cpu_MCGModeSelCLKMode0_0
#define  _Cpu_MCGModeSelCLKMode0_STR "0"
#define  _Cpu_MCGOUTSelectCLKMode0_FLLOUT
#define  _Cpu_MCGOUTSelectCLKMode0_STR "FLLOUT"
#define  _Cpu_MCGModeCLKMode0_
#define  _Cpu_MCGOutputCLKMode0 47.972352F
#define  _Cpu_MCGOutputCLKMode0_STR "47.972352"
#define  _Cpu_MCG_ERCLKClkCLKMode0 0.0F
#define  _Cpu_MCG_ERCLKClkCLKMode0_STR "0.0"
#define  _Cpu_MCGCMECLKMode0 FALSE
#define  _Cpu_MCGCMECLKMode0_Disabled
#define  _Cpu_FLLEnblCLKMode0 TRUE
#define  _Cpu_FLLEnblCLKMode0_Enabled
#define  _Cpu_FLLOutputCLKMode0 47.972352F
#define  _Cpu_FLLOutputCLKMode0_STR "47.972352"
#define  _Cpu_FLLFixedClkCLKMode0 16.384F
#define  _Cpu_FLLFixedClkCLKMode0_STR "16.384"
#define  _Cpu_FLL_RefClkSrcCLKMode0_1
#define  _Cpu_FLL_RefClkSrcCLKMode0_STR "1"
#define  _Cpu_FLLRefClkCLKMode0 32.768F
#define  _Cpu_FLLRefClkCLKMode0_STR "32.768"
#define  _Cpu_MCG_FLL_MFactor_CLKMode0_Auto_select
#define  _Cpu_MCG_FLL_MFactor_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLEnblCLKMode0 FALSE
#define  _Cpu_PLLEnblCLKMode0_Disabled
#define  _Cpu_PLLSTENCLKMode0 FALSE
#define  _Cpu_PLLSTENCLKMode0_Disabled
#define  _Cpu_PLLOutputCLKMode0 0.0F
#define  _Cpu_PLLOutputCLKMode0_STR "0.0"
#define  _Cpu_MCG_PRDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_PRDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLLRefClkCLKMode0 1.0F
#define  _Cpu_PLLRefClkCLKMode0_STR "1.0"
#define  _Cpu_MCG_VDIV_CLKMode0_Auto_select
#define  _Cpu_MCG_VDIV_CLKMode0_STR "Auto_select"
#define  _Cpu_PLL_LOLIECLKMode0 FALSE
#define  _Cpu_PLL_LOLIECLKMode0_Disabled
#define  _Cpu_InitPriority_0
#define  _Cpu_InitPriority_STR "0"
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
#define  _Cpu_SharedNMI0_1
#define  _Cpu_SharedNMI0_STR "1"
#define  _Cpu_RCMGrp TRUE
#define  _Cpu_RCMGrp_Enabled
#define  _Cpu_PeriphDeviceRCM_RCM
#define  _Cpu_PeriphDeviceRCM_STR "RCM"
#define  _Cpu_RCMResetPin_RESET_b_PTC1
#define  _Cpu_RCMResetPin_STR "RESET_b_PTC1"
#define  _Cpu_RCMResetPin_BITNUM 1
#define  _Cpu_RCMResetPinSignal_
#define  _Cpu_RCMFilterInStop_disabled
#define  _Cpu_RCMFilterInStop_STR "disabled"
#define  _Cpu_RCMFilterInRunWait_disabled
#define  _Cpu_RCMFilterInRunWait_STR "disabled"
#define  _Cpu_RCMFilterWidth 1
#define  _Cpu_RCMIsInitialized TRUE
#define  _Cpu_RCMIsInitialized_yes
#define  _Cpu_SharedNMI1_1
#define  _Cpu_SharedNMI1_STR "1"
#define  _Cpu_BDMPinEnable TRUE
#define  _Cpu_BDMPinEnable_Enabled
#define  _Cpu_BDMPin_BKGD_MS_PTB4
#define  _Cpu_BDMPin_STR "BKGD_MS_PTB4"
#define  _Cpu_BDMPin_BITNUM 4
#define  _Cpu_BDMPinSignal_
#define  _Cpu_SharedFlashOrganization_1
#define  _Cpu_SharedFlashOrganization_STR "1"
#define  _Cpu_SharedFLASHGrp_1
#define  _Cpu_SharedFLASHGrp_STR "1"
#define  _Cpu_EEEfeatureGrp_
#define  _Cpu_FlexNVMSize_32_KB
#define  _Cpu_FlexNVMSize_STR "32_KB"
#define  _Cpu_Dpart_32
#define  _Cpu_Dpart_STR "32"
#define  _Cpu_Dpart__0
#define  _Cpu_Dpart__STR "0"
#define  _Cpu_DataFlashAvailable FALSE
#define  _Cpu_DataFlashAvailable_no
#define  _Cpu_EEPROMAvailable FALSE
#define  _Cpu_EEPROMAvailable_no
#define  _Cpu_EEPROMPartitionStart 2129920
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
#define  _Cpu_FlashOrgDscrBlockSize0 131072
#define  _Cpu_FlashOrgDscrBlockWUnitSize0 4
#define  _Cpu_FlashOrgDscrBlockEUnitSize0 1024
#define  _Cpu_FlashOrgDscrBlockPUnitSize0 4096
#define  _Cpu_FlashOrgDscrBlockAddress1 2097152
#define  _Cpu_FlashOrgDscrBlockSize1 32768
#define  _Cpu_FlashOrgDscrBlockWUnitSize1 4
#define  _Cpu_FlashOrgDscrBlockEUnitSize1 1024
#define  _Cpu_FlashOrgDscrBlockPUnitSize1 4096
#define  _Cpu_ShrdFLASHCfgGrp_1
#define  _Cpu_ShrdFLASHCfgGrp_STR "1"
#define  _Cpu_FTFL_FlashConfigGrp FALSE
#define  _Cpu_FTFL_FlashConfigGrp_Disabled
#define  _Cpu_SharedCPUConfigGrp_1
#define  _Cpu_SharedCPUConfigGrp_STR "1"
#define  _Cpu_CPUCR_IME FALSE
#define  _Cpu_CPUCR_IME_Disabled
#define  _Cpu_CPUCR_IAE FALSE
#define  _Cpu_CPUCR_IAE_Disabled
#define  _Cpu_CPUCR_BWD TRUE
#define  _Cpu_CPUCR_BWD_Enabled
#define  _Cpu_CPUCR_HAE TRUE
#define  _Cpu_CPUCR_HAE_Enabled
#define  _Cpu_CPUCR_CBRR FALSE
#define  _Cpu_CPUCR_CBRR_Disabled
#define  _Cpu_CPUCR_FHP FALSE
#define  _Cpu_CPUCR_FHP_Disabled
#define  _Cpu_CPUCR_FSD TRUE
#define  _Cpu_CPUCR_FSD_Enabled
#define  _Cpu_CPUCR_FCDIS TRUE
#define  _Cpu_CPUCR_FCDIS_Enabled
#define  _Cpu_CPUCR_FDCEN FALSE
#define  _Cpu_CPUCR_FDCEN_Disabled
#define  _Cpu_CPUCR_FICDIS TRUE
#define  _Cpu_CPUCR_FICDIS_Enabled
#define  _Cpu_ShrdSCBGrp1_1
#define  _Cpu_ShrdSCBGrp1_STR "1"
#define  _Cpu_PeriphDeviceSIM_SIM
#define  _Cpu_PeriphDeviceSIM_STR "SIM"
#define  _Cpu_SIMCLKOUTGrp_disabled
#define  _Cpu_SIMCLKOUTGrp_STR "disabled"
#define  _Cpu_SIMSCGCGrp FALSE
#define  _Cpu_SIMSCGCGrp_Disabled
#define  _Cpu_SIMIsInitialized TRUE
#define  _Cpu_SIMIsInitialized_yes
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
#define  _Cpu_PMCLVDIntName_Vlvd
#define  _Cpu_PMCLVDIntName_STR "Vlvd"
#define  _Cpu_PMCLVDIntNameRequestFeatureGroup_Only_if_property_present
#define  _Cpu_PMCLVDIntNameRequestFeatureGroup_STR "Only_if_property_present"
#define  _Cpu_PMCLVDIntNameRequest_enabled
#define  _Cpu_PMCLVDIntNameRequest_STR "enabled"
#define  _Cpu_DevInit_PMCISRnameLVDGrp_
#define  _Cpu_PMCLVDinterrupt_disabled
#define  _Cpu_PMCLVDinterrupt_STR "disabled"
#define  _Cpu_PMCLVWinterrupt_disabled
#define  _Cpu_PMCLVWinterrupt_STR "disabled"
#define  _Cpu_PMCIsInitialized TRUE
#define  _Cpu_PMCIsInitialized_yes
#define  _Cpu_ShrdFBusGrp_1
#define  _Cpu_ShrdFBusGrp_STR "1"
#define  _Cpu_ExternalBusGrp FALSE
#define  _Cpu_ExternalBusGrp_Disabled
#define  _Cpu_Shared_CPUInterrupts_1
#define  _Cpu_Shared_CPUInterrupts_STR "1"
#define  _Cpu_DevInit_Default_ISRGrp_
#define  _Cpu_MCU_Reset_Vector_Grp_
#define  _Cpu_InstrRelatedReset TRUE
#define  _Cpu_InstrRelatedReset_Enabled
#define  _Cpu_IntIllegalInstructionGrp FALSE
#define  _Cpu_IntIllegalInstructionGrp_Disabled
#define  _Cpu_IntUnimplementedLineAGrp FALSE
#define  _Cpu_IntUnimplementedLineAGrp_Disabled
#define  _Cpu_IntUnimplementedLineFGrp FALSE
#define  _Cpu_IntUnimplementedLineFGrp_Disabled
#define  _Cpu_IntPrivilegeViolationGrp FALSE
#define  _Cpu_IntPrivilegeViolationGrp_Disabled
#define  _Cpu_AddrRelatedReset TRUE
#define  _Cpu_AddrRelatedReset_Enabled
#define  _Cpu_IntAccessErrorGrp FALSE
#define  _Cpu_IntAccessErrorGrp_Disabled
#define  _Cpu_IntAddressErrorGrp FALSE
#define  _Cpu_IntAddressErrorGrp_Disabled
#define  _Cpu_IntFormatErrorGrp FALSE
#define  _Cpu_IntFormatErrorGrp_Disabled
#define  _Cpu_IntDivideByZeroGrp FALSE
#define  _Cpu_IntDivideByZeroGrp_Disabled
#define  _Cpu_IntUnsupportedInstrGrp FALSE
#define  _Cpu_IntUnsupportedInstrGrp_Disabled
#define  _Cpu_TrapExceptionsGrp_16
#define  _Cpu_TrapExceptionsGrp_STR "16"
#define  _Cpu_TrapExceptionsGrp_NUMITEMS 16
#define  _Cpu_IntTrapGrp0 FALSE
#define  _Cpu_IntTrapGrp0_Disabled
#define  _Cpu_IntTrapGrp1 FALSE
#define  _Cpu_IntTrapGrp1_Disabled
#define  _Cpu_IntTrapGrp2 FALSE
#define  _Cpu_IntTrapGrp2_Disabled
#define  _Cpu_IntTrapGrp3 FALSE
#define  _Cpu_IntTrapGrp3_Disabled
#define  _Cpu_IntTrapGrp4 FALSE
#define  _Cpu_IntTrapGrp4_Disabled
#define  _Cpu_IntTrapGrp5 FALSE
#define  _Cpu_IntTrapGrp5_Disabled
#define  _Cpu_IntTrapGrp6 FALSE
#define  _Cpu_IntTrapGrp6_Disabled
#define  _Cpu_IntTrapGrp7 FALSE
#define  _Cpu_IntTrapGrp7_Disabled
#define  _Cpu_IntTrapGrp8 FALSE
#define  _Cpu_IntTrapGrp8_Disabled
#define  _Cpu_IntTrapGrp9 FALSE
#define  _Cpu_IntTrapGrp9_Disabled
#define  _Cpu_IntTrapGrp10 FALSE
#define  _Cpu_IntTrapGrp10_Disabled
#define  _Cpu_IntTrapGrp11 FALSE
#define  _Cpu_IntTrapGrp11_Disabled
#define  _Cpu_IntTrapGrp12 FALSE
#define  _Cpu_IntTrapGrp12_Disabled
#define  _Cpu_IntTrapGrp13 FALSE
#define  _Cpu_IntTrapGrp13_Disabled
#define  _Cpu_IntTrapGrp14 FALSE
#define  _Cpu_IntTrapGrp14_Disabled
#define  _Cpu_IntTrapGrp15 FALSE
#define  _Cpu_IntTrapGrp15_Disabled
#define  _Cpu_SWInterruptsGrp_7
#define  _Cpu_SWInterruptsGrp_STR "7"
#define  _Cpu_SWInterruptsGrp_NUMITEMS 7
#define  _Cpu_IntSwiGrp0 FALSE
#define  _Cpu_IntSwiGrp0_Disabled
#define  _Cpu_IntSwiGrp1 FALSE
#define  _Cpu_IntSwiGrp1_Disabled
#define  _Cpu_IntSwiGrp2 FALSE
#define  _Cpu_IntSwiGrp2_Disabled
#define  _Cpu_IntSwiGrp3 FALSE
#define  _Cpu_IntSwiGrp3_Disabled
#define  _Cpu_IntSwiGrp4 FALSE
#define  _Cpu_IntSwiGrp4_Disabled
#define  _Cpu_IntSwiGrp5 FALSE
#define  _Cpu_IntSwiGrp5_Disabled
#define  _Cpu_IntSwiGrp6 FALSE
#define  _Cpu_IntSwiGrp6_Disabled
#define  _Cpu_IntLossOfLockGrp FALSE
#define  _Cpu_IntLossOfLockGrp_Disabled
#define  _Cpu_Shared_CPULowPowerGrp_1
#define  _Cpu_Shared_CPULowPowerGrp_STR "1"
#define  _Cpu_MC_AVLP TRUE
#define  _Cpu_MC_AVLP_0
#define  _Cpu_MC_ALLS TRUE
#define  _Cpu_MC_ALLS_0
#define  _Cpu_MC_AVLLS TRUE
#define  _Cpu_MC_AVLLS_0
#define  _Cpu_Shared_CPULowPowerGrp1_1
#define  _Cpu_Shared_CPULowPowerGrp1_STR "1"
#define  _Cpu_WakeUpCntrlGrp TRUE
#define  _Cpu_WakeUpCntrlGrp_Enabled
#define  _Cpu_WakeUpIntLvl_0
#define  _Cpu_WakeUpIntLvl_STR "0"
#define  _Cpu_ShrdLLWUGrp_1
#define  _Cpu_ShrdLLWUGrp_STR "1"
#define  _Cpu_LLWUGrp FALSE
#define  _Cpu_LLWUGrp_Disabled
#define  _Cpu_Shared_CPULowPowerGrp0_1
#define  _Cpu_Shared_CPULowPowerGrp0_STR "1"
#define  _Cpu_SetLowPowerModeGrp_
#define  _Cpu_SetOperationMode_WAIT_Sel_WAIT_WLPW
#define  _Cpu_SetOperationMode_WAIT_Sel_STR "WAIT_WLPW"
#define  _Cpu_SetOperationMode_SLEEP_Sel_STOP_VLPS
#define  _Cpu_SetOperationMode_SLEEP_Sel_STR "STOP_VLPS"
#define  _Cpu_SetOperationMode_STOP FALSE
#define  _Cpu_SetOperationMode_STOP_Disabled
#define  _Cpu_SpeedModeList_1
#define  _Cpu_SpeedModeList_STR "1"
#define  _Cpu_SpeedModeList_NUMITEMS 1
#define  _Cpu_IRC_32kHzSpeedMode0 0.032768F
#define  _Cpu_IRC_32kHzSpeedMode0_STR "0.032768"
#define  _Cpu_IRC_4MHzSpeedMode0 4.0F
#define  _Cpu_IRC_4MHzSpeedMode0_STR "4.0"
#define  _Cpu_OSC2SpeedMode0 4.0F
#define  _Cpu_OSC2SpeedMode0_STR "4.0"
#define  _Cpu_OSC1SpeedMode0 0.032768F
#define  _Cpu_OSC1SpeedMode0_STR "0.032768"
#define  _Cpu_IRCLKSelSpeedMode0_IRC_32kHz
#define  _Cpu_IRCLKSelSpeedMode0_STR "IRC_32kHz"
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_IRC_32kHz
#define  _Cpu_MCG_FLL_RCLKSelSpeedMode0_STR "IRC_32kHz"
#define  _Cpu_MCG_FRDIVSpeedMode0_Auto_selected_prescaler
#define  _Cpu_MCG_FRDIVSpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_1464
#define  _Cpu_MCG_FLL_MFactorSpeedMode0_STR "1464"
#define  _Cpu_MCG_PRDIVSpeedMode0_Auto_selected_prescaler
#define  _Cpu_MCG_PRDIVSpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_MCG_VDIVSpeedMode0_Auto_selected_prescaler
#define  _Cpu_MCG_VDIVSpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_MCGOUTSelSpeedMode0_MCGFLLCLK
#define  _Cpu_MCGOUTSelSpeedMode0_STR "MCGFLLCLK"
#define  _Cpu_VLPRSpeedMode0 FALSE
#define  _Cpu_VLPRSpeedMode0_Disabled
#define  _Cpu_CLKModeSpeedMode0_0
#define  _Cpu_CLKModeSpeedMode0_STR "0"
#define  _Cpu_MCGModeSelSpeedMode0_0
#define  _Cpu_MCGModeSelSpeedMode0_STR "0"
#define  _Cpu_MCGOutputSpeedMode0 47.972352F
#define  _Cpu_MCGOutputSpeedMode0_STR "47.972352"
#define  _Cpu_IRCLKClkSpeedMode0_0_032768
#define  _Cpu_IRCLKClkSpeedMode0_STR "0_032768"
#define  _Cpu_ERCLK2ClkSpeedMode0_0
#define  _Cpu_ERCLK2ClkSpeedMode0_STR "0"
#define  _Cpu_ERCLK1ClkSpeedMode0_0
#define  _Cpu_ERCLK1ClkSpeedMode0_STR "0"
#define  _Cpu_FLLFixedClkSpeedMode0_16_384
#define  _Cpu_FLLFixedClkSpeedMode0_STR "16_384"
#define  _Cpu_PLL0ClockSpeedMode0_48
#define  _Cpu_PLL0ClockSpeedMode0_STR "48"
#define  _Cpu_FLL0ClockSpeedMode0_48
#define  _Cpu_FLL0ClockSpeedMode0_STR "48"
#define  _Cpu_OUTDIVSpeedMode0_1
#define  _Cpu_OUTDIVSpeedMode0_STR "1"
#define  _Cpu_OUTDIV_SpeedMode0_Auto_selected_prescaler
#define  _Cpu_OUTDIV_SpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_CoreClockSpeedMode0 47.972352F
#define  _Cpu_CoreClockSpeedMode0_STR "47.972352"
#define  _Cpu_BusClockSpeedMode0 23.986176F
#define  _Cpu_BusClockSpeedMode0_STR "23.986176"
#define  _Cpu_USBClockCondGrp0_
#define  _Cpu_USB0_CLKINSpeedMode0 0.0F
#define  _Cpu_USB0_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_USBPLLFLLCLkSelSpeedMode0_0
#define  _Cpu_USBPLLFLLCLkSelSpeedMode0_STR "0"
#define  _Cpu_USBPLLFLLClockSpeedMode0 47.972352F
#define  _Cpu_USBPLLFLLClockSpeedMode0_STR "47.972352"
#define  _Cpu_USBDIVSpeedMode0__1
#define  _Cpu_USBDIVSpeedMode0_STR "_1"
#define  _Cpu_USBFRACSpeedMode0__1
#define  _Cpu_USBFRACSpeedMode0_STR "_1"
#define  _Cpu_USBClockSpeedMode0 47.972352F
#define  _Cpu_USBClockSpeedMode0_STR "47.972352"
#define  _Cpu_I2SClockCondGrp0_
#define  _Cpu_I2S0_CLKINSpeedMode0 0.0F
#define  _Cpu_I2S0_CLKINSpeedMode0_STR "0.0"
#define  _Cpu_I2S0_MclkPinSourceSpeedMode0_Auto_selected_prescaler
#define  _Cpu_I2S0_MclkPinSourceSpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_I2S0_TxClkModeSpeedMode0_Auto_selected_prescaler
#define  _Cpu_I2S0_TxClkModeSpeedMode0_STR "Auto_selected_prescaler"
#define  _Cpu_I2S0_RxClkModeSpeedMode0_Auto_selected_prescaler
#define  _Cpu_I2S0_RxClkModeSpeedMode0_STR "Auto_selected_prescaler"
#define  CPU_TICKS_REFERENCE_CLOCK_HZ 4000000.0F

/*lint -restore */

#endif /* __PE_ProjectInfo_H */
