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
#define  _MQX1__int_default_isr
#define  _MQX1__int_disable
#define  _MQX1__int_enable
#define  _MQX1__int_exception_isr
#define  _MQX1__int_get_default_isr
#define  _MQX1__int_get_exception_handler
#define  _MQX1__int_get_isr
#define  _MQX1__int_get_isr_depth
#define  _MQX1__int_get_isr_data
#define  _MQX1__int_get_kernel_isr
#define  _MQX1__int_get_previous_vector_table
#define  _MQX1__int_get_vector_table
#define  _MQX1__int_install_default_isr
#define  _MQX1__int_install_kernel_isr
#define  _MQX1__int_install_isr
#define  _MQX1__int_install_exception_isr
#define  _MQX1__int_install_unexpected_isr
#define  _MQX1__int_kernel_isr
#define  _MQX1__int_set_exception_handler
#define  _MQX1__int_set_isr_data
#define  _MQX1__int_set_vector_table
#define  _MQX1__int_unexpected_isr
#define  _MQX1__klog_create_at
#define  _MQX1__klog_get_interrupt_stack_usage
#define  _MQX1__klog_get_task_stack_usage
#define  _MQX1__klog_control
#define  _MQX1__klog_disable_logging_task
#define  _MQX1__klog_display
#define  _MQX1__klog_enable_logging_task
#define  _MQX1__klog_show_stack_usage
#define  _MQX1__lwsem_create
#define  _MQX1__lwsem_destroy
#define  _MQX1__lwsem_poll
#define  _MQX1__lwsem_post
#define  _MQX1__lwsem_test
#define  _MQX1__lwsem_wait
#define  _MQX1__lwsem_wait_ticks
#define  _MQX1__lwsem_wait_for
#define  _MQX1__lwsem_wait_until
#define  _MQX1__mem_zero
#define  _MQX1__mem_test_and_set
#define  _MQX1__mqx_exit
#define  _MQX1__mqx_fatal_error
#define  _MQX1__mqx_get_counter
#define  _MQX1__mqx_get_cpu_type
#define  _MQX1__mqx_get_initialization
#define  _MQX1__mqx_get_kernel_data
#define  _MQX1__mqx_get_exit_handler
#define  _MQX1__mqx_get_system_task_id
#define  _MQX1__mqx_get_tad_data
#define  _MQX1__mqx_idle_task
#define  _MQX1__mqx_set_cpu_type
#define  _MQX1__mqx_set_exit_handler
#define  _MQX1__sched_get_max_priority
#define  _MQX1__sched_get_min_priority
#define  _MQX1__sched_yield
#define  _MQX1__task_abort
#define  _MQX1__task_block
#define  _MQX1__task_check_stack
#define  _MQX1__task_create_at
#define  _MQX1__task_destroy
#define  _MQX1__task_disable_fp
#define  _MQX1__task_enable_fp
#define  _MQX1__task_get_creator
#define  _MQX1__task_get_environment
#define  _MQX1__task_get_exception_handler
#define  _MQX1__task_get_error
#define  _MQX1__task_get_error_ptr
#define  _MQX1__task_get_exit_handler
#define  _MQX1__task_get_id_from_name
#define  _MQX1__task_get_index_from_id
#define  _MQX1__task_get_parameter
#define  _MQX1__task_get_parameter_for
#define  _MQX1__task_get_processor
#define  _MQX1__task_get_priority
#define  _MQX1__task_get_td
#define  _MQX1__task_get_template_index
#define  _MQX1__task_ready
#define  _MQX1__task_restart
#define  _MQX1__task_set_environment
#define  _MQX1__task_set_error
#define  _MQX1__task_set_exception_handler
#define  _MQX1__task_set_exit_handler
#define  _MQX1__task_set_parameter
#define  _MQX1__task_set_parameter_for
#define  _MQX1__task_set_priority
#define  _MQX1__task_stop_preemption
#define  _MQX1__task_start_preemption
#define  _MQX1__taskq_create
#define  _MQX1__taskq_destroy
#define  _MQX1__taskq_resume
#define  _MQX1__taskq_suspend
#define  _MQX1__taskq_suspend_task
#define  _MQX1__taskq_test
#define  _MQX1__taskq_get_value
#define  _MQX1__time_delay_ticks
#define  _MQX1__time_diff_ticks
#define  _MQX1__time_get_elapsed_ticks
#define  _MQX1__time_get_hwticks
#define  _MQX1__time_get_hwticks_per_tick
#define  _MQX1__time_get_ticks
#define  _MQX1__time_get_ticks_per_sec
#define  _MQX1__time_init_ticks
#define  _MQX1__time_notify_kernel
#define  _MQX1__time_set_hwtick_function
#define  _MQX1__time_set_hwticks_per_tick
#define  _MQX1__time_set_resolution
#define  _MQX1__time_set_ticks
#define  _MQX1__time_set_ticks_per_sec
#define  _MQX1__time_set_timer_vector
#define  _MQX1__lwevent_create
#define  _MQX1__lwevent_destroy
#define  _MQX1__lwevent_set
#define  _MQX1__lwevent_set_auto_clear
#define  _MQX1__lwevent_clear
#define  _MQX1__lwevent_wait_for
#define  _MQX1__lwevent_wait_ticks
#define  _MQX1__lwevent_wait_until
#define  _MQX1__lwevent_get_signalled
#define  _MQX1__lwevent_test
#define  _MQX1__mutatr_destroy
#define  _MQX1__mutatr_get_priority_ceiling
#define  _MQX1__mutatr_get_sched_protocol
#define  _MQX1__mutatr_get_spin_limit
#define  _MQX1__mutatr_get_wait_protocol
#define  _MQX1__mutatr_set_priority_ceiling
#define  _MQX1__mutatr_set_sched_protocol
#define  _MQX1__mutatr_set_spin_limit
#define  _MQX1__mutatr_set_wait_protocol
#define  _MQX1__mutatr_init
#define  _MQX1__mutex_create_component
#define  _MQX1__mutex_destroy
#define  _MQX1__mutex_get_priority_ceiling
#define  _MQX1__mutex_get_wait_count
#define  _MQX1__mutex_init
#define  _MQX1__mutex_set_priority_ceiling
#define  _MQX1__mutex_test
#define  _MQX1__mutex_unlock
#define  _MQX1__mutex_try_lock
#define  _MQX1__lwlog_calculate_size
#define  _MQX1__lwlog_create_at
#define  _MQX1__lwlog_create_component
#define  _MQX1__lwlog_destroy
#define  _MQX1__lwlog_disable
#define  _MQX1__lwlog_enable
#define  _MQX1__lwlog_read
#define  _MQX1__lwlog_reset
#define  _MQX1__lwlog_test
#define  _MQX1__lwlog_write
#define  _MQX1__lwmsgq_init
#define  _MQX1__lwmsgq_send
#define  _MQX1__lwmsgq_receive
#define  _MQX1__lwtimer_add_timer_to_queue
#define  _MQX1__lwtimer_cancel_period
#define  _MQX1__lwtimer_cancel_timer
#define  _MQX1__lwtimer_create_periodic_queue
#define  _MQX1__lwtimer_test
#define  _MQX1__usr_lwevent_create
#define  _MQX1__usr_lwevent_destroy
#define  _MQX1__usr_lwevent_set_auto_clear
#define  _MQX1__usr_lwevent_set
#define  _MQX1__usr_lwevent_clear
#define  _MQX1__usr_lwevent_wait_for
#define  _MQX1__usr_lwevent_wait_ticks
#define  _MQX1__usr_lwevent_wait_until
#define  _MQX1__usr_lwevent_get_signalled
#define  _MQX1__usr_lwsem_create
#define  _MQX1__usr_lwsem_destroy
#define  _MQX1__usr_lwsem_poll
#define  _MQX1__usr_lwsem_post
#define  _MQX1__usr_lwsem_wait
#define  _MQX1__usr_lwsem_wait_ticks
#define  _MQX1__usr_lwsem_wait_for
#define  _MQX1__usr_lwsem_wait_until
#define  _MQX1__usr_task_create
#define  _MQX1__usr_task_destroy
#define  _MQX1__usr_task_abort
#define  _MQX1__usr_task_set_error
#define  _MQX1__usr_task_get_td
#define  _MQX1__usr_task_ready
#define  _MQX1__usr_time_delay
#define  _MQX1__usr_time_delay_ticks
#define  _MQX1__usr_time_get_elapsed_ticks
#define  _MQX1__usr_lwmsgq_init

/* BEAN EVENTS IN PROJECT */
#define  _Cpu_OnNMIINT

/* BEAN usb_host PROPERTIES CONFIGURATION */
#define  _usb_host_BeanTypeName_USB_HOST_STACK
#define  _usb_host_BeanTypeName_STR "USB_HOST_STACK"
#define  _usb_host_DeviceName_usb_host
#define  _usb_host_DeviceName_STR "usb_host"
#define  _usb_host_LDD_Component_USB_LDD
#define  _usb_host_LDD_Component_STR "USB_LDD"
#define  _usb_host_OS FALSE
#define  _usb_host_OS_MQX_Lite
#define  _usb_host_Common_Class TRUE
#define  _usb_host_Common_Class_yes
#define  _usb_host_Use_Poll TRUE
#define  _usb_host_Use_Poll_yes
#define  _usb_host_Use_Hub FALSE
#define  _usb_host_Use_Hub_no
#define  _usb_host_Class_List_1
#define  _usb_host_Class_List_STR "1"
#define  _usb_host_Class_List_NUMITEMS 1
#define  _usb_host_Class_Name0_hid_mouse
#define  _usb_host_Class_Name0_STR "hid_mouse"
#define  _usb_host_Class_Code0 3
#define  _usb_host_SubClass_Code0 2
#define  _usb_host_Protocol_Code0 1
#define  _usb_host_Class_Code_Mask0 255
#define  _usb_host_SubClass_Code_Mask0 0
#define  _usb_host_Protocol_Code_Mask0 0
/* BEAN CsIO1 PROPERTIES CONFIGURATION */
#define  _CsIO1_BeanTypeName_ConsoleIO
#define  _CsIO1_BeanTypeName_STR "ConsoleIO"
#define  _CsIO1_DeviceName_CsIO1
#define  _CsIO1_DeviceName_STR "CsIO1"
#define  _CsIO1_Serial_LDD_Link_IO1
#define  _CsIO1_Serial_LDD_Link_STR "IO1"
#define  _CsIO1_RxNewLineSequence_CR
#define  _CsIO1_RxNewLineSequence_STR "CR"
#define  _CsIO1_TxNewLineSequence_CRLF
#define  _CsIO1_TxNewLineSequence_STR "CRLF"
/* BEAN MQX1 PROPERTIES CONFIGURATION */
#define  _MQX1_BeanTypeName_MQXLite
#define  _MQX1_BeanTypeName_STR "MQXLite"
#define  _MQX1_DeviceName_MQX1
#define  _MQX1_DeviceName_STR "MQX1"
#define  _MQX1_Version_V1_0_0
#define  _MQX1_Version_STR "V1_0_0"
#define  _MQX1_CopyFilesToProject TRUE
#define  _MQX1_CopyFilesToProject_yes
#define  _MQX1_SystemTimer_SystemTimer1
#define  _MQX1_SystemTimer_STR "SystemTimer1"
#define  _MQX1_TaskTemplateList_2
#define  _MQX1_TaskTemplateList_STR "2"
#define  _MQX1_TaskTemplateList_NUMITEMS 2
#define  _MQX1_TaskGrp0 TRUE
#define  _MQX1_TaskGrp0_Enabled
#define  _MQX1_Task0_Task1
#define  _MQX1_Task0_STR "Task1"
#define  _MQX1_TaskGrp1 TRUE
#define  _MQX1_TaskGrp1_Enabled
#define  _MQX1_Task1_Task2
#define  _MQX1_Task1_STR "Task2"
#define  _MQX1_MQX_USE_SEMAPHORES TRUE
#define  _MQX1_MQX_USE_SEMAPHORES_1
#define  _MQX1_MQX_USE_LWEVENTS TRUE
#define  _MQX1_MQX_USE_LWEVENTS_1
#define  _MQX1_MQX_USE_LWMSGQ TRUE
#define  _MQX1_MQX_USE_LWMSGQ_1
#define  _MQX1_MQX_USE_MUTEXES FALSE
#define  _MQX1_MQX_USE_MUTEXES_0
#define  _MQX1_MQX_USE_LWTIMER FALSE
#define  _MQX1_MQX_USE_LWTIMER_0
#define  _MQX1_MQX_KERNEL_LOGGING FALSE
#define  _MQX1_MQX_KERNEL_LOGGING_0
#define  _MQX1_MQX_INTERRUPT_STACK_SIZE 400
#define  _MQX1_MQX_USE_IDLE_TASK TRUE
#define  _MQX1_MQX_USE_IDLE_TASK_1
#define  _MQX1_MQX_ENABLE_LOW_POWER FALSE
#define  _MQX1_MQX_ENABLE_LOW_POWER_0
#define  _MQX1_MQXUserDefinitions__string_list_
#define  _MQX1_MQXUserDefinitions_STR "_string_list_"
#define  _MQX1_ManageAllocatedInterrupts FALSE
#define  _MQX1_ManageAllocatedInterrupts_Automatically
#define  _MQX1_hasUserEnterCriticalFun FALSE
#define  _MQX1_hasUserEnterCriticalFun_no
#define  _MQX1_hasUserExitCriticalFun FALSE
#define  _MQX1_hasUserExitCriticalFun_no
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
