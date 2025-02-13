/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : usb_otg_fs_main.c
**     Project   : ProcessorExpert
**     Processor : MK53N512LQ100
**     Component : USB_OTG_STACK
**     Version   : Driver 01.00, CPU db: 3.00.000
**     Compiler  : CodeWarrior ARM C Compiler
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IO_Map.h"
#include "usb.h"
#include "usb_devapi.h"
#include "host_dev_list.h"
#include "host_common.h"
#include "usbprv_host.h"
#include "mqx_tasks.h"
#include "lwevent.h"
#include "usb_otg_main.h"
#include "usb_otg_max3353.h"
#include "usb_otg_sm.h"
#include "host_dev_list.h"
#include "usb_otg_private.h"
#include "USB_LDD.h"
/* Constant Definitions*********************************************************/
/* defination for the otg task */
#define USB_OTG_TASK_TEMPLATE_INDEX       0
#define USB_OTG_TASK_ADDRESS              _usb_otg_task
#define USB_OTG_TASK_STACKSIZE            1200
#define USBCFG_OTG_TASK_PRIORITY          (6)
#define USB_OTG_TASK_NAME                 "OTG Task"
#define USB_OTG_TASK_ATTRIBUTES           0
#define USB_OTG_ISR_EVENT_MASK            (~(_mqx_uint)0)
#define USB_OTG_MAX3353_ISR_EVENT                  (2)
/* Global variables         *********************************************************/
LDD_TDeviceData  *USB_Device_DevDataPtr;
LDD_TDeviceData  *USB_Host_DataPtr;
LDD_TDeviceData  *USB_LDD_DevDataPtr;
LDD_TDeviceData  *HostVbusDrvDevDataPtr;
LDD_TDeviceData  *HostOcDevDataPtr;
USB_OTG_STRUCT*  usb_otg_struct_ptr_array[USB_OTG_DEV_CNT];
uint_32          controler_id;

/* buffer for OTG struct */
uint_8                         g_usb_otg_struct_buff[sizeof(USB_OTG_STRUCT)];
/* buffer for OTG task */
uint_8                         g_otg_stack[USB_OTG_TASK_STACKSIZE];

/* Internal method prototypes */
/*
** ===================================================================
**     Method      :  _usb_otg_task_create (component USB_OTG_STACK)
**     Description :
**         Create OTG task
**     Parameters  :
**         NAME            - DESCRIPTION
**         otg_handle      - Pointer to
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
static USB_STATUS _usb_otg_task_create(_usb_otg_handle otg_handle) {
    _task_id task_id;
    TASK_TEMPLATE_STRUCT task_template;
    USB_OTG_STRUCT* usb_otg_struct_ptr;
    usb_otg_struct_ptr = (USB_OTG_STRUCT*)otg_handle;

    /* create task for processing interrupt deferred work */
    task_template.TASK_TEMPLATE_INDEX = USB_OTG_TASK_TEMPLATE_INDEX;
    task_template.TASK_ADDRESS = USB_OTG_TASK_ADDRESS;
    task_template.TASK_STACKSIZE = USB_OTG_TASK_STACKSIZE;
    task_template.TASK_PRIORITY = USBCFG_OTG_TASK_PRIORITY;
    task_template.TASK_NAME = USB_OTG_TASK_NAME;
    task_template.TASK_ATTRIBUTES = USB_OTG_TASK_ATTRIBUTES;
    /* USB_KHCI_TASK_CREATION_PARAMETER */
    task_template.CREATION_PARAMETER = (uint_32)otg_handle;
    task_id = _task_create_at(0, 0, (uint_32)&task_template, g_otg_stack, USB_OTG_TASK_STACKSIZE);
    usb_otg_struct_ptr->otg_task_id = task_id;

    if (task_id == 0) {
        return USBERR_UNKNOWN_ERROR;
    }

    _task_ready(_task_get_td(task_id));

    return USB_OK;
}
/*
** ===================================================================
**     Method      :  _usb_otg_init (component USB_OTG_STACK)
**     Description :
**         Initializes OTG stack and OTG hardware
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - 
**       * init_struct     - Pointer to 
**       * otg_handle      - Pointer to 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_init(uint_8 controller_ID, OTG_INIT_STRUCT *init_struct, _usb_otg_handle *otg_handle)
{

    USB_OTG_STRUCT *usb_otg_struct_ptr;
    controler_id = controller_ID;
    uint_8 error;
    /* Check the device number and get_pin function */
    if((controller_ID >= USB_OTG_DEV_CNT) ||
            (init_struct == NULL)
            )
    {
        return USB_INVALID_PARAMETER;
    }
    /* Check the members of the initialization structure */
    if((init_struct->ext_circuit_use == FALSE) ||   /* only the external circuit is currently supported */
            (init_struct->ext_enable_disable_func == NULL) ||
            (init_struct->ext_get_status_func == NULL)     ||
            (init_struct->ext_set_VBUS == NULL)            ||
            (init_struct->load_usb_host == NULL)           ||
            (init_struct->load_usb_device == NULL)         ||
            (init_struct->unload_usb_host == NULL)         ||
            (init_struct->unload_usb_device == NULL)
            )
    {
        return USB_INVALID_PARAMETER;
    }
    /* Check if this device controller was already initialized */
    if(usb_otg_struct_ptr_array[controller_ID] != NULL)
    {
        return USBERR_INIT_FAILED;
    }
    /* Initialize the USB OTG interface. */
    usb_otg_struct_ptr = (USB_OTG_STRUCT*)&g_usb_otg_struct_buff[0];
    if(usb_otg_struct_ptr == NULL)
    {
        return USB_OUT_OF_MEMORY;
    }
    memset(usb_otg_struct_ptr, 0, sizeof(USB_OTG_STRUCT));
    usb_otg_struct_ptr->deviceNumber = controller_ID;
    /* Save the initialization structure pointer for further usage */
    usb_otg_struct_ptr->init_struct = init_struct;
    /* Write the handle for the application */
    *otg_handle = (void*)usb_otg_struct_ptr;
    /* Save the handler in the global structure pointer array */
    usb_otg_struct_ptr_array[controller_ID] = usb_otg_struct_ptr;
    /* initialize the event used for application signaling */

    error = _lwevent_create(&(usb_otg_struct_ptr->otg_app_event),0);
    if (error != MQX_OK)
    {
        return USBERR_GET_MEMORY_FAILED;
    }
    error = _lwevent_create(&(usb_otg_struct_ptr->otg_isr_event),0);
    if (error != MQX_OK)
    {
        return USBERR_GET_MEMORY_FAILED;
    }
    /* Enable the external OTG circuit */
    usb_otg_struct_ptr->init_struct->ext_enable_disable_func(TRUE);
    /* Initialize the State machine */
    usb_otg_struct_ptr->deviceState = USB_OTG_DEVSTATE_UNDEFINED;
    usb_otg_struct_ptr->subState = USB_OTG_SM_UNDEFINED;
    USB_LDD_DevDataPtr        = USB_LDD_Init(NULL);         /* Initialize Device LLD */
    USB_LDD_OtgRegisterDevice(USB_LDD_DevDataPtr, USB_LDD_DevDataPtr);
    USB_LDD_OtgRegisterHost(USB_LDD_DevDataPtr, USB_Host_DataPtr);
    MAX3353_GetUsbInputSignal();
    USB_LDD_Enable(USB_LDD_DevDataPtr);
    error = _usb_otg_task_create(usb_otg_struct_ptr);
    if(error != MQX_OK)
    {
        _lwevent_destroy(&(usb_otg_struct_ptr->otg_app_event));
        _lwevent_destroy(&(usb_otg_struct_ptr->otg_isr_event));
        USB_LDD_Disable(USB_LDD_DevDataPtr);
        USB_LDD_Deinit(USB_LDD_DevDataPtr);
        return error;
    }
    return USB_OK;
}
/*
** ===================================================================
**     Method      :  _usb_otg_register_callback (component USB_OTG_STACK)
**     Description :
**         Registers OTG callback
**     Parameters  :
**         NAME            - DESCRIPTION
**         handle          - 
**         callback        - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_register_callback(_usb_otg_handle handle, otg_event_callback callback)
{

    USB_OTG_STRUCT *usb_otg_struct_ptr;

    if(handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }

    usb_otg_struct_ptr = (USB_OTG_STRUCT *)handle;

    /* Save the provided callback */
    usb_otg_struct_ptr->callback = callback;
    return USB_OK;
}

/*
** ===================================================================
**     Method      :  _usb_otg_session_request (component USB_OTG_STACK)
**     Description :
**         B-device requests a new session to be started by the A device
**     Parameters  :
**         NAME            - DESCRIPTION
**         handle          - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_session_request(_usb_otg_handle handle)
{
    if(handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    return USBOTGERR_INVALID_REQUEST; /* this request is unsupported */
}

/*
** ===================================================================
**     Method      :  _usb_otg_bus_request (component USB_OTG_STACK)
**     Description :
**         B-device requests to become Host
**     Parameters  :
**         NAME            - DESCRIPTION
**         handle          - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_bus_request(_usb_otg_handle handle)
{
    if(handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_SET_B_BUS_REQUEST);
}

/*
** ===================================================================
**     Method      :  _usb_otg_bus_release (component USB_OTG_STACK)
**     Description :
**         B-device hands over the bus back to the A device
**     Parameters  :
**         NAME            - DESCRIPTION
**         handle          - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_bus_release(_usb_otg_handle handle)
{
    if(handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_CLR_B_BUS_REQUEST);
}

/*
** ===================================================================
**     Method      :  _usb_otg_hnp_enable (component USB_OTG_STACK)
**     Description :
**         This function is intended to be called from the Peripheral
**         USB stack in response to SET/CLEAR Feature requests from the
**         Host for HNP_Enable 
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - 
**         enable          - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_hnp_enable(uint_8 controller_ID, uint_8 enable)
{
    USB_OTG_STRUCT *usb_otg_struct_ptr = usb_otg_struct_ptr_array[controller_ID];
    if(usb_otg_struct_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    if(enable)
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_SET_B_HNP_EN_REQUEST);
    else
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_CLR_B_HNP_EN_REQUEST);
}

/*
** ===================================================================
**     Method      :  _usb_otg_task (component USB_OTG_STACK)
**     Description :
**         OTG task
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void _usb_otg_task(uint_32 otg_handle)
{
    uint_32 i;
    /* Cycle through all the USB OTG controllers and handle the events */
    while(1)
    {
        for(i = 0; i < USB_OTG_DEV_CNT; i++)
        {
             USB_OTG_STRUCT *usb_otg_struct_ptr = usb_otg_struct_ptr_array[i];
             if(usb_otg_struct_ptr->otg_isr_event.VALUE)
             {
                /* *** Handle the events *** */
                MAX3353_GetUsbInputSignal();
                usb_otg_struct_ptr->init_struct->ext_get_interrupts_func();
                _lwevent_clear(&usb_otg_struct_ptr->otg_isr_event,usb_otg_struct_ptr->otg_isr_event.VALUE);
             }
                /* Application events */
             if(usb_otg_struct_ptr->otg_app_event.VALUE)
             {
                /* Call the state machine to handle the changes in OTG status */
                _usb_otg_sm(usb_otg_struct_ptr, usb_otg_struct_ptr->otg_app_event.VALUE);
                /* App indications */
                if(usb_otg_struct_ptr->callback)
                {
                    usb_otg_struct_ptr->callback((_usb_otg_handle)usb_otg_struct_ptr, (OTG_EVENT)usb_otg_struct_ptr->otg_app_event.VALUE);
                }
                _lwevent_clear(&(usb_otg_struct_ptr->otg_app_event), (OTG_EVENT)usb_otg_struct_ptr->otg_app_event.VALUE);
             }
        }
        _time_delay_ticks(2);
    }

}
/*
** ===================================================================
**     Method      :  _usb_otg_ext_isr (component USB_OTG_STACK)
**     Description :
**         Service interrupt for the external OTG circuit. Needs to be
**         called from the corresponding interrupt handler (KBI, IRQ,
**         etc)
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - 
**     Returns     : Nothing
** ===================================================================
*/
void _usb_otg_ext_isr(uint_8 controller_ID)
{
    USB_OTG_STRUCT *usb_otg_struct_ptr = usb_otg_struct_ptr_array[controller_ID];
    _lwevent_set(&usb_otg_struct_ptr->otg_isr_event, USB_OTG_MAX3353_ISR_EVENT);
}

/*
** ===================================================================
**     Method      :  _usb_otg_set_a_bus_req (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_req parameter. This is one of the parameters that
**         determines. A state machine behavior.If the A device is in
**         peripheral state the otg status changes to
**         USB_OTG_HOST_REQUEST_FLAG.
**     Parameters  :
**         NAME            - DESCRIPTION
**         otg_handle      - 
**         a_bus_req       - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_set_a_bus_req(_usb_otg_handle otg_handle, boolean a_bus_req)
{
    if(otg_handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    if(a_bus_req == TRUE)
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_SET_A_BUS_REQUEST);
    else
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_CLR_A_BUS_REQUEST);
}

/*
** ===================================================================
**     Method      :  _usb_otg_set_a_bus_drop (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_drop parameter. This is one of the parameters that
**         determines. A state machine behavior.
**     Parameters  :
**         NAME            - DESCRIPTION
**         otg_handle      - 
**         a_bus_drop      - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_set_a_bus_drop(_usb_otg_handle otg_handle, boolean a_bus_drop)
{
    if(otg_handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    if(a_bus_drop == TRUE)
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_SET_A_BUS_DROP);
    else
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_CLR_A_BUS_DROP);
}

/*
** ===================================================================
**     Method      :  _usb_otg_set_a_clear_err (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set the
**         a_clr_err parameter which is one way to escape from the
**         a_vbus_err state. The other two are id = FALSE and
**         a_bus_drop = TRUE.
**     Parameters  :
**         NAME            - DESCRIPTION
**         otg_handle      - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_set_a_clear_err(_usb_otg_handle otg_handle)
{
    if(otg_handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    return USBOTGERR_INVALID_REQUEST; /* the request is unsupported */
}

/*
** ===================================================================
**     Method      :  _usb_otg_a_set_b_hnp_en (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_drop parameter. This is one of the parameters that
**         determines. A state machine behavior.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dev_handle      - 
**         b_hnp_en        - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_a_set_b_hnp_en(void* dev_handle, boolean b_hnp_en)
{
    if(dev_handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    if(b_hnp_en == TRUE)
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_SET_B_HNP_EN_REQUEST);
    else
    return USB_LDD_OtgCmd(USB_LDD_DevDataPtr, LDD_USB_OTG_CMD_CLR_B_HNP_EN_REQUEST);
}

/*
** ===================================================================
**     Method      :  _usb_otg_get_otg_attribute (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_drop parameter. This is one of the parameters that
**         determines. A state machine behavior.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dev_handle      - 
**         bm_attributes   - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_get_otg_attribute(void* dev_handle, uint_8 bm_attributes)
{
    DEV_INSTANCE_PTR  dev_inst_ptr;
    USB_HOST_STATE_STRUCT_PTR host_struct_ptr;
    USB_OTG_STRUCT*   usb_otg_struct_ptr;
    uint_8            deviceNumber;
    USB_OTG_STATUS *  otg_status;

    if(dev_handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    dev_inst_ptr = (DEV_INSTANCE_PTR)dev_handle;
    host_struct_ptr = (USB_HOST_STATE_STRUCT_PTR)dev_inst_ptr->host;
    if((void*)host_struct_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }

    deviceNumber = host_struct_ptr->DEV_NUM;
    if( deviceNumber >= USB_OTG_DEV_CNT )
    {
        return USB_INVALID_PARAMETER;
    }

    usb_otg_struct_ptr = usb_otg_struct_ptr_array[deviceNumber];
    if((void*)usb_otg_struct_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    otg_status = &usb_otg_struct_ptr->otg_status;
    otg_status->srp_support = (bm_attributes & OTG_ATTR_SRP_SUPPORT)?(TRUE):(FALSE);
    otg_status->hnp_support = (bm_attributes & OTG_ATTR_HNP_SUPPORT)?(TRUE):(FALSE);
    return USB_OK;
}

/*
** ===================================================================
**     Method      :  _usb_otg_set_feature_required (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_drop parameter. This is one of the parameters that
**         determines. A state machine behavior.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dev_handle      - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_8 _usb_otg_set_feature_required(void* dev_handle)
{
    DEV_INSTANCE_PTR  dev_inst_ptr;
    USB_HOST_STATE_STRUCT_PTR host_struct_ptr;
    USB_OTG_STRUCT*   usb_otg_struct_ptr;
    uint_8            deviceNumber;
    USB_OTG_STATUS *  otg_status;
    if(dev_handle == NULL)
    {
        return FALSE;
    }
    dev_inst_ptr = (DEV_INSTANCE_PTR)dev_handle;
    host_struct_ptr = (USB_HOST_STATE_STRUCT_PTR)dev_inst_ptr->host;
    if((void*)host_struct_ptr == NULL)
    {
        return FALSE;
    }

    deviceNumber = host_struct_ptr->DEV_NUM;
    if( deviceNumber >= USB_OTG_DEV_CNT )
    {
        return FALSE;
    }

    usb_otg_struct_ptr = usb_otg_struct_ptr_array[deviceNumber];
    if((void*)usb_otg_struct_ptr == NULL)
    {
        return FALSE;
    }
    otg_status = &usb_otg_struct_ptr->otg_status;

    if(otg_status->hnp_support && (otg_status->id == FALSE))
    {
        return TRUE;
    }

    return FALSE;
}

/*
** ===================================================================
**     Method      :  _usb_otg_on_interface_event (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_drop parameter. This is one of the parameters that
**         determines. A state machine behavior.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dev_handle      - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_on_interface_event(void* dev_handle)
{
    DEV_INSTANCE_PTR  dev_inst_ptr;
    USB_HOST_STATE_STRUCT_PTR host_struct_ptr;
    USB_OTG_STRUCT*   usb_otg_struct_ptr;
    uint_8            deviceNumber;
    USB_OTG_STATUS *  otg_status;
    if(dev_handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    dev_inst_ptr = (DEV_INSTANCE_PTR)dev_handle;
    host_struct_ptr = (USB_HOST_STATE_STRUCT_PTR)dev_inst_ptr->host;
    if((void*)host_struct_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }

    deviceNumber = host_struct_ptr->DEV_NUM;
    if( deviceNumber >= USB_OTG_DEV_CNT )
    {
        return USB_INVALID_PARAMETER;
    }

    usb_otg_struct_ptr = usb_otg_struct_ptr_array[deviceNumber];
    if((void*)usb_otg_struct_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    otg_status = &usb_otg_struct_ptr->otg_status;
    usb_otg_struct_ptr->dev_inst_ptr  = dev_inst_ptr;
    otg_status->host_req_poll_timer = 0;

    return USB_OK;
}

/*
** ===================================================================
**     Method      :  _usb_otg_on_detach_event (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_drop parameter. This is one of the parameters that
**         determines. A state machine behavior.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dev_handle      - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_on_detach_event(void* dev_handle)
{
    DEV_INSTANCE_PTR  dev_inst_ptr;
    USB_HOST_STATE_STRUCT_PTR host_struct_ptr;
    USB_OTG_STRUCT*   usb_otg_struct_ptr;
    uint_8            deviceNumber;
    USB_OTG_STATUS *  otg_status;

    if(dev_handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    dev_inst_ptr = (DEV_INSTANCE_PTR)dev_handle;
    host_struct_ptr = (USB_HOST_STATE_STRUCT_PTR)dev_inst_ptr->host;
    if((void*)host_struct_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }

    deviceNumber = host_struct_ptr->DEV_NUM;
    if( deviceNumber >= USB_OTG_DEV_CNT )
    {
        return USB_INVALID_PARAMETER;
    }
    usb_otg_struct_ptr = usb_otg_struct_ptr_array[deviceNumber];
    if((void*)usb_otg_struct_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    usb_otg_struct_ptr->dev_inst_ptr = NULL;
    otg_status = &usb_otg_struct_ptr->otg_status;
    otg_status->a_conn = FALSE;
    otg_status->b_conn = 0;
    otg_status->hnp_req = 0;
    otg_status->srp_support = 0;
    otg_status->hnp_support = 0;
    otg_status->a_set_b_hnp_en = 0;
    return USB_OK;
}

/*
** ===================================================================
**     Method      :  _usb_otg_hnp_poll_req (component USB_OTG_STACK)
**     Description :
**         This function is called from the application to set/clear
**         the a_bus_drop parameter. This is one of the parameters that
**         determines. A state machine behavior.
**     Parameters  :
**         NAME            - DESCRIPTION
**         handle          - 
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_32 _usb_otg_hnp_poll_req(_usb_otg_handle handle)
{
    DEV_INSTANCE_PTR  dev_inst_ptr;
    USB_OTG_STRUCT*   usb_otg_struct_ptr;
    USB_OTG_STATUS *  otg_status;
    USB_SETUP           req;
    uint_16             dummy;
    uint_32             status ;
    if(handle == NULL)
    {
        return USB_INVALID_PARAMETER;
    }

    usb_otg_struct_ptr = (USB_OTG_STRUCT*)handle;
    dev_inst_ptr = usb_otg_struct_ptr->dev_inst_ptr ;
    if((void*)dev_inst_ptr == NULL)
    {
        return USB_INVALID_PARAMETER;
    }
    otg_status = &usb_otg_struct_ptr->otg_status;

    req.BMREQUESTTYPE = OTG_STATUS_BM_REQ_TYPE;
    req.BREQUEST = REQ_GET_STATUS;
    dummy =0;
    htou16(req.WVALUE, dummy);
    dummy = OTG_STATUS_SELECTOR;
    htou16(req.WINDEX, dummy);
    dummy = 1;
    htou16(req.WLENGTH, dummy);
    status = _usb_hostdev_cntrl_request(dev_inst_ptr, &req, &otg_status->hnp_req, NULL, NULL);
    return status ;
}

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
