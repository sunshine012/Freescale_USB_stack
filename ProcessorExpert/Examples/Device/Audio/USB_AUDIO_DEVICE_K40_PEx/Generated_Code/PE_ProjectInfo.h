#ifndef __PE_ProjectInfo_H
#define __PE_ProjectInfo_H

/*lint -save -e621 */

/* Selected target CPU */
#define PE_CPUtype "MK40N512MD100"
#define PE_CPUtype_MK40N512MD100
#define PE_CPUfamily "Kinetis"
#define PE_CPUfamily_Kinetis
#define PE_CPUsubFamily "MK40"
#define PE_CPUsubFamily_MK40

/* Active PE configuration */
#define PEcfg_Configuration "MK40DN512ZVMD10_INTERNAL_RAM"
#ifndef PEcfg_MK40DN512ZVMD10_INTERNAL_RAM
#define PEcfg_MK40DN512ZVMD10_INTERNAL_RAM 1U
#endif

/* BEAN METHODS IN PROJECT */
#define  _usb_audio_USB_Class_Audio_Init
#define  _usb_audio_USB_Class_Audio_DeInit
#define  _usb_audio_USB_Class_Audio_Send_Data
#define  _usb_audio_USB_Class_Audio_Recv_Data
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

/* BEAN usb_audio PROPERTIES CONFIGURATION */
#define  _usb_audio_BeanTypeName_USB_AUDIO_CLASS
#define  _usb_audio_BeanTypeName_STR "USB_AUDIO_CLASS"
#define  _usb_audio_DeviceName_usb_audio
#define  _usb_audio_DeviceName_STR "usb_audio"
#define  _usb_audio_Audio_Mode_DEVICE
#define  _usb_audio_Audio_Mode_STR "DEVICE"
#define  _usb_audio_Usb_Device_Usb_Device
#define  _usb_audio_Usb_Device_STR "Usb_Device"
#define  _usb_audio_Protocol_0x00
#define  _usb_audio_Protocol_STR "0x00"
#define  _usb_audio_Subclass_01
#define  _usb_audio_Subclass_STR "01"
#define  _usb_audio_Ep0_max_packet_size_32
#define  _usb_audio_Ep0_max_packet_size_STR "32"
#define  _usb_audio_Speed_FULL_SPEED
#define  _usb_audio_Speed_STR "FULL_SPEED"
#define  _usb_audio_Standard_ac_blength 9
#define  _usb_audio_Standard_ac_bdescriptor_type_0x04
#define  _usb_audio_Standard_ac_bdescriptor_type_STR "0x04"
#define  _usb_audio_Standard_ac_binterface_number 0
#define  _usb_audio_Standard_ac_balternate_setting 0
#define  _usb_audio_Standard_ac_bnum_endpoints 0
#define  _usb_audio_Standard_ac_binterface_class_01
#define  _usb_audio_Standard_ac_binterface_class_STR "01"
#define  _usb_audio_Standard_ac_binterface_sub_class_01
#define  _usb_audio_Standard_ac_binterface_sub_class_STR "01"
#define  _usb_audio_Standard_ac_binterface_protocol 0
#define  _usb_audio_Standard_ac_iinterface 0
#define  _usb_audio_Class_specific_ac_blength 9
#define  _usb_audio_Class_specific_ac_bdescriptor_type_0x24
#define  _usb_audio_Class_specific_ac_bdescriptor_type_STR "0x24"
#define  _usb_audio_Class_specific_ac_bdescriptor_sub_type_0x01
#define  _usb_audio_Class_specific_ac_bdescriptor_sub_type_STR "0x01"
#define  _usb_audio_Class_specific_ac_bcd_adc 256
#define  _usb_audio_Class_specific_ac_wtotal_length 43
#define  _usb_audio_Class_specific_ac_bin_collection 1
#define  _usb_audio_Class_specific_ac_bainterface_nr_1
#define  _usb_audio_Class_specific_ac_bainterface_nr_STR "1"
#define  _usb_audio_Class_specific_ac_bainterface_nr_NUMITEMS 1
#define  _usb_audio_Class_specific_ac_bainterface_nr0 1
#define  _usb_audio_Input_terminal_descriptor_1
#define  _usb_audio_Input_terminal_descriptor_STR "1"
#define  _usb_audio_Input_terminal_descriptor_NUMITEMS 1
#define  _usb_audio_Input_terminal_descriptor_blength0 12
#define  _usb_audio_Input_terminal_descriptor_bdescriptor_type0_0x24
#define  _usb_audio_Input_terminal_descriptor_bdescriptor_type0_STR "0x24"
#define  _usb_audio_Input_terminal_descriptor_bdescriptor_sub_type0_0x02
#define  _usb_audio_Input_terminal_descriptor_bdescriptor_sub_type0_STR "0x02"
#define  _usb_audio_Input_terminal_descriptor_bterminal_id0 1
#define  _usb_audio_Input_terminal_descriptor_wterminal_type0_0x0201
#define  _usb_audio_Input_terminal_descriptor_wterminal_type0_STR "0x0201"
#define  _usb_audio_Input_terminal_descriptor_bassoc_terminal0 0
#define  _usb_audio_Input_terminal_descriptor_bnr_channels0 1
#define  _usb_audio_Input_terminal_descriptor_wchannel_config0 0
#define  _usb_audio_Input_terminal_descriptor_ichannel_names0 0
#define  _usb_audio_Input_terminal_descriptor_iterminal0 0
#define  _usb_audio_Feature_unit_descriptor_1
#define  _usb_audio_Feature_unit_descriptor_STR "1"
#define  _usb_audio_Feature_unit_descriptor_NUMITEMS 1
#define  _usb_audio_Feature_unit_blength0 10
#define  _usb_audio_Feature_unit_bdescriptor_type0_0x24
#define  _usb_audio_Feature_unit_bdescriptor_type0_STR "0x24"
#define  _usb_audio_Feature_unit_bdescriptor_sub_type0_0x06
#define  _usb_audio_Feature_unit_bdescriptor_sub_type0_STR "0x06"
#define  _usb_audio_Feature_unit_bunit_id0 2
#define  _usb_audio_Feature_unit_bsource_id0 1
#define  _usb_audio_Feature_unit_bcontrol_size0 2
#define  _usb_audio_Feature_unit_bma_controls0_1
#define  _usb_audio_Feature_unit_bma_controls0_STR "1"
#define  _usb_audio_Feature_unit_bma_controls0_NUMITEMS 1
#define  _usb_audio_Mute_control0_0 TRUE
#define  _usb_audio_Mute_control0_0_yes
#define  _usb_audio_Volume_control0_0 TRUE
#define  _usb_audio_Volume_control0_0_yes
#define  _usb_audio_Bass_control0_0 TRUE
#define  _usb_audio_Bass_control0_0_yes
#define  _usb_audio_Mid_control0_0 TRUE
#define  _usb_audio_Mid_control0_0_yes
#define  _usb_audio_Treble_control0_0 TRUE
#define  _usb_audio_Treble_control0_0_yes
#define  _usb_audio_Graphic_eq_control0_0 TRUE
#define  _usb_audio_Graphic_eq_control0_0_yes
#define  _usb_audio_Automatic_gain_control0_0 TRUE
#define  _usb_audio_Automatic_gain_control0_0_yes
#define  _usb_audio_Delay_control0_0 TRUE
#define  _usb_audio_Delay_control0_0_yes
#define  _usb_audio_Bass_boost0_0 TRUE
#define  _usb_audio_Bass_boost0_0_yes
#define  _usb_audio_Loudness0_0 TRUE
#define  _usb_audio_Loudness0_0_yes
#define  _usb_audio_Feature_unit_bma_master_control0 0
#define  _usb_audio_Feature_unit_ifeature0 0
#define  _usb_audio_Output_terminal_descriptor_1
#define  _usb_audio_Output_terminal_descriptor_STR "1"
#define  _usb_audio_Output_terminal_descriptor_NUMITEMS 1
#define  _usb_audio_Output_terminal_blength0 9
#define  _usb_audio_Output_terminal_bdescriptor_type0_0x24
#define  _usb_audio_Output_terminal_bdescriptor_type0_STR "0x24"
#define  _usb_audio_Output_terminal_bdescriptor_sub_type0_0x03
#define  _usb_audio_Output_terminal_bdescriptor_sub_type0_STR "0x03"
#define  _usb_audio_Output_terminal_bterminal_id0 3
#define  _usb_audio_Output_terminal_wterminal_type0_0x0101
#define  _usb_audio_Output_terminal_wterminal_type0_STR "0x0101"
#define  _usb_audio_Output_terminal_bassoc_terminal0 0
#define  _usb_audio_Output_terminal_bsource_id0 2
#define  _usb_audio_Output_terminal_iterminal0 0
#define  _usb_audio_Audio_streaming_interface_descriptor_1
#define  _usb_audio_Audio_streaming_interface_descriptor_STR "1"
#define  _usb_audio_Audio_streaming_interface_descriptor_NUMITEMS 1
#define  _usb_audio_Audio_streaming_interface_alternate_setting0_2
#define  _usb_audio_Audio_streaming_interface_alternate_setting0_STR "2"
#define  _usb_audio_Audio_streaming_interface_alternate_setting0_NUMITEMS 2
#define  _usb_audio_Alternate_setting_blength0_0 9
#define  _usb_audio_Alternate_setting_bdescriptor_type0_0_0x04
#define  _usb_audio_Alternate_setting_bdescriptor_type0_0_STR "0x04"
#define  _usb_audio_Alternate_setting_binterface_number0_0 1
#define  _usb_audio_Alternate_setting_balternate_setting0_0 0
#define  _usb_audio_Alternate_setting_bnumber_endpoints0_0 0
#define  _usb_audio_Alternate_setting_binterface_class0_0_01
#define  _usb_audio_Alternate_setting_binterface_class0_0_STR "01"
#define  _usb_audio_Alternate_setting_binterface_sub_class0_0_02
#define  _usb_audio_Alternate_setting_binterface_sub_class0_0_STR "02"
#define  _usb_audio_Alternate_setting_binterface_protocol0_0 0
#define  _usb_audio_Alternate_setting_iinterface0_0 0
#define  _usb_audio_Alternate_setting_blength0_1 9
#define  _usb_audio_Alternate_setting_bdescriptor_type0_1_0x04
#define  _usb_audio_Alternate_setting_bdescriptor_type0_1_STR "0x04"
#define  _usb_audio_Alternate_setting_binterface_number0_1 1
#define  _usb_audio_Alternate_setting_balternate_setting0_1 1
#define  _usb_audio_Alternate_setting_bnumber_endpoints0_1 1
#define  _usb_audio_Alternate_setting_binterface_class0_1_01
#define  _usb_audio_Alternate_setting_binterface_class0_1_STR "01"
#define  _usb_audio_Alternate_setting_binterface_sub_class0_1_02
#define  _usb_audio_Alternate_setting_binterface_sub_class0_1_STR "02"
#define  _usb_audio_Alternate_setting_binterface_protocol0_1 0
#define  _usb_audio_Alternate_setting_iinterface0_1 0
#define  _usb_audio_Class_specific_as_blength0 7
#define  _usb_audio_Class_specific_as_bdescriptor_type0_0x24
#define  _usb_audio_Class_specific_as_bdescriptor_type0_STR "0x24"
#define  _usb_audio_Class_specific_as_bdescriptor_sub_type0_0x01
#define  _usb_audio_Class_specific_as_bdescriptor_sub_type0_STR "0x01"
#define  _usb_audio_Class_specific_as_bterminal_link0 3
#define  _usb_audio_Class_specific_as_bdelay0 0
#define  _usb_audio_Class_specific_as_format_tag0_0x0002
#define  _usb_audio_Class_specific_as_format_tag0_STR "0x0002"
#define  _usb_audio_Format_type_blength0 11
#define  _usb_audio_Format_type_bdescriptor_type0_0x24
#define  _usb_audio_Format_type_bdescriptor_type0_STR "0x24"
#define  _usb_audio_Format_type_bdescriptor_sub_type0_0x02
#define  _usb_audio_Format_type_bdescriptor_sub_type0_STR "0x02"
#define  _usb_audio_Format_type_bformat_type0_0x01
#define  _usb_audio_Format_type_bformat_type0_STR "0x01"
#define  _usb_audio_Format_type_bnr_channels0 1
#define  _usb_audio_Format_type_bsub_frame_size0 1
#define  _usb_audio_Format_type_bbit_resolution0 8
#define  _usb_audio_Format_type_bsam_freq_type0 1
#define  _usb_audio_Format_type_bsam_freq0 8000
#define  _usb_audio_Audio_standard_endpoint_descriptor_blength0 9
#define  _usb_audio_Audio_standard_endpoint_descriptor_bdescriptor_type0_0x05
#define  _usb_audio_Audio_standard_endpoint_descriptor_bdescriptor_type0_STR "0x05"
#define  _usb_audio_Audio_standard_endpoint_descriptor_bendpoint_address0 129
#define  _usb_audio_Audio_standard_endpoint_descriptor_bm_attributes0 1
#define  _usb_audio_Audio_standard_endpoint_descriptor_wmax_packet_size0 16
#define  _usb_audio_Audio_standard_endpoint_descriptor_binterval0 0
#define  _usb_audio_Audio_standard_endpoint_descriptor_brefresh0 0
#define  _usb_audio_Audio_standard_endpoint_descriptor_bsynch_address0 0
#define  _usb_audio_Audio_data_endpoint_descriptor_blength0 7
#define  _usb_audio_Audio_data_endpoint_descriptor_bdescriptor_type0_0x25
#define  _usb_audio_Audio_data_endpoint_descriptor_bdescriptor_type0_STR "0x25"
#define  _usb_audio_Audio_data_endpoint_descriptor_bdescriptor_sub_type0_0x01
#define  _usb_audio_Audio_data_endpoint_descriptor_bdescriptor_sub_type0_STR "0x01"
#define  _usb_audio_Audio_data_endpoint_descriptor_bm_attributes0 0
#define  _usb_audio_Audio_data_endpoint_descriptor_block_delay_units0 0
#define  _usb_audio_Audio_data_endpoint_descriptor_wlock_delay0 0
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
#define  _usb_device_ProductID 517
#define  _usb_device_bcdDevice 2
#define  _usb_device_Manufacturer 1
#define  _usb_device_Product 2
#define  _usb_device_SerialNumber 3
#define  _usb_device_NumConfigurations 1
#define  _usb_device_NumInterfaces 2
#define  _usb_device_Configuration_Value 1
#define  _usb_device_Configuration_Index 0
#define  _usb_device_Attributes_Self_Powered
#define  _usb_device_Attributes_STR "Self_Powered"
#define  _usb_device_MaxPower 50
#define  _usb_device_Interfaces_List_2
#define  _usb_device_Interfaces_List_STR "2"
#define  _usb_device_Interfaces_List_NUMITEMS 2
#define  _usb_device_InterfaceNumber0 0
#define  _usb_device_AlternateSetting0 0
#define  _usb_device_NumEndpoints0 0
#define  _usb_device_InterfaceClass0 1
#define  _usb_device_InterfaceSubClass0 1
#define  _usb_device_InterfaceProtocol0 0
#define  _usb_device_Interface_des_index0 0
#define  _usb_device_Endpoints_List0_0
#define  _usb_device_Endpoints_List0_STR "0"
#define  _usb_device_Endpoints_List0_NUMITEMS 0
#define  _usb_device_InterfaceNumber1 1
#define  _usb_device_AlternateSetting1 1
#define  _usb_device_NumEndpoints1 1
#define  _usb_device_InterfaceClass1 1
#define  _usb_device_InterfaceSubClass1 2
#define  _usb_device_InterfaceProtocol1 0
#define  _usb_device_Interface_des_index1 0
#define  _usb_device_Endpoints_List1_1
#define  _usb_device_Endpoints_List1_STR "1"
#define  _usb_device_Endpoints_List1_NUMITEMS 1
#define  _usb_device_EndpointNumber1_0 1
#define  _usb_device_EndpointDirection1_0 FALSE
#define  _usb_device_EndpointDirection1_0_IN
#define  _usb_device_Transfer_Type1_0_ISOCHRONOUS
#define  _usb_device_Transfer_Type1_0_STR "ISOCHRONOUS"
#define  _usb_device_Synchronisation_Type1_0_No_Synchonisation
#define  _usb_device_Synchronisation_Type1_0_STR "No_Synchonisation"
#define  _usb_device_Usage_Type1_0_Data_Endpoint
#define  _usb_device_Usage_Type1_0_STR "Data_Endpoint"
#define  _usb_device_EndpointMaxPacketSize1_0_32
#define  _usb_device_EndpointMaxPacketSize1_0_STR "32"
#define  _usb_device_EndpointMaxPacketSize_int_iso1_0 16
#define  _usb_device_Interval1_0 0
#define  _usb_device_LANGID 2308
#define  _usb_device_String_desc_list_2
#define  _usb_device_String_desc_list_STR "2"
#define  _usb_device_String_desc_list_NUMITEMS 2
#define  _usb_device_String0_FREESCALE_SEMICONDUCTOR_INC_
#define  _usb_device_String0_STR "FREESCALE_SEMICONDUCTOR_INC_"
#define  _usb_device_String1_USB_AUDIO_DEVICE_PEx_DEMO
#define  _usb_device_String1_STR "USB_AUDIO_DEVICE_PEx_DEMO"
#define  _usb_device_Gen_desc_en FALSE
#define  _usb_device_Gen_desc_en_no
#define  _usb_device_OTG_en FALSE
#define  _usb_device_OTG_en_no
/* BEAN Cpu PROPERTIES CONFIGURATION */
#define  _Cpu_BeanTypeName_MK40N512MD100
#define  _Cpu_BeanTypeName_STR "MK40N512MD100"
#define  _Cpu_DeviceName_Cpu
#define  _Cpu_DeviceName_STR "Cpu"
#define  _Cpu_CPU_MK40DN512ZVMD10
#define  _Cpu_CPU_STR "MK40DN512ZVMD10"
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
