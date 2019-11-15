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
#define PEcfg_Configuration "MK53DN512ZCMD10_INTERNAL_FLASH"
#ifndef PEcfg_MK53DN512ZCMD10_INTERNAL_FLASH
#define PEcfg_MK53DN512ZCMD10_INTERNAL_FLASH 1U
#endif

/* BEAN METHODS IN PROJECT */
#define  _usb_host_audio_usb_class_audio_init_ipipe
#define  _usb_host_audio_usb_audio_recv_data
#define  _usb_host_audio_usb_audio_send_data
#define  _usb_host_audio_usb_class_audio_get_copy_protect
#define  _usb_host_audio_usb_class_audio_set_copy_protect
#define  _usb_host_audio_usb_class_audio_get_cur_mute
#define  _usb_host_audio_usb_class_audio_set_cur_mute
#define  _usb_host_audio_usb_class_audio_get_cur_volume
#define  _usb_host_audio_usb_class_audio_set_cur_volume
#define  _usb_host_audio_usb_class_audio_get_min_volume
#define  _usb_host_audio_usb_class_audio_set_min_volume
#define  _usb_host_audio_usb_class_audio_get_max_volume
#define  _usb_host_audio_usb_class_audio_get_res_volume
#define  _usb_host_audio_usb_class_audio_set_max_volume
#define  _usb_host_audio_usb_class_audio_set_res_volume
#define  _usb_host_audio_usb_class_audio_get_cur_bass
#define  _usb_host_audio_usb_class_audio_set_cur_bass
#define  _usb_host_audio_usb_class_audio_get_min_bass
#define  _usb_host_audio_usb_class_audio_set_min_bass
#define  _usb_host_audio_usb_class_audio_set_max_bass
#define  _usb_host_audio_usb_class_audio_get_max_bass
#define  _usb_host_audio_usb_class_audio_get_res_bass
#define  _usb_host_audio_usb_class_audio_get_cur_mid
#define  _usb_host_audio_usb_class_audio_set_res_bass
#define  _usb_host_audio_usb_class_audio_set_cur_mid
#define  _usb_host_audio_usb_class_audio_get_min_mid
#define  _usb_host_audio_usb_class_audio_set_min_mid
#define  _usb_host_audio_usb_class_audio_get_max_mid
#define  _usb_host_audio_usb_class_audio_set_max_mid
#define  _usb_host_audio_usb_class_audio_get_res_mid
#define  _usb_host_audio_usb_class_audio_set_res_mid
#define  _usb_host_audio_usb_class_audio_get_cur_treble
#define  _usb_host_audio_usb_class_audio_set_cur_treble
#define  _usb_host_audio_usb_class_audio_get_min_treble
#define  _usb_host_audio_usb_class_audio_set_min_treble
#define  _usb_host_audio_usb_class_audio_get_max_treble
#define  _usb_host_audio_usb_class_audio_set_max_treble
#define  _usb_host_audio_usb_class_audio_get_res_treble
#define  _usb_host_audio_usb_class_audio_set_res_treble
#define  _usb_host_audio_usb_class_audio_get_cur_graphic_eq
#define  _usb_host_audio_usb_class_audio_get_min_graphic_eq
#define  _usb_host_audio_usb_class_audio_set_cur_graphic_eq
#define  _usb_host_audio_usb_class_audio_set_min_graphic_eq
#define  _usb_host_audio_usb_class_audio_get_max_graphic_eq
#define  _usb_host_audio_usb_class_audio_set_max_graphic_eq
#define  _usb_host_audio_usb_class_audio_get_res_graphic_eq
#define  _usb_host_audio_usb_class_audio_set_res_graphic_eq
#define  _usb_host_audio_usb_class_audio_get_cur_automatic_gain
#define  _usb_host_audio_usb_class_audio_set_cur_automatic_gain
#define  _usb_host_audio_usb_class_audio_get_cur_delay
#define  _usb_host_audio_usb_class_audio_set_cur_delay
#define  _usb_host_audio_usb_class_audio_get_min_delay
#define  _usb_host_audio_usb_class_audio_set_min_delay
#define  _usb_host_audio_usb_class_audio_get_max_delay
#define  _usb_host_audio_usb_class_audio_set_max_delay
#define  _usb_host_audio_usb_class_audio_get_res_delay
#define  _usb_host_audio_usb_class_audio_set_res_delay
#define  _usb_host_audio_usb_class_audio_get_cur_bass_boost
#define  _usb_host_audio_usb_class_audio_set_cur_bass_boost
#define  _usb_host_audio_usb_class_audio_set_cur_sampling_frequency
#define  _usb_host_audio_usb_class_audio_get_cur_sampling_frequency
#define  _usb_host_audio_usb_class_audio_get_min_sampling_frequency
#define  _usb_host_audio_usb_class_audio_set_min_sampling_frequency
#define  _usb_host_audio_usb_class_audio_get_max_sampling_frequency
#define  _usb_host_audio_usb_class_audio_set_max_sampling_frequency
#define  _usb_host_audio_usb_class_audio_get_res_sampling_frequency
#define  _usb_host_audio_usb_class_audio_set_res_sampling_frequency
#define  _usb_host_audio_usb_class_audio_get_cur_pitch
#define  _usb_host_audio_usb_class_audio_set_cur_pitch
#define  _usb_host_audio_usb_class_audio_get_mem_endpoint
#define  _usb_host_audio_usb_class_audio_set_mem_endpoint
#define  _usb_host_audio_usb_class_audio_control_init
#define  _usb_host_audio_usb_class_audio_stream_init
#define  _usb_host_audio_usb_class_audio_get_ctrl_interface
#define  _usb_host_audio_usb_class_audio_control_get_descriptors
#define  _usb_host_audio_usb_class_audio_stream_get_descriptors
#define  _usb_host_audio_usb_class_audio_control_set_descriptors
#define  _usb_host_audio_usb_class_audio_stream_set_descriptors
#define  _UART_Init
#define  _UART_Deinit
#define  _UART_SendBlock
#define  _UART_ReceiveBlock
#define  _UART_GetSentDataNum
#define  _UART_GetReceivedDataNum
#define  _UART_Main
#define  _PIT0_Init
#define  _PIT0_Deinit
#define  _PIT0_Enable
#define  _PIT0_Disable
#define  _PWM_Init
#define  _PTC13_Init
#define  _PTC5_Init
#define  _PTC5_SetFieldBits
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
#define  _PIT0_OnCounterRestart
#define  _PTC13_OnPortEvent
#define  _PTC5_OnPortEvent
#define  _Cpu_OnNMIINT

/* BEAN usb_host_audio PROPERTIES CONFIGURATION */
#define  _usb_host_audio_BeanTypeName_USB_AUDIO_CLASS
#define  _usb_host_audio_BeanTypeName_STR "USB_AUDIO_CLASS"
#define  _usb_host_audio_DeviceName_usb_host_audio
#define  _usb_host_audio_DeviceName_STR "usb_host_audio"
#define  _usb_host_audio_Audio_Mode_HOST
#define  _usb_host_audio_Audio_Mode_STR "HOST"
#define  _usb_host_audio_Usb_Host_Usb_Host
#define  _usb_host_audio_Usb_Host_STR "Usb_Host"
#define  _usb_host_audio_Use_Poll TRUE
#define  _usb_host_audio_Use_Poll_yes
#define  _usb_host_audio_Use_Hub TRUE
#define  _usb_host_audio_Use_Hub_yes
#define  _usb_host_audio_Audio_class_list_2
#define  _usb_host_audio_Audio_class_list_STR "2"
#define  _usb_host_audio_Audio_class_list_NUMITEMS 2
#define  _usb_host_audio_Audio_class_code0_01
#define  _usb_host_audio_Audio_class_code0_STR "01"
#define  _usb_host_audio_Audio_sub_class_code0_01
#define  _usb_host_audio_Audio_sub_class_code0_STR "01"
#define  _usb_host_audio_Audio_protocol_code0 0
#define  _usb_host_audio_Audio_class_code_mask0 255
#define  _usb_host_audio_Audio_sub_class_code_mask0 255
#define  _usb_host_audio_Audio_protocol_code_mask0 0
#define  _usb_host_audio_Audio_class_code1_01
#define  _usb_host_audio_Audio_class_code1_STR "01"
#define  _usb_host_audio_Audio_sub_class_code1_02
#define  _usb_host_audio_Audio_sub_class_code1_STR "02"
#define  _usb_host_audio_Audio_protocol_code1 0
#define  _usb_host_audio_Audio_class_code_mask1 255
#define  _usb_host_audio_Audio_sub_class_code_mask1 255
#define  _usb_host_audio_Audio_protocol_code_mask1 0
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
#define  _UART_Inp_PTC16_UART3_RX_ENET0_1588_TMR0_LCD_P36
#define  _UART_Inp_STR "PTC16_UART3_RX_ENET0_1588_TMR0_LCD_P36"
#define  _UART_Inp_BITNUM 16
#define  _UART_RxDpinSignal_
#define  _UART_Transmitter TRUE
#define  _UART_Transmitter_Enabled
#define  _UART_Out_PTC17_UART3_TX_ENET0_1588_TMR1_LCD_P37
#define  _UART_Out_STR "PTC17_UART3_TX_ENET0_1588_TMR1_LCD_P37"
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
/* BEAN PIT0 PROPERTIES CONFIGURATION */
#define  _PIT0_BeanTypeName_TimerUnit_LDD
#define  _PIT0_BeanTypeName_STR "TimerUnit_LDD"
#define  _PIT0_DeviceName_PIT0
#define  _PIT0_DeviceName_STR "PIT0"
#define  _PIT0_MainModule_PIT
#define  _PIT0_MainModule_STR "PIT"
#define  _PIT0_Counter_PIT_CVAL0
#define  _PIT0_Counter_STR "PIT_CVAL0"
#define  _PIT0_CounterDir_1
#define  _PIT0_CounterDir_STR "1"
#define  _PIT0_CntWidth_32_bits
#define  _PIT0_CntWidth_STR "32_bits"
#define  _PIT0_ValueType_0
#define  _PIT0_ValueType_STR "0"
#define  _PIT0_InputClock_0
#define  _PIT0_InputClock_STR "0"
#define  _PIT0_TmgCounter_value 48.0F  /* This is timing required by the user - may not match with the set value */
#define  _PIT0_TmgCounter_unit MHz     /* This is timing required by the user - may not match with the set value */
#define  _PIT0_TmgCounter_unit_MHz     /* This is timing required by the user - may not match with the set value */
#define  _PIT0_TmgCounter_valueSet 48000000.0F /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _PIT0_TmgCounter_unitSet Hz   /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _PIT0_TmgCounter_unitSet_Hz   /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _PIT0_TmgCounter_NumTimingItems 1
#define  _PIT0_CounterRestart_1
#define  _PIT0_CounterRestart_STR "1"
#define  _PIT0_PeriodDevice_PIT_LDVAL0
#define  _PIT0_PeriodDevice_STR "PIT_LDVAL0"
#define  _PIT0_Tmg_Period_value 125.0F /* This is timing required by the user - may not match with the set value */
#define  _PIT0_Tmg_Period_unit us      /* This is timing required by the user - may not match with the set value */
#define  _PIT0_Tmg_Period_unit_us      /* This is timing required by the user - may not match with the set value */
#define  _PIT0_Tmg_Period_valueSet 125.0F /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _PIT0_Tmg_Period_unitSet us   /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _PIT0_Tmg_Period_unitSet_us   /* Value set by PE timing model in units: us/Hz/baud/ticks/bit_s - according to requirements */
#define  _PIT0_Tmg_Period_0_CompareValue 6000
#define  _PIT0_Tmg_Period_NumTimingItems 1
#define  _PIT0_IntServiceCounter TRUE
#define  _PIT0_IntServiceCounter_Enabled
#define  _PIT0_ModuloInt_INT_PIT0
#define  _PIT0_ModuloInt_STR "INT_PIT0"
#define  _PIT0_ModuloInitPriority_8
#define  _PIT0_ModuloInitPriority_STR "8"
#define  _PIT0_ChannelList_0
#define  _PIT0_ChannelList_STR "0"
#define  _PIT0_ChannelList_NUMITEMS 0
#define  _PIT0_InitEnable TRUE
#define  _PIT0_InitEnable_yes
#define  _PIT0_AutoInitializationGrp_1
#define  _PIT0_AutoInitializationGrp_STR "1"
#define  _PIT0_AutoInitialization TRUE
#define  _PIT0_AutoInitialization_yes
#define  _PIT0_OnCounterRestartInitMask TRUE
#define  _PIT0_OnCounterRestartInitMask_Enabled
#define  _PIT0_OnChannel0InitMask FALSE
#define  _PIT0_OnChannel0InitMask_Disabled
#define  _PIT0_OnChannel1InitMask FALSE
#define  _PIT0_OnChannel1InitMask_Disabled
#define  _PIT0_OnChannel2InitMask FALSE
#define  _PIT0_OnChannel2InitMask_Disabled
#define  _PIT0_OnChannel3InitMask FALSE
#define  _PIT0_OnChannel3InitMask_Disabled
#define  _PIT0_OnChannel4InitMask FALSE
#define  _PIT0_OnChannel4InitMask_Disabled
#define  _PIT0_OnChannel5InitMask FALSE
#define  _PIT0_OnChannel5InitMask_Disabled
#define  _PIT0_OnChannel6InitMask FALSE
#define  _PIT0_OnChannel6InitMask_Disabled
#define  _PIT0_OnChannel7InitMask FALSE
#define  _PIT0_OnChannel7InitMask_Disabled
#define  _PIT0_ClockConfigGrp_1
#define  _PIT0_ClockConfigGrp_STR "1"
#define  _PIT0_SpeedMode0_0
#define  _PIT0_SpeedMode0_STR "0"
#define  _PIT0_SpeedMode1_1
#define  _PIT0_SpeedMode1_STR "1"
#define  _PIT0_SpeedMode2_1
#define  _PIT0_SpeedMode2_STR "1"
#define  _PIT0_SpeedMode3_1
#define  _PIT0_SpeedMode3_STR "1"
#define  _PIT0_SpeedMode4_1
#define  _PIT0_SpeedMode4_STR "1"
#define  _PIT0_SpeedMode5_1
#define  _PIT0_SpeedMode5_STR "1"
#define  _PIT0_SpeedMode6_1
#define  _PIT0_SpeedMode6_STR "1"
#define  _PIT0_SpeedMode7_1
#define  _PIT0_SpeedMode7_STR "1"
/* BEAN PWM PROPERTIES CONFIGURATION */
#define  _PWM_BeanTypeName_Init_FTM_VAR0
#define  _PWM_BeanTypeName_STR "Init_FTM_VAR0"
#define  _PWM_DeviceName_PWM
#define  _PWM_DeviceName_STR "PWM"
#define  _PWM_PeriphDevice_FTM0
#define  _PWM_PeriphDevice_STR "FTM0"
#define  _PWM_PeriphClockGateFeatureGroup_Only_if_property_present
#define  _PWM_PeriphClockGateFeatureGroup_STR "Only_if_property_present"
#define  _PWM_PeriphClockGate_enabled
#define  _PWM_PeriphClockGate_STR "enabled"
#define  _PWM_ClockSource_systemClock
#define  _PWM_ClockSource_STR "systemClock"
#define  _PWM_Prescaler_0
#define  _PWM_Prescaler_STR "0"
#define  _PWM_CounterInit 0
#define  _PWM_ModuloCounter 255
#define  _PWM_Period_5_333_us
#define  _PWM_Period_STR "5_333_us"
#define  _PWM_DeadtimePrescaler_0
#define  _PWM_DeadtimePrescaler_STR "0"
#define  _PWM_DeadtimeValue 0
#define  _PWM_Deadtime_DISABLED
#define  _PWM_Deadtime_STR "DISABLED"
#define  _PWM_NUMTOF_0
#define  _PWM_NUMTOF_STR "0"
#define  _PWM_FTMEN_tpm
#define  _PWM_FTMEN_STR "tpm"
#define  _PWM_BDMMODE_00
#define  _PWM_BDMMODE_STR "00"
#define  _PWM_GTBEEN_disabled
#define  _PWM_GTBEEN_STR "disabled"
#define  _PWM_GTBEOUT_disabled
#define  _PWM_GTBEOUT_STR "disabled"
#define  _PWM_WPEN_disabled
#define  _PWM_WPEN_STR "disabled"
#define  _PWM_QuadDecoderFeatureCondGroup_Only_if_property_present
#define  _PWM_QuadDecoderFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelCombineSettingsGrp0FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelCombineSettingsGrp0FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CombCOMP0_disabled
#define  _PWM_CombCOMP0_STR "disabled"
#define  _PWM_CombFAULTEN0_disabled
#define  _PWM_CombFAULTEN0_STR "disabled"
#define  _PWM_CombSYNCEN0_disabled
#define  _PWM_CombSYNCEN0_STR "disabled"
#define  _PWM_CombDTEN0_disabled
#define  _PWM_CombDTEN0_STR "disabled"
#define  _PWM_CombINV0EN_disabled
#define  _PWM_CombINV0EN_STR "disabled"
#define  _PWM_ChannelCombineSettingsGrp1FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelCombineSettingsGrp1FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CombCOMP1_disabled
#define  _PWM_CombCOMP1_STR "disabled"
#define  _PWM_CombFAULTEN1_disabled
#define  _PWM_CombFAULTEN1_STR "disabled"
#define  _PWM_CombSYNCEN1_disabled
#define  _PWM_CombSYNCEN1_STR "disabled"
#define  _PWM_CombDTEN1_disabled
#define  _PWM_CombDTEN1_STR "disabled"
#define  _PWM_CombINV1EN_disabled
#define  _PWM_CombINV1EN_STR "disabled"
#define  _PWM_ChannelCombineSettingsGrp2FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelCombineSettingsGrp2FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CombCOMP2_disabled
#define  _PWM_CombCOMP2_STR "disabled"
#define  _PWM_CombFAULTEN2_disabled
#define  _PWM_CombFAULTEN2_STR "disabled"
#define  _PWM_CombSYNCEN2_disabled
#define  _PWM_CombSYNCEN2_STR "disabled"
#define  _PWM_CombDTEN2_disabled
#define  _PWM_CombDTEN2_STR "disabled"
#define  _PWM_CombINV2EN_disabled
#define  _PWM_CombINV2EN_STR "disabled"
#define  _PWM_ChannelCombineSettingsGrp3FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelCombineSettingsGrp3FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CombCOMP3_disabled
#define  _PWM_CombCOMP3_STR "disabled"
#define  _PWM_CombFAULTEN3_disabled
#define  _PWM_CombFAULTEN3_STR "disabled"
#define  _PWM_CombSYNCEN3_disabled
#define  _PWM_CombSYNCEN3_STR "disabled"
#define  _PWM_CombDTEN3_disabled
#define  _PWM_CombDTEN3_STR "disabled"
#define  _PWM_CombINV3EN_disabled
#define  _PWM_CombINV3EN_STR "disabled"
#define  _PWM_PWMSYNCMODE_disabled
#define  _PWM_PWMSYNCMODE_STR "disabled"
#define  _PWM_REINIT_disabled
#define  _PWM_REINIT_STR "disabled"
#define  _PWM_HWTRIGMODE_cleared
#define  _PWM_HWTRIGMODE_STR "cleared"
#define  _PWM_CNTINC_risingEdges
#define  _PWM_CNTINC_STR "risingEdges"
#define  _PWM_INVC_risingEdges
#define  _PWM_INVC_STR "risingEdges"
#define  _PWM_SWOC_risingEdges
#define  _PWM_SWOC_STR "risingEdges"
#define  _PWM_SWSYNC_notSelected
#define  _PWM_SWSYNC_STR "notSelected"
#define  _PWM_SYNCHOM_disabled
#define  _PWM_SYNCHOM_STR "disabled"
#define  _PWM_CNTMIN_disabled
#define  _PWM_CNTMIN_STR "disabled"
#define  _PWM_CNTMAX_disabled
#define  _PWM_CNTMAX_STR "disabled"
#define  _PWM_INITTRIGEN_disabled
#define  _PWM_INITTRIGEN_STR "disabled"
#define  _PWM_CH0TRIGFeatureCondGroup_Only_if_property_present
#define  _PWM_CH0TRIGFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH0TRIG_disabled
#define  _PWM_CH0TRIG_STR "disabled"
#define  _PWM_CH1TRIGFeatureCondGroup_Only_if_property_present
#define  _PWM_CH1TRIGFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH1TRIG_disabled
#define  _PWM_CH1TRIG_STR "disabled"
#define  _PWM_CH2TRIGFeatureCondGroup_Only_if_property_present
#define  _PWM_CH2TRIGFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH2TRIG_disabled
#define  _PWM_CH2TRIG_STR "disabled"
#define  _PWM_CH3TRIGFeatureCondGroup_Only_if_property_present
#define  _PWM_CH3TRIGFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH3TRIG_disabled
#define  _PWM_CH3TRIG_STR "disabled"
#define  _PWM_CH4TRIGFeatureCondGroup_Only_if_property_present
#define  _PWM_CH4TRIGFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH4TRIG_disabled
#define  _PWM_CH4TRIG_STR "disabled"
#define  _PWM_CH5TRIGFeatureCondGroup_Only_if_property_present
#define  _PWM_CH5TRIGFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH5TRIG_disabled
#define  _PWM_CH5TRIG_STR "disabled"
#define  _PWM_FAULTM_disabled
#define  _PWM_FAULTM_STR "disabled"
#define  _PWM_FFVAL_disabled
#define  _PWM_FFVAL_STR "disabled"
#define  _PWM_FLTREN0FeatureCondGroup_Only_if_property_present
#define  _PWM_FLTREN0FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLTREN0_disabled
#define  _PWM_FLTREN0_STR "disabled"
#define  _PWM_FLT0POLFeatureCondGroup_Only_if_property_present
#define  _PWM_FLT0POLFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLT0POL_high
#define  _PWM_FLT0POL_STR "high"
#define  _PWM_FLTREN1FeatureCondGroup_Only_if_property_present
#define  _PWM_FLTREN1FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLTREN1_disabled
#define  _PWM_FLTREN1_STR "disabled"
#define  _PWM_FLT1POLFeatureCondGroup_Only_if_property_present
#define  _PWM_FLT1POLFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLT1POL_high
#define  _PWM_FLT1POL_STR "high"
#define  _PWM_FLTREN2FeatureCondGroup_Only_if_property_present
#define  _PWM_FLTREN2FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLTREN2_disabled
#define  _PWM_FLTREN2_STR "disabled"
#define  _PWM_FLT2POLFeatureCondGroup_Only_if_property_present
#define  _PWM_FLT2POLFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLT2POL_high
#define  _PWM_FLT2POL_STR "high"
#define  _PWM_FLTREN3FeatureCondGroup_Only_if_property_present
#define  _PWM_FLTREN3FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLTREN3_disabled
#define  _PWM_FLTREN3_STR "disabled"
#define  _PWM_FLT3POLFeatureCondGroup_Only_if_property_present
#define  _PWM_FLT3POLFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FLT3POL_high
#define  _PWM_FLT3POL_STR "high"
#define  _PWM_ChannelGrp0FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp0FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp0 TRUE
#define  _PWM_ChannelGrp0_Enabled
#define  _PWM_Mode0_EPWM
#define  _PWM_Mode0_STR "EPWM"
#define  _PWM_PWMPolarity0_highTrue
#define  _PWM_PWMPolarity0_STR "highTrue"
#define  _PWM_ChannelValReg0 0
#define  _PWM_FVAL0_disabled
#define  _PWM_FVAL0_STR "disabled"
#define  _PWM_CH0OC_disabled
#define  _PWM_CH0OC_STR "disabled"
#define  _PWM_ChannelPinGrp0 TRUE
#define  _PWM_ChannelPinGrp0_Enabled
#define  _PWM_PinChan0_PTC1_SPI0_PCS3_UART1_RTS_b_FTM0_CH0_LCD_P21_ADC0_SE15_TSI0_CH14
#define  _PWM_PinChan0_STR "PTC1_SPI0_PCS3_UART1_RTS_b_FTM0_CH0_LCD_P21_ADC0_SE15_TSI0_CH14"
#define  _PWM_PinChan0_BITNUM 1
#define  _PWM_PinChan0Signal_
#define  _PWM_IntChan0_INT_FTM0
#define  _PWM_IntChan0_STR "INT_FTM0"
#define  _PWM_IntChanEn0_disabled
#define  _PWM_IntChanEn0_STR "disabled"
#define  _PWM_DMAChanEn0_disabled
#define  _PWM_DMAChanEn0_STR "disabled"
#define  _PWM_ChannelGrp1FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp1FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp1 FALSE
#define  _PWM_ChannelGrp1_Disabled
#define  _PWM_ChannelGrp2FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp2FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp2 FALSE
#define  _PWM_ChannelGrp2_Disabled
#define  _PWM_ChannelGrp3FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp3FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp3 FALSE
#define  _PWM_ChannelGrp3_Disabled
#define  _PWM_ChannelGrp4FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp4FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp4 FALSE
#define  _PWM_ChannelGrp4_Disabled
#define  _PWM_ChannelGrp5FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp5FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp5 FALSE
#define  _PWM_ChannelGrp5_Disabled
#define  _PWM_ChannelGrp6FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp6FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp6 FALSE
#define  _PWM_ChannelGrp6_Disabled
#define  _PWM_ChannelGrp7FeatureCondGroup_Only_if_property_present
#define  _PWM_ChannelGrp7FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_ChannelGrp7 FALSE
#define  _PWM_ChannelGrp7_Disabled
#define  _PWM_FaultPinGrp0FeatureCondGroup_Only_if_property_present
#define  _PWM_FaultPinGrp0FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FaultPinGrp0 FALSE
#define  _PWM_FaultPinGrp0_Disabled
#define  _PWM_FaultPinGrp1FeatureCondGroup_Only_if_property_present
#define  _PWM_FaultPinGrp1FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FaultPinGrp1 FALSE
#define  _PWM_FaultPinGrp1_Disabled
#define  _PWM_FaultPinGrp2FeatureCondGroup_Only_if_property_present
#define  _PWM_FaultPinGrp2FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FaultPinGrp2 FALSE
#define  _PWM_FaultPinGrp2_Disabled
#define  _PWM_FaultPinGrp3FeatureCondGroup_Only_if_property_present
#define  _PWM_FaultPinGrp3FeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_FaultPinGrp3 FALSE
#define  _PWM_FaultPinGrp3_Disabled
#define  _PWM_ExtClkPinGrp FALSE
#define  _PWM_ExtClkPinGrp_Disabled
#define  _PWM_PhaseAPinGrpFeatureCondGroup_Only_if_property_present
#define  _PWM_PhaseAPinGrpFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_PhaseBPinGrpFeatureCondGroup_Only_if_property_present
#define  _PWM_PhaseBPinGrpFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_TRIG0 FALSE
#define  _PWM_TRIG0_Disabled
#define  _PWM_TRIG1 FALSE
#define  _PWM_TRIG1_Disabled
#define  _PWM_TRIG2 FALSE
#define  _PWM_TRIG2_Disabled
#define  _PWM_IntCommon_INT_FTM0
#define  _PWM_IntCommon_STR "INT_FTM0"
#define  _PWM_IntCommonRequestFeatureGroup_Only_if_property_present
#define  _PWM_IntCommonRequestFeatureGroup_STR "Only_if_property_present"
#define  _PWM_IntCommonRequest_disabled
#define  _PWM_IntCommonRequest_STR "disabled"
#define  _PWM_IntCommonPriorityFeatureGroup_Only_if_property_present
#define  _PWM_IntCommonPriorityFeatureGroup_STR "Only_if_property_present"
#define  _PWM_IntCommonPriority_0
#define  _PWM_IntCommonPriority_STR "0"
#define  _PWM_ISRHandleCommon_
#define  _PWM_IntChanEn_See_the_respective_Channel_settings
#define  _PWM_IntChanEn_STR "See_the_respective_Channel_settings"
#define  _PWM_IntOverflowEn_disabled
#define  _PWM_IntOverflowEn_STR "disabled"
#define  _PWM_IntFaultEn_disabled
#define  _PWM_IntFaultEn_STR "disabled"
#define  _PWM_INITCHANS_no
#define  _PWM_INITCHANS_STR "no"
#define  _PWM_LDOK_disabled
#define  _PWM_LDOK_STR "disabled"
#define  _PWM_CH0SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH0SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH0SEL_no
#define  _PWM_CH0SEL_STR "no"
#define  _PWM_CH1SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH1SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH1SEL_no
#define  _PWM_CH1SEL_STR "no"
#define  _PWM_CH2SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH2SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH2SEL_no
#define  _PWM_CH2SEL_STR "no"
#define  _PWM_CH3SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH3SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH3SEL_no
#define  _PWM_CH3SEL_STR "no"
#define  _PWM_CH4SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH4SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH4SEL_no
#define  _PWM_CH4SEL_STR "no"
#define  _PWM_CH5SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH5SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH5SEL_no
#define  _PWM_CH5SEL_STR "no"
#define  _PWM_CH6SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH6SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH6SEL_no
#define  _PWM_CH6SEL_STR "no"
#define  _PWM_CH7SELFeatureCondGroup_Only_if_property_present
#define  _PWM_CH7SELFeatureCondGroup_STR "Only_if_property_present"
#define  _PWM_CH7SEL_no
#define  _PWM_CH7SEL_STR "no"
#define  _PWM_NON_MCU_INIT_
#define  _PWM_InitEnable TRUE
#define  _PWM_InitEnable_yes
#define  _PWM_IsInitialized TRUE
#define  _PWM_IsInitialized_yes
/* BEAN PTC13 PROPERTIES CONFIGURATION */
#define  _PTC13_BeanTypeName_GPIO_LDD
#define  _PTC13_BeanTypeName_STR "GPIO_LDD"
#define  _PTC13_DeviceName_PTC13
#define  _PTC13_DeviceName_STR "PTC13"
#define  _PTC13_Port_PTC
#define  _PTC13_Port_STR "PTC"
#define  _PTC13_PortWidthProp_32_bits
#define  _PTC13_PortWidthProp_STR "32_bits"
#define  _PTC13_AllocatedPinsMaskProp_8192
#define  _PTC13_AllocatedPinsMaskProp_STR "8192"
#define  _PTC13_ReentrantMethods FALSE
#define  _PTC13_ReentrantMethods_no
#define  _PTC13_IntService TRUE
#define  _PTC13_IntService_Enabled
#define  _PTC13_PortInterrupt_INT_PORTC
#define  _PTC13_PortInterrupt_STR "INT_PORTC"
#define  _PTC13_PortInterruptPriority_8
#define  _PTC13_PortInterruptPriority_STR "8"
#define  _PTC13_BitFields_1
#define  _PTC13_BitFields_STR "1"
#define  _PTC13_BitFields_NUMITEMS 1
#define  _PTC13_FieldName0_MUTE
#define  _PTC13_FieldName0_STR "MUTE"
#define  _PTC13_FieldMaskProp0_8192
#define  _PTC13_FieldMaskProp0_STR "8192"
#define  _PTC13_FieldStartBit0 13
#define  _PTC13_AllocatedPins0_1
#define  _PTC13_AllocatedPins0_STR "1"
#define  _PTC13_AllocatedPins0_NUMITEMS 1
#define  _PTC13_Pin0_0_PTC13_UART4_CTS_b_LCD_P33
#define  _PTC13_Pin0_0_STR "PTC13_UART4_CTS_b_LCD_P33"
#define  _PTC13_Pin0_0_BITNUM 13
#define  _PTC13_PinSignal0_0_
#define  _PTC13_PinFieldIndexProp0_0_0
#define  _PTC13_PinFieldIndexProp0_0_STR "0"
#define  _PTC13_PinIndexProp0_0_13
#define  _PTC13_PinIndexProp0_0_STR "13"
#define  _PTC13_PinFieldMaskProp0_0_1
#define  _PTC13_PinFieldMaskProp0_0_STR "1"
#define  _PTC13_PinMaskProp0_0_8192
#define  _PTC13_PinMaskProp0_0_STR "8192"
#define  _PTC13_InitPinDirection0_0 FALSE
#define  _PTC13_InitPinDirection0_0_Input
#define  _PTC13_InitialInterrupt0_0_Rising
#define  _PTC13_InitialInterrupt0_0_STR "Rising"
#define  _PTC13_LockInitSupport0_0_
#define  _PTC13_Lock0_0 FALSE
#define  _PTC13_Lock0_0_no
#define  _PTC13_AutoInitializationGrp_1
#define  _PTC13_AutoInitializationGrp_STR "1"
#define  _PTC13_AutoInitialization TRUE
#define  _PTC13_AutoInitialization_yes
#define  _PTC13_OnPortEventInitState TRUE
#define  _PTC13_OnPortEventInitState_Enabled
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
#define  _PTC5_FieldName0_PLAY
#define  _PTC5_FieldName0_STR "PLAY"
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
#define  _usb_host_Class_Name0_control
#define  _usb_host_Class_Name0_STR "control"
#define  _usb_host_Class_Code0 1
#define  _usb_host_SubClass_Code0 1
#define  _usb_host_Protocol_Code0 0
#define  _usb_host_Class_Code_Mask0 255
#define  _usb_host_SubClass_Code_Mask0 255
#define  _usb_host_Protocol_Code_Mask0 0
#define  _usb_host_Class_Name1_stream
#define  _usb_host_Class_Name1_STR "stream"
#define  _usb_host_Class_Code1 1
#define  _usb_host_SubClass_Code1 2
#define  _usb_host_Protocol_Code1 0
#define  _usb_host_Class_Code_Mask1 255
#define  _usb_host_SubClass_Code_Mask1 255
#define  _usb_host_Protocol_Code_Mask1 0
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
