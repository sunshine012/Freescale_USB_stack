/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : usb_otg.c
**     Project     : ProcessorExpert
**     Processor   : MK60DN512ZVLQ10
**     Component   : USB_OTG_STACK
**     Version     : Component 01.027, Driver 01.00, CPU db: 3.00.001
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-01-16, 09:27, # CodeGen: 67
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         USB_Class_Init                   - uint_8 usb_otg_USB_Class_Init(uint_8 controller_ID, USB_CLASS_CALLBACK...
**         USB_Class_DeInit                 - uint_8 usb_otg_USB_Class_DeInit(uint_8 controller_ID);
**         USB_Class_Send_Data              - uint_8 usb_otg_USB_Class_Send_Data(uint_8 controller_ID, uint_8 ep_num,...
**         usb_class_hub_init               - void usb_otg_usb_class_hub_init(PIPE_BUNDLE_STRUCT_PTR pbs_ptr,...
**         usb_class_hub_cntrl_callback     - void usb_otg_usb_class_hub_cntrl_callback(void* pipe, void* param, uchar_ptr...
**         usb_class_hub_cntrl_common       - USB_STATUS usb_otg_usb_class_hub_cntrl_common(HUB_COMMAND_PTR com_ptr, uint_8...
**         usb_class_hub_get_descriptor     - USB_STATUS usb_otg_usb_class_hub_get_descriptor(HUB_COMMAND_PTR com_ptr,...
**         usb_class_hub_set_port_feature   - USB_STATUS usb_otg_usb_class_hub_set_port_feature(HUB_COMMAND_PTR com_ptr,...
**         usb_class_hub_clear_port_feature - USB_STATUS usb_otg_usb_class_hub_clear_port_feature(HUB_COMMAND_PTR com_ptr,...
**         usb_class_hub_get_port_status    - USB_STATUS usb_otg_usb_class_hub_get_port_status(HUB_COMMAND_PTR com_ptr,...
**         usb_host_hub_device_event        - void usb_otg_usb_host_hub_device_event(_usb_device_instance_handle...
**         _usb_khci_task                   - void usb_otg__usb_khci_task(void);
**         _usb_event_init                  - uint_16 usb_otg__usb_event_init(USB_EVENT_STRUCT_PTR event);
**         _usb_event_clear                 - uint_16 usb_otg__usb_event_clear(USB_EVENT_STRUCT_PTR event, uint_32 bitmask);
**         _usb_event_wait_ticks            - uint_16 usb_otg__usb_event_wait_ticks(USB_EVENT_STRUCT_PTR event, uint_32...
**         _usb_host_register_ch9_callback  - USB_STATUS usb_otg__usb_host_register_c...
**         _usb_host_ch9_clear_feature      - USB_STATUS usb_otg__usb_host_ch9_clear_feature(_usb_device_instance_handle...
**         _usb_host_ch9_get_configuration  - USB_STATUS usb_otg__usb_host_ch9_get_co...
**         _usb_host_ch9_get_descriptor     - USB_STATUS usb_otg__usb_host_ch9_get_descriptor(_usb_device_instance_handle...
**         _usb_host_ch9_get_interface      - USB_STATUS usb_otg__usb_host_ch9_get_interface(_usb_device_instance_handle...
**         _usb_host_ch9_get_status         - USB_STATUS usb_otg__usb_host_ch9_get_status(_usb_device_instance_handle...
**         _usb_host_ch9_synch_frame        - USB_STATUS usb_otg__usb_host_ch9_synch_frame(_usb_device_instance_handle...
**         _usb_host_ch9_set_address        - USB_STATUS usb_otg__usb_host_ch9_set_address(_usb_device_instance_handle...
**         _usb_host_ch9_set_descriptor     - USB_STATUS usb_otg__usb_host_ch9_set_descriptor(_usb_device_instance_handle...
**         _usb_host_ch9_set_interface      - USB_STATUS usb_otg__usb_host_ch9_set_interface(_usb_device_instance_handle...
**         _usb_hostdev_cntrl_request       - USB_STATUS usb_otg__usb_hostdev_cntrl_request(_usb_device_instance_handle...
**         _usb_host_close_pipe             - USB_STATUS usb_otg__usb_host_close_pipe(_usb_host_handle hci_handle,...
**         _usb_host_close_all_pipes        - void usb_otg__usb_host_close_all_pipes(_usb_host_handle hci_handle);
**         _usb_host_cancel_transfer        - USB_STATUS usb_otg__usb_host_cancel_transfer(_usb_host_handle hci_handle,...
**         usb_hostdev_validate             - USB_STATUS usb_otg_usb_hostdev_validate(_usb_device_instance_handle...
**         _usb_hostdev_get_buffer          - USB_STATUS usb_otg__usb_hostdev_get_buffer(_usb_device_instance_handle...
**         _usb_hostdev_get_descriptor      - USB_STATUS usb_otg__usb_hostdev_get_descriptor(_usb_device_instance_handle...
**         _usb_hostdev_find_pipe_handle    - _usb_pipe_handle usb_otg__usb_hostdev_f...
**         usb_hostdev_get_pipe_handle      - _usb_pipe_handle usb_otg_usb_hostdev_get_pipe_handle(PIPE_BUNDLE_STRUCT_PTR...
**         usb_host_class_intf_init         - USB_STATUS usb_otg_usb_host_class_intf_init(PIPE_BUNDLE_STRUCT_PTR pbs_ptr,...
**         usb_host_class_intf_validate     - uint_32 usb_otg_usb_host_class_intf_validate(void* class_intf_handle);
**         _usb_host_driver_info_register   - USB_STATUS usb_otg__usb_host_driver_info_register(_usb_host_handle...
**         _usb_hostdev_select_config       - USB_STATUS usb_otg__usb_hostdev_select_config(_usb_device_instance_handle...
**         _usb_hostdev_select_interface    - USB_STATUS usb_otg__usb_hostdev_select_interface(_usb_device_instance_handle...
**         usb_dev_list_attach_device       - USB_STATUS usb_otg_usb_dev_list_attach_device(_usb_host_handle handle, uint_8...
**         usb_hostdev_tr_init              - void usb_otg_usb_hostdev_tr_init(TR_INIT_PARAM_STRUCT_PTR tr_ptr, tr_callback...
**         _usb_host_init                   - USB_STATUS usb_otg__usb_host_init(uint_8 devnum, uint_32 frame_list_size,...
**         _usb_host_register_service       - uint_32 usb_otg__usb_host_register_service(_usb_host_handle hci_handle,...
**         _usb_host_unregister_service     - uint_32 usb_otg__usb_host_unregister_service(_usb_host_handle hci_handle,...
**         _usb_host_open_pipe              - USB_STATUS usb_otg__usb_host_open_pipe(_usb_host_handle hci_handle,...
**         _usb_host_send_setup             - uint_32 usb_otg__usb_host_send_setup(_usb_host_handle hci_handle,...
**         _usb_host_get_transfer_status    - uint_32 usb_otg__usb_host_get_transfer_status(_usb_pipe_handle pipe_handle,...
**         _usb_host_recv_data              - uint_32 usb_otg__usb_host_recv_data(_usb_host_handle hci_handle,...
**         _usb_host_shutdown               - void usb_otg__usb_host_shutdown(_usb_host_handle hci_handle);
**         _usb_host_get_frame_number       - uint_32 usb_otg__usb_host_get_frame_number(_usb_host_handle hci_handle);
**         _usb_host_get_micro_frame_number - uint_32 usb_otg__usb_host_get_micro_frame_number(_usb_host_handle hci_handle);
**         _usb_host_send_data              - uint_32 usb_otg__usb_host_send_data(_usb_host_handle hci_handle,...
**         _usb_otg_sm                      - void usb_otg__usb_otg_sm(_usb_otg_handle otg_handle, uint_32 new_state);
**         _usb_otg_a_change_state          - void usb_otg__usb_otg_a_change_state(_usb_otg_handle otg_handle, uint_32...
**         _usb_otg_b_change_state          - void usb_otg__usb_otg_b_change_state(_usb_otg_handle otg_handle, uint_32...
**         _usb_otg_init                    - uint_32 usb_otg__usb_otg_init(uint_8 controller_ID, OTG_INIT_STRUCT...
**         _usb_otg_register_callback       - uint_32 usb_otg__usb_otg_register_callback(_usb_otg_handle handle,...
**         _usb_otg_session_request         - uint_32 usb_otg__usb_otg_session_request(_usb_otg_handle handle);
**         _usb_otg_bus_request             - uint_32 usb_otg__usb_otg_bus_request(_usb_otg_handle handle);
**         _usb_otg_bus_release             - uint_32 usb_otg__usb_otg_bus_release(_usb_otg_handle handle);
**         _usb_otg_hnp_enable              - uint_32 usb_otg__usb_otg_hnp_enable(uint_8 controller_ID, uint_8 enable);
**         _usb_otg_task                    - void usb_otg__usb_otg_task(void);
**         _usb_otg_ext_isr                 - void usb_otg__usb_otg_ext_isr(uint_8 controller_ID);
**         _usb_otg_set_a_bus_req           - uint_32 usb_otg__usb_otg_set_a_bus_req(_usb_otg_handle otg_handle, bool...
**         _usb_otg_set_a_bus_drop          - uint_32 usb_otg__usb_otg_set_a_bus_drop(_usb_otg_handle otg_handle, bool...
**         _usb_otg_set_a_clear_err         - uint_32 usb_otg__usb_otg_set_a_clear_err(_usb_otg_handle otg_handle);
**         _usb_otg_a_set_b_hnp_en          - uint_32 usb_otg__usb_otg_a_set_b_hnp_en(void* dev_handle, bool b_hnp_en);
**         _usb_otg_get_otg_attribute       - uint_32 usb_otg__usb_otg_get_otg_attribute(void* dev_handle, uint_8...
**         _usb_otg_set_feature_required    - uint_8 usb_otg__usb_otg_set_feature_required(void* dev_handle);
**         _usb_otg_on_interface_event      - uint_32 usb_otg__usb_otg_on_interface_event(void* dev_handle);
**         _usb_otg_on_detach_event         - uint_32 usb_otg__usb_otg_on_detach_event(void* dev_handle);
**         _usb_otg_hnp_poll_req            - uint_32 usb_otg__usb_otg_hnp_poll_req(_usb_otg_handle handle);
**         MAX3353_Init                     - void usb_otg_MAX3353_Init(void);
**         _otg_max3353_enable_disable      - void usb_otg__otg_max3353_enable_disable(bool enable);
**         _otg_max3353_get_status          - uint_8 usb_otg__otg_max3353_get_status(void);
**         _otg_max3353_get_interrupts      - uint_8 usb_otg__otg_max3353_get_interrupts(void);
**         _otg_max3353_set_pdowns          - void usb_otg__otg_max3353_set_pdowns(uint_8 bitfield);
**         _otg_max3353_set_VBUS            - void usb_otg__otg_max3353_set_VBUS(bool enable);
**         MAX3353_GetUsbInputSignal        - void usb_otg_MAX3353_GetUsbInputSignal(void);
**         MAX3353_SetUsbOutputSignal       - void usb_otg_MAX3353_SetUsbOutputSignal(LDD_TPinMask SignalMask, LDD_TPinMask...
**
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/
/* MODULE usb_otg. */
#include "usb_otg.h"
#include "usb_dci.h"
#include "Cpu.h"
#include "Events.h"
/* Host include */
#include "khci.h"
#include "mqx_tasks.h"
#include "lwevent.h"

/* MODULE usb_otg. */
#include "usb_otg.h"

/* Device include */
#include "usb_devapi.h"
#include "usb_dci.h"
/* Otg include */
#include "usb_otg_main.h"
#include "usb_otg_private.h"
/* Host Global variable */
extern LWEVENT_STRUCT khci_event;
extern USB_OTG_STRUCT* usb_otg_struct_ptr_array[USB_OTG_DEV_CNT];
extern uint_32 controler_id;
/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnDeviceReset (component USB_OTG_STACK)
**
**     Description :
**         Called after the reset signal is detected on the USB bus, 
**         OnDeviceReset() event is enabled and USB module is enabled. 
**         See SetEventMask() and GetEventMask() methods. All pending 
**         transfers are cancelled and all EPs are disabled before this 
**         event is called.  Device address is set to "0".  The event 
**         services the event of the inherited component and eventually 
**         invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnDeviceReset(LDD_TUserData *UserDataPtr)
{
}
/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnDeviceSpeedDetect (component USB_OTG_STACK)
**
**     Description :
**         Called after the device detects bus speed, OnBusSpedDetect() 
**         event is enabled and USB module is enabled. See SetEventMask() 
**         and GetEventMask() methods. EP 0 should be enabled and 
**         configured after the USB speed is known. The event services 
**         the event of the inherited component and eventually invokes 
**         other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnDeviceSpeedDetect(LDD_TUserData *UserDataPtr, LDD_USB_TBusSpeed CurrentSpeed)
{
    USB_DCI_OnDeviceSpeedDetect(UserDataPtr,CurrentSpeed);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnDeviceSuspend (component USB_OTG_STACK)
**
**     Description :
**         Called after the suspend condition is met, OnDeviceSuspend() 
**         event is enabled and USB module is enabled. See SetEventMask() 
**         and GetEventMask() methods. The event services the event of 
**         the inherited component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnDeviceSuspend(LDD_TUserData *UserDataPtr)
{
    USB_DCI_OnDeviceSuspend(UserDataPtr);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnDeviceResume (component USB_OTG_STACK)
**
**     Description :
**         Called after the resume signaling is done, OnDeviceResume() 
**         event is enabled and USB module is enabled. See SetEventMask() 
**         and GetEventMask() methods. The event services the event of 
**         the inherited component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnDeviceResume(LDD_TUserData *UserDataPtr)
{
    USB_DCI_OnDeviceResume(UserDataPtr);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnDeviceSetupPacket (component USB_OTG_STACK)
**
**     Description :
**         Called after the setup packet is received into the internal 
**         buffer, OnSetupPacket() event is enabled and USB module is 
**         enabled. See SetEventMask() and GetEventMask() methods. Use 
**         the method GetSetupPacket() to copy setup packet to the user 
**         buffer. The event services the event of the inherited 
**         component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnDeviceSetupPacket(LDD_TUserData *UserDataPtr, uint8_t EpNum)
{
    USB_DCI_OnDeviceSetupPacket(UserDataPtr,EpNum);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnDeviceError (component USB_OTG_STACK)
**
**     Description :
**         Called after the Error is detected, OnError() event is enabled 
**         and USB module is enabled. See SetEventMask() and 
**         GetEventMask() methods. The event services the event of the 
**         inherited component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnDeviceError(LDD_TUserData *UserDataPtr, uint8_t ErrorSource, uint8_t ErrorCode)
{
    USB_DCI_OnDeviceError(UserDataPtr,ErrorSource,ErrorCode);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnHostDeviceDeattach (component USB_OTG_STACK)
**
**     Description :
**         Called after the device has been successfully attached (see 
**         OnResetRecovery() event) and the deattach condition is 
**         detected,  OnDeattach() event is enabled and USB module is 
**         enabled. See SetEventMask() and GetEventMask() methods. The 
**         event services the event of the inherited component and 
**         eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnHostDeviceDeattach(LDD_TUserData *UserDataPtr)
{
    _lwevent_set(&khci_event, KHCI_EVENT_RESET);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnHostResetRecovery (component USB_OTG_STACK)
**
**     Description :
**         Called 10 ms later (reset recovery time) after the reset 
**         signaling is stopped, OnResetRecovery() event is enabled and 
**         USB module is enabled. See SetEventMask() and GetEventMask() 
**         methods. As soon as this event is invoked attached device can 
**         be accessed by the SendXX()/RecvXX() methods. The event 
**         services the event of the inherited component and eventually 
**         invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnHostResetRecovery(LDD_TUserData *UserDataPtr, LDD_USB_TBusSpeed CurrentSpeed)
{
    _lwevent_set(&khci_event, KHCI_EVENT_ATTACH);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnHostResumeRecovery (component USB_OTG_STACK)
**
**     Description :
**         Called 10 ms later (resume recovery time) after the resume 
**         signaling is stopped, OnResumeRecovery() event is enabled and 
**         USB module is enabled. See SetEventMask() and GetEventMask() 
**         methods. As soon as this event is invoked attached device can 
**         be accessed by the SendXX()/RecvXX() methods. The event 
**         services the event of the inherited component and eventually 
**         invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnHostResumeRecovery(LDD_TUserData *UserDataPtr)
{
    _lwevent_set(&khci_event, KHCI_EVENT_ATTACH);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnHostError (component USB_OTG_STACK)
**
**     Description :
**         Called after the Error is detected, OnError() event is enabled 
**         and USB module is enabled. See SetEventMask() and 
**         GetEventMask() methods. The event services the event of the 
**         inherited component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnHostError(LDD_TUserData *UserDataPtr, uint8_t ErrorSource, uint8_t ErrorCode)
{
    /* Write your code here ... */
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnOtgDevice (component USB_OTG_STACK)
**
**     Description :
**         Called to inform the user that device mode is being enabled or 
**         disabled.This event is enabled only if OTG mode is enabled. 
**         The event services the event of the inherited component and 
**         eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnOtgDevice(LDD_TUserData *UserDataPtr, bool Enabled)
{
    /* Write your code here ... */
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnOtgHost (component USB_OTG_STACK)
**
**     Description :
**         Called to inform the user that host mode is being enabled or 
**         disabled.This event is enabled only if OTG mode is enabled. 
**         The event services the event of the inherited component and 
**         eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnOtgHost(LDD_TUserData *UserDataPtr, bool Enabled)
{
    /* Write your code here ... */
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnOtgStateChange (component USB_OTG_STACK)
**
**     Description :
**         Called after signaling started by the OtgSetState() method is 
**         done, OnOtgStateChange() event is enabled and USB module is 
**         enabled. See SetEventMask() and GetEventMask() methods. Note: 
**         The new state can be some as previous state. This can be 
**         caused by the negative response from the device on the 
**         opposite side of the USB cable. E.g unsuccessful SRP request. 
**         E.g. B device performs session request and becomes A device. 
**         The event services the event of the inherited component and 
**         eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnOtgStateChange(LDD_TUserData *UserDataPtr, LDD_USB_Otg_TState NewState)
{
    USB_OTG_STRUCT *usb_otg_struct_ptr = usb_otg_struct_ptr_array[controler_id];

    /* handle only the final state in case of nesting state change*/
    _lwevent_clear(&(usb_otg_struct_ptr->otg_app_event),usb_otg_struct_ptr->otg_app_event.VALUE);
    /* set the state change event */
    _lwevent_set(&(usb_otg_struct_ptr->otg_app_event), NewState);
}

/*
** ===================================================================
**     Method      :  usb_otg_USB_LDD_OnSignalChange (component USB_OTG_STACK)
**
**     Description :
**         Called after the output signals (DP+- pull-up,DP+- pull-down, 
**         VBUS enable, VBUS charge, VBUS discharge) state have changed , 
**         OnSignalStateChange() event is enabled and USB module is 
**         enabled. See SetEventMask() and GetEventMask() methods.The 
**         state machine changed these signals. In some implementations 
**         the signals are handled internally(e.g. internal pull up/down) 
**         or are connected to the pin. This event can be used in the 
**         case of external HW providing requested functionality.Read 
**         only - This event is enabled only if at least one "output pin" 
**         property (e.g. VBUS enable  selects "XXX_signal" value and is 
**         disabled if no signal is used. The event services the event of 
**         the inherited component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void USB_LDD_OnSignalChange(LDD_TUserData *UserDataPtr, LDD_TPinMask SignalMask, LDD_TPinMask SignalValue)
{
    MAX3353_SetUsbOutputSignal(SignalMask, SignalValue);
}

/*
** ===================================================================
**     Method      :  usb_otg_OTG_MAX3353_INT_PIN_OnPortEvent (component USB_OTG_STACK)
**
**     Description :
**         Called if defined event on any pin of the port occured. 
**         OnPortEvent event and GPIO interrupt must be enabled. See 
**         SetPortEventMask() and GetPortEventMask() methods. This event 
**         is enabled if <a href="GPIO_LDDProperties.
**         html#IntService">Interrupt service/event</a> is Enabled and 
**         disabled if <a href="GPIO_LDDProperties.
**         html#IntService">Interrupt service/event</a> is Disabled. The 
**         event services the event of the inherited component and 
**         eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void OTG_MAX3353_INT_PIN_OnPortEvent(LDD_TUserData *UserDataPtr)
{
    _usb_otg_ext_isr(controler_id);
}

/*
** ===================================================================
**     Method      :  usb_otg_OTG_MAX3353_OnMasterBlockSent (component USB_OTG_STACK)
**
**     Description :
**         This event is called when I2C in master mode finishes the 
**         transmission of the data successfully. This event is not 
**         available for the SLAVE mode and if MasterSendBlock is 
**         disabled.  The event services the event of the inherited 
**         component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void OTG_MAX3353_OnMasterBlockSent(LDD_TUserData *UserDataPtr)
{
    /* Write your code here ... */
}

/*
** ===================================================================
**     Method      :  usb_otg_OTG_MAX3353_OnMasterBlockReceived (component USB_OTG_STACK)
**
**     Description :
**         This event is called when I2C is in master mode and finishes 
**         the reception of the data successfully. This event is not 
**         available for the SLAVE mode and if MasterReceiveBlock is 
**         disabled. The event services the event of the inherited 
**         component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void OTG_MAX3353_OnMasterBlockReceived(LDD_TUserData *UserDataPtr)
{
    /* Write your code here ... */
}

/*
** ===================================================================
**     Method      :  usb_otg_OTG_MAX3353_OnError (component USB_OTG_STACK)
**
**     Description :
**         This event is called when an error (e.g. Arbitration lost) 
**         occurs. The errors can be read with GetError method. The event 
**         services the event of the inherited component and eventually 
**         invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void OTG_MAX3353_OnError(LDD_TUserData *UserDataPtr)
{
    /* Write your code here ... */
}

/* END usb_otg. */
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
