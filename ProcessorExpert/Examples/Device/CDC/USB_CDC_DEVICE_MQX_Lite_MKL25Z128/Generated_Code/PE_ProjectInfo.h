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
#define  _MQX1_TaskTemplateList_1
#define  _MQX1_TaskTemplateList_STR "1"
#define  _MQX1_TaskTemplateList_NUMITEMS 1
#define  _MQX1_TaskGrp0 TRUE
#define  _MQX1_TaskGrp0_Enabled
#define  _MQX1_Task0_Task1
#define  _MQX1_Task0_STR "Task1"
#define  _MQX1_MQX_USE_SEMAPHORES TRUE
#define  _MQX1_MQX_USE_SEMAPHORES_1
#define  _MQX1_MQX_USE_LWEVENTS FALSE
#define  _MQX1_MQX_USE_LWEVENTS_0
#define  _MQX1_MQX_USE_LWMSGQ FALSE
#define  _MQX1_MQX_USE_LWMSGQ_0
#define  _MQX1_MQX_USE_MUTEXES FALSE
#define  _MQX1_MQX_USE_MUTEXES_0
#define  _MQX1_MQX_USE_LWTIMER FALSE
#define  _MQX1_MQX_USE_LWTIMER_0
#define  _MQX1_MQX_KERNEL_LOGGING FALSE
#define  _MQX1_MQX_KERNEL_LOGGING_0
#define  _MQX1_MQX_INTERRUPT_STACK_SIZE 1024
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
/* BEAN usb_device PROPERTIES CONFIGURATION */
#define  _usb_device_BeanTypeName_USB_DEVICE_STACK
#define  _usb_device_BeanTypeName_STR "USB_DEVICE_STACK"
#define  _usb_device_DeviceName_usb_device
#define  _usb_device_DeviceName_STR "usb_device"
#define  _usb_device_LDD_Component_USB_LDD
#define  _usb_device_LDD_Component_STR "USB_LDD"
#define  _usb_device_OS_MQX_Lite
#define  _usb_device_OS_STR "MQX_Lite"
#define  _usb_device_bcdUSB 512
#define  _usb_device_Device_Class 2
#define  _usb_device_Device_SubClass 0
#define  _usb_device_Device_Protocol 0
#define  _usb_device_MaxPacketSize_32
#define  _usb_device_MaxPacketSize_STR "32"
#define  _usb_device_VendorID 9476
#define  _usb_device_ProductID 768
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
#define  _usb_device_NumEndpoints0 1
#define  _usb_device_InterfaceClass0 2
#define  _usb_device_InterfaceSubClass0 2
#define  _usb_device_InterfaceProtocol0 0
#define  _usb_device_Interface_des_index0 0
#define  _usb_device_Endpoints_List0_1
#define  _usb_device_Endpoints_List0_STR "1"
#define  _usb_device_Endpoints_List0_NUMITEMS 1
#define  _usb_device_EndpointNumber0_0 3
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
#define  _usb_device_EndpointMaxPacketSize_int_iso0_0 16
#define  _usb_device_Interval0_0 0
#define  _usb_device_InterfaceNumber1 1
#define  _usb_device_AlternateSetting1 0
#define  _usb_device_NumEndpoints1 2
#define  _usb_device_InterfaceClass1 10
#define  _usb_device_InterfaceSubClass1 0
#define  _usb_device_InterfaceProtocol1 0
#define  _usb_device_Interface_des_index1 0
#define  _usb_device_Endpoints_List1_2
#define  _usb_device_Endpoints_List1_STR "2"
#define  _usb_device_Endpoints_List1_NUMITEMS 2
#define  _usb_device_EndpointNumber1_0 1
#define  _usb_device_EndpointDirection1_0 FALSE
#define  _usb_device_EndpointDirection1_0_IN
#define  _usb_device_Transfer_Type1_0_BULK
#define  _usb_device_Transfer_Type1_0_STR "BULK"
#define  _usb_device_Synchronisation_Type1_0_No_Synchonisation
#define  _usb_device_Synchronisation_Type1_0_STR "No_Synchonisation"
#define  _usb_device_Usage_Type1_0_Data_Endpoint
#define  _usb_device_Usage_Type1_0_STR "Data_Endpoint"
#define  _usb_device_EndpointMaxPacketSize1_0_16
#define  _usb_device_EndpointMaxPacketSize1_0_STR "16"
#define  _usb_device_EndpointMaxPacketSize_int_iso1_0 0
#define  _usb_device_Interval1_0 0
#define  _usb_device_EndpointNumber1_1 2
#define  _usb_device_EndpointDirection1_1 TRUE
#define  _usb_device_EndpointDirection1_1_OUT
#define  _usb_device_Transfer_Type1_1_BULK
#define  _usb_device_Transfer_Type1_1_STR "BULK"
#define  _usb_device_Synchronisation_Type1_1_No_Synchonisation
#define  _usb_device_Synchronisation_Type1_1_STR "No_Synchonisation"
#define  _usb_device_Usage_Type1_1_Data_Endpoint
#define  _usb_device_Usage_Type1_1_STR "Data_Endpoint"
#define  _usb_device_EndpointMaxPacketSize1_1_16
#define  _usb_device_EndpointMaxPacketSize1_1_STR "16"
#define  _usb_device_EndpointMaxPacketSize_int_iso1_1 0
#define  _usb_device_Interval1_1 0
#define  _usb_device_LANGID 2308
#define  _usb_device_String_desc_list_2
#define  _usb_device_String_desc_list_STR "2"
#define  _usb_device_String_desc_list_NUMITEMS 2
#define  _usb_device_String0_FREESCALE_SEMICONDUCTOR_INC
#define  _usb_device_String0_STR "FREESCALE_SEMICONDUCTOR_INC"
#define  _usb_device_String1_USB_CDC_DEVICE_PEx
#define  _usb_device_String1_STR "USB_CDC_DEVICE_PEx"
#define  _usb_device_Gen_desc_en TRUE
#define  _usb_device_Gen_desc_en_yes
#define  _usb_device_OTG_en FALSE
#define  _usb_device_OTG_en_no
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
