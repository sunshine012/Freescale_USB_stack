/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : usb_msc.c
**     Project     : ProcessorExpert
**     Processor   : MK60FN1M0VLQ12
**     Component   : USB_MSD_CLASS
**     Version     : Component 01.027, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2012-11-19, 11:41, # CodeGen: 6
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         USB_Service_Bulk_In              - void usb_msc_USB_Service_Bulk_In(PTR_USB_DEV_EVENT_STRUCT event);
**         USB_Service_Bulk_Out             - void usb_msc_USB_Service_Bulk_Out(PTR_USB_DEV_EVENT_STRUCT event);
**         USB_Class_MSC_Event              - void usb_msc_USB_Class_MSC_Event(uint_8 controller_ID, uint_8 event, void* val);
**         USB_BYTE_SWAP4                   - void usb_msc_USB_BYTE_SWAP4(uint_32 a, uint_32 *b);
**         USB_memzero                      - void usb_msc_USB_memzero(void* ptr, uint_32 size);
**         USB_memcopy                      - void usb_msc_USB_memcopy(void* src, void* dst, uint_32 size);
**         USB_Class_MSC_Init               - uint_8 usb_msc_USB_Class_MSC_Init(uint_8 controller_ID, USB_CLASS_CALLBACK...
**         USB_Class_MSC_DeInit             - uint_8 usb_msc_USB_Class_MSC_DeInit(uint_8 controller_ID);
**         USB_MSC_LBA_Transfer             - uint_8 usb_msc_USB_MSC_LBA_Transfer(uint_8 controller_ID, bool direction,...
**         USB_Class_MSC_Send_Data          - uint_8 usb_msc_USB_Class_MSC_Send_Data(uint_8 controller_ID, uint_8 ep_num,...
**         USB_MSC_SCSI_Init                - uint_8 usb_msc_USB_MSC_SCSI_Init(uint_8 controller_ID, USB_CLASS_CALLBACK...
**         msc_request_sense_command        - uint_8 usb_msc_msc_request_sense_command(uint_8 controller_ID, PTR_CBW...
**         msc_inquiry_command              - uint_8 usb_msc_msc_inquiry_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**         msc_read_command                 - uint_8 usb_msc_msc_read_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**         msc_write_command                - uint_8 usb_msc_msc_write_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**         msc_test_unit_ready_command      - uint_8 usb_msc_msc_test_unit_ready_command(uint_8 controller_ID, PTR_CBW...
**         msc_verify_command               - uint_8 usb_msc_msc_verify_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**         msc_mode_sense_command           - uint_8 usb_msc_msc_mode_sense_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**         msc_mode_select_command          - uint_8 usb_msc_msc_mode_select_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**         msc_read_capacity_command        - uint_8 usb_msc_msc_read_capacity_command(uint_8 controller_ID, PTR_CBW...
**         msc_read_format_capacity_command - uint_8 usb_msc_msc_read_format_capacity_command(uint_8 controller_ID, PTR_CBW...
**         msc_format_unit_command          - uint_8 usb_msc_msc_format_unit_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**         msc_prevent_allow_medium_removal - uint_8 usb_msc_msc_prevent_allow_medium_removal(uint_8 controller_ID, PTR_CBW...
**         msc_start_stop_unit_command      - uint_8 usb_msc_msc_start_stop_unit_command(uint_8 controller_ID, PTR_CBW...
**         msc_send_diagnostic_command      - uint_8 usb_msc_msc_send_diagnostic_command(uint_8 controller_ID, PTR_CBW...
**         msc_unsupported_command          - uint_8 usb_msc_msc_unsupported_command(uint_8 controller_ID, PTR_CBW cbw_ptr,...
**
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/

/* MODULE usb_msc. */

#include "usb_msc.h"
#include "usb_descriptor.h"

MSC_GLOBAL_VARIABLE_STRUCT g_msc;
static uint_32 g_current_offset = 0;
static uint_32 g_transfer_remaining = 0;
/* Internal method prototypes */
static uint_8 process_mass_storage_command(uint_8 controller_ID, PTR_CBW cbw_ptr, uint_32 *csw_residue_ptr, uint_8 *csw_status_ptr);
static uint_8 USB_Other_Requests(uint_8 controller_ID, USB_SETUP_STRUCT *setup_packet, uint_8_ptr *data, uint_32 *size);
static uint_8 msc_thirteen_cases_check(PTR_MSC_THIRTEEN_CASE_STRUCT msc_check_event);

/*
** ===================================================================
**     Method      :  process_mass_storage_command (component USB_MSD_CLASS)
**
**     Description :
**         This function is added here to add more sub class specific 
**         commands
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static uint_8 process_mass_storage_command(uint_8 controller_ID, PTR_CBW cbw_ptr, uint_32 *csw_residue_ptr, uint_8 *csw_status_ptr)
{
    uint_8 error = USBERR_UNKNOWN_ERROR;/* initializing to error value */
    switch (cbw_ptr->command_block[0])
    {
        /* commands to be supported by all devices */
        case INQUIRY_COMMAND :                   /*opcode : 0x12*/
            error = msc_inquiry_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case READ_10_COMMAND :                   /*opcode : 0x28 */
        case READ_12_COMMAND :                   /*opcode : 0xA8 */
            error = msc_read_command(controller_ID, cbw_ptr,csw_residue_ptr,csw_status_ptr);
            break;
        case REQUEST_SENSE_COMMAND :             /*opcode : 0x03*/
            error = msc_request_sense_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
           break;
        case TEST_UNIT_READY_COMMAND :           /*opcode : 0x00 */
            error = msc_test_unit_ready_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case WRITE_10_COMMAND :                  /*opcode : 0x2A */
        case WRITE_12_COMMAND :                  /*opcode : 0xAA */
            error = msc_write_command(controller_ID, cbw_ptr,csw_residue_ptr,csw_status_ptr);
            break;
        case PREVENT_ALLOW_MEDIUM_REM_COMMAND :  /*opcode :0x1E */
            error = msc_prevent_allow_medium_removal(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case FORMAT_UNIT_COMMAND :               /*opcode : 0x04*/
            error = msc_format_unit_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case READ_CAPACITY_10_COMMAND :          /*opcode : 0x25*/
            error = msc_read_capacity_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case MODE_SENSE_10_COMMAND :             /* opcode :0x5A*/
        case MODE_SENSE_6_COMMAND :              /* opcode : 0x1A */
            error = msc_mode_sense_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case MODE_SELECT_10_COMMAND :            /*opcode : 0x55 */
        case MODE_SELECT_6_COMMAND :             /*opcode : 0x15 */
            error = msc_mode_select_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case READ_FORMAT_CAPACITIES_COMMAND :    /*opcode : 0x23 */
            error = msc_read_format_capacity_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case SEND_DIAGNOSTIC_COMMAND :           /*opcode : 0x1D*/
            error = msc_send_diagnostic_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            break;
        case VERIFY_COMMAND :                    /*opcode : 0x2F*/
            error = msc_verify_command(controller_ID, cbw_ptr,csw_residue_ptr,csw_status_ptr);
            break;
        case START_STOP_UNIT_COMMAND :           /*opcode : 0x1B*/
            error = msc_start_stop_unit_command(controller_ID, cbw_ptr,csw_residue_ptr,csw_status_ptr);
            break;
        default:                                 /* for all unsupported commands */
            error = msc_unsupported_command(controller_ID, cbw_ptr,csw_residue_ptr,
                    csw_status_ptr);
            g_msc.out_flag        = FALSE;
            g_msc.in_flag         = FALSE;
            g_msc.out_stall_flag  = FALSE;
            g_msc.in_stall_flag   = FALSE;
            break;
    }
    return error;
}

/*
** ===================================================================
**     Method      :  USB_Service_Bulk_In (component USB_MSD_CLASS)
**     Description :
**         The function is callback function of DIC Bulk In Endpoint
**     Parameters  :
**         NAME            - DESCRIPTION
**         event           -
**     Returns     : Nothing
** ===================================================================
*/
void USB_Service_Bulk_In(PTR_USB_DEV_EVENT_STRUCT event)
{
    uint_8 event_type;


    if(g_transfer_remaining >= event->len)
    {        /* decrement the global count */
        g_transfer_remaining -= event->len;
    }

    /* check if there is need to stall BULK IN ENDPOINT And
    there isn't any transfer in progress*/
    if((g_msc.in_stall_flag == TRUE)&&(!g_transfer_remaining))
    {
        uint_8 component = (uint_8)(event->ep_num |
        (uint_8)(event->direction<<COMPONENT_PREPARE_SHIFT));
        g_msc.in_stall_flag = FALSE; /* clear the flag */
        g_msc.in_flag = FALSE; /* clear send flag */
        /* now, stalling the status phase - CASE 5th of THIRTEEN CASES*/
        (void)_usb_device_set_status(&(event->controller_ID),
        (uint_8)(component|USB_STATUS_ENDPOINT),(uint_16)USB_STATUS_STALLED);
        return;
    }

    /* If its not a data phase on bulk endpoint */
    if ((!g_msc.in_flag) && (event->len == MSC_CSW_LENGTH))
    {
        USB_memcopy(event->buffer_ptr, &(g_msc.csw_struct), sizeof(CSW));
    }

    if(g_msc.in_flag) /* bulk in transaction has occurred before CSW */
    {
        if(g_msc.param_callback != NULL)
        {
            event_type = (uint_8)(g_transfer_remaining?
            USB_MSC_DEVICE_READ_REQUEST : USB_APP_SEND_COMPLETE);

            if(event_type == USB_APP_SEND_COMPLETE)
            {
                APP_DATA_STRUCT bulk_in_recv;
                bulk_in_recv.data_ptr  = event->buffer_ptr;
                bulk_in_recv.data_size = event->len;
                g_msc.param_callback(event->controller_ID, event_type,
                (void*)&bulk_in_recv);
            }
            else
            {
                LBA_APP_STRUCT lba_data;
                g_current_offset      += event->len;
                lba_data.offset        = g_current_offset;
                lba_data.size          = (g_transfer_remaining > MSC_SEND_DATA_BUFF_SIZE) ?
                MSC_SEND_DATA_BUFF_SIZE : g_transfer_remaining;
                /* whichever is smaller */
                lba_data.buff_ptr      = g_msc.msc_lba_send_buff;

                g_msc.param_callback(event->controller_ID, USB_MSC_DEVICE_READ_REQUEST,
                (void*)&lba_data);
                (void)USB_MSC_Bulk_Send_Data(event->controller_ID, lba_data.buff_ptr,
                lba_data.size);
            }
        }

        if(!g_transfer_remaining)
        {        /* marks the end of data phase */
            g_msc.in_flag = FALSE; /* clear the flag for next CBW */
            /* Send the command status information */
            (void)USB_MSC_Bulk_Send_Data(event->controller_ID,
            (uint_8_ptr)&(g_msc.csw_struct), MSC_CSW_LENGTH);
        }
    }
    else if ((event->len == MSC_CSW_LENGTH) /* CSW is 13 bytes in length */
            && (g_msc.csw_struct.signature == USB_DCSWSIGNATURE)) /*valid CSW signature*/
    {
        /* this flag will now be set on reset or after CSW being sent */
        g_msc.cbw_valid_flag = TRUE;
        /* prepare for next CBW */
        (void)USB_MSC_Bulk_Recv_Data(&(event->controller_ID),
        (uint_8_ptr)&(g_msc.cbw_struct),MSC_CBW_LENGTH);
    }
}

/*
** ===================================================================
**     Method      :  USB_Service_Bulk_Out (component USB_MSD_CLASS)
**     Description :
**         The function is callback function of DIC Bulk Out Endpoint
**     Parameters  :
**         NAME            - DESCRIPTION
**         event           -
**     Returns     : Nothing
** ===================================================================
*/
void USB_Service_Bulk_Out(PTR_USB_DEV_EVENT_STRUCT event)
{
    uint_8 event_type;
    uint_8 error;

    /* check if there is need to stall BULK OUT ENDPOINT And
    there isn't any transfer in progress*/
    if((g_msc.out_stall_flag == TRUE)&&(!g_transfer_remaining))
    {
        uint_8 component = (uint_8)(event->ep_num |
        (event->direction<<COMPONENT_PREPARE_SHIFT));
        g_msc.out_stall_flag = FALSE; /* clear the flag */
        g_msc.out_flag       = FALSE; /* clear send flag */
        /* now, stalling the status phase - CASE 5th of THIRTEEN CASES*/
        (void)_usb_device_set_status(&(event->controller_ID),
        (uint_8)(component|USB_STATUS_ENDPOINT),
        (uint_16)USB_STATUS_STALLED);
        return;
    }

    /* If its not a data phase on bulk endpoint */
    if ((!g_msc.out_flag) && (event->len == MSC_CBW_LENGTH) &&
            (event->buffer_ptr != (uint_8_ptr)&(g_msc.cbw_struct)) )
    {   /* last check condition saves memcopy overhead in case data was
        already received in correct buffer */
        USB_memcopy(event->buffer_ptr, (uint_8_ptr)&(g_msc.cbw_struct),
        sizeof(CBW));
    }

    if(g_msc.out_flag) /* bulk out transaction has occurred after CBW */
    {
        if(g_msc.param_callback != NULL)
        {
            event_type = (uint_8)(g_transfer_remaining?
            USB_MSC_DEVICE_WRITE_REQUEST : USB_APP_DATA_RECEIVED);

            if(event_type == USB_APP_DATA_RECEIVED)
            {
                APP_DATA_STRUCT bulk_out_recv;
                bulk_out_recv.data_ptr      = event->buffer_ptr;
                bulk_out_recv.data_size     = event->len;
                g_msc.param_callback(event->controller_ID, event_type,(void*)&bulk_out_recv);
            }
            else
            {
                LBA_APP_STRUCT lba_data1;
                lba_data1.buff_ptr          = g_msc.msc_lba_recv_buff;
                lba_data1.offset            = g_current_offset;
                lba_data1.size              = event->len;
                g_msc.param_callback(event->controller_ID, event_type,(void*)&lba_data1);
            }
        }

        if(g_transfer_remaining >= event->len)
        {        /* decrement the global count */
            g_transfer_remaining -= event->len;

            if((g_msc.out_stall_flag == TRUE)&&(!g_transfer_remaining))
            {
                uint_8 component = (uint_8)(event->ep_num |
                (event->direction<<COMPONENT_PREPARE_SHIFT));
                g_msc.out_stall_flag        = FALSE; /* clear the flag */
                g_msc.out_flag              = FALSE; /* clear send flag */
                /* now, stalling the status phase - CASE 5th of THIRTEEN CASES*/
                (void)_usb_device_set_status(&(event->controller_ID),
                (uint_8)(component|USB_STATUS_ENDPOINT),
                (uint_16)USB_STATUS_STALLED);
                return;
            }
        }

        if(g_transfer_remaining)
        {        /* Transfers Remaining -- Again invoke recv_data */
            LBA_APP_STRUCT lba_data0;
            g_current_offset          += event->len;
            lba_data0.size             = (g_transfer_remaining > MSC_RECV_DATA_BUFF_SIZE) ?
            MSC_RECV_DATA_BUFF_SIZE : g_transfer_remaining; /* whichever is smaller */
            lba_data0.buff_ptr         = g_msc.msc_lba_recv_buff;
            (void)USB_MSC_Bulk_Recv_Data(&(event->controller_ID),
            lba_data0.buff_ptr,lba_data0.size);
            return;

        }
        else
        {        /* marks the end of data phase */
            g_msc.out_flag = FALSE; /* clear the flag for next CBW */
            /* Send the command status information */
            (void)USB_MSC_Bulk_Send_Data(event->controller_ID,
            (uint_8_ptr)&(g_msc.csw_struct), MSC_CSW_LENGTH);
        }
    }
    else if(/* check for valid and meaningful CBW */
            /* CBW received after device had sent a CSW or after a reset */
            (g_msc.cbw_valid_flag)
            /* CBW is 31 bytes in length */
            && (event->len == MSC_CBW_LENGTH)
            /* valid CBW signature*/
            && (g_msc.cbw_struct.signature == USB_DCBWSIGNATURE)
            /* all reserved bits should be zero*/
            && (!((g_msc.cbw_struct.lun & 0xF0) || (g_msc.cbw_struct.cb_length & 0xE0)))
            /* host should send command to valid LUN */
            && (g_msc.cbw_struct.lun<g_msc.device_info.num_lun_supported)
            /* valid cbwcb length*/
            && ((g_msc.cbw_struct.cb_length >= 0x01)&&(g_msc.cbw_struct.cb_length <= 0x10))
            )
    {
        g_msc.re_stall_flag            = TRUE;
        /* A valid CBW was received */
        g_msc.csw_struct.signature     = USB_DCSWSIGNATURE;
        g_msc.csw_struct.tag           = g_msc.cbw_struct.tag;
        /*this flag will now be set on reset or after CSW being sent */
        g_msc.cbw_valid_flag           = FALSE;

        USB_BYTE_SWAP4((uint_32)g_msc.cbw_struct.data_length,(uint_32*)&(g_msc.cbw_struct.data_length));

        /* set flag if device is going to recv data in coming transaction */
        g_msc.out_flag = (boolean)(( (!(g_msc.cbw_struct.flag & USB_CBW_DIRECTION_BIT))
        && (g_msc.cbw_struct.data_length))?TRUE:FALSE);
        /* set flag if send is going to send data in coming transaction */
        g_msc.in_flag = (boolean)(( (g_msc.cbw_struct.flag & USB_CBW_DIRECTION_BIT)
        && (g_msc.cbw_struct.data_length))?TRUE:FALSE);
        /* Process the command */
        error = process_mass_storage_command(event->controller_ID, &(g_msc.cbw_struct),
        (uint_32*)&(g_msc.csw_struct.residue), &(g_msc.csw_struct.csw_status));

        if(error == USBERR_ENDPOINT_STALLED)
        {
            if(g_msc.out_flag==TRUE)
            {
                g_msc.out_stall_flag   = TRUE;
                g_msc.out_flag         = FALSE; /* so as to send status phase */
            }
            else if(g_msc.in_flag==TRUE)
            {
                g_msc.in_stall_flag    = TRUE;
            }
        }

        /* if there is no data phase on bulk endpoints*/
        if(!(g_msc.out_flag || g_msc.in_flag))
        {   /* Send the command status information */
            (void)USB_MSC_Bulk_Send_Data(event->controller_ID,
            (uint_8_ptr)&(g_msc.csw_struct), MSC_CSW_LENGTH);
        }
    }
    else /* Invalid/NMreceived */
    {
        uint_8 direction;
        uint_8 ep_num;
        /* prepare the component to be sent in lower layer with
        endpoint number and direction*/
        uint_8 component;

        direction  = USB_RECV;
        ep_num     = BULK_OUT_ENDPOINT;
        component  = (uint_8)(ep_num | (direction<<COMPONENT_PREPARE_SHIFT));

        /* in case of error Stall endpoint and update the status*/
        (void)_usb_device_set_status(&(event->controller_ID),
        (uint_8)(component|USB_STATUS_ENDPOINT),
        (uint_16)USB_STATUS_STALLED);

        direction  = USB_SEND;
        ep_num     = BULK_IN_ENDPOINT;
        component  = (uint_8)(ep_num | (direction<<COMPONENT_PREPARE_SHIFT));

        /* in case of error Stall endpoint and update the status*/
        (void)_usb_device_set_status(&(event->controller_ID),
        (uint_8)(component|USB_STATUS_ENDPOINT),
        (uint_16)USB_STATUS_STALLED);
        /* make the following CBWs invalid */
        g_msc.cbw_valid_flag = FALSE;
    }
}

/*
** ===================================================================
**     Method      :  USB_Class_MSC_Event (component USB_MSD_CLASS)
**     Description :
**         The function initializes MSC endpoints
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - To identify the
**                           controller
**         event           - pointer to event structure
**       * val             - gives the configuration value
**     Returns     : Nothing
** ===================================================================
*/
void USB_Class_MSC_Event(uint_8 controller_ID, uint_8 event, void* val)
{
    /* get the endpoints from the descriptor module */
    USB_ENDPOINTS *usb_ep_data = USB_Desc_Get_Endpoints(controller_ID);

    if(event == USB_APP_ENUM_COMPLETE)
    {
        uint_8 count;
        count = usb_ep_data->count;
        /* deinitialize all endpoints in case they were initialized */
        while(count > 0)
        {
            USB_EP_STRUCT_PTR ep_struct_ptr=
            (USB_EP_STRUCT_PTR) (&usb_ep_data->ep[count - 1]);
            (void)_usb_device_deinit_endpoint(&controller_ID,
            ep_struct_ptr->ep_num, ep_struct_ptr->direction);
            count--;
        }

        /* intialize all non control endpoints */
        while(count < usb_ep_data->count)
        {
            USB_EP_STRUCT_PTR ep_struct_ptr=
            (USB_EP_STRUCT_PTR) (&usb_ep_data->ep[count]);
            uint_8 component = (uint_8)(ep_struct_ptr->ep_num |
            (ep_struct_ptr->direction<<COMPONENT_PREPARE_SHIFT));

            (void)_usb_device_init_endpoint(&controller_ID,ep_struct_ptr->ep_num,
            (uint_16)ep_struct_ptr->size, ep_struct_ptr->direction, ep_struct_ptr->type, FALSE);

            /* register callback service for Non Control EndPoints */
            if(ep_struct_ptr->type == USB_BULK_PIPE)
            {
                if(ep_struct_ptr->direction == USB_RECV)
                {
                    (void)_usb_device_register_service(controller_ID,
                    (uint_8)(USB_SERVICE_EP0+ep_struct_ptr->ep_num),
                    USB_Service_Bulk_Out);
                }
                else
                {
                    (void)_usb_device_register_service(controller_ID,
                    (uint_8)(USB_SERVICE_EP0+ep_struct_ptr->ep_num),
                    USB_Service_Bulk_In);
                }
            }

            /* set the EndPoint Status as Idle in the device layer */
            /* (no need to specify direction for this case) */
            (void)_usb_device_set_status(&controller_ID,
            (uint_8)(USB_STATUS_ENDPOINT|component),
            (uint_16)USB_STATUS_IDLE);
            count++;
        }
        g_msc.re_stall_flag  = FALSE;
        g_msc.out_flag       = FALSE;
        g_msc.in_flag        = FALSE;
        g_msc.out_stall_flag = FALSE;
        g_msc.in_stall_flag  = FALSE;
        g_msc.cbw_valid_flag = TRUE; /*making the first CBW valid */
        g_transfer_remaining = 0;
    }
    else if(event == USB_APP_BUS_RESET)
    {
    }
    else if(event == USB_APP_EP_UNSTALLED)
    {
        uint_8 value;
        value = *((uint_8_ptr)val);

        if( (g_msc.re_stall_flag == TRUE)
                &&
                (((value & 0x0F) == BULK_IN_ENDPOINT) ||
                    ((value & 0x0F) == BULK_OUT_ENDPOINT)))
        {        /* For MASS Storage Class BULK ENDPOINTS have to be unstalled
                        only on receiving Bulk Only Reset.
                        Therefore, if Host sends clear feature to unstall these
                        endpoints, re-stall them */
            (void)_usb_device_set_status(&controller_ID,
            (uint_8)(value|USB_STATUS_ENDPOINT),
            (uint_16)USB_STATUS_STALLED);
        }
    }
    else if(event == USB_APP_EP_STALLED)
    {
        /* Code to be added here,
                    if there is some action needed at app level */
    }

    if(g_msc.msc_callback != NULL)
    {
        g_msc.msc_callback(controller_ID,event,val);
    }
}

/*
** ===================================================================
**     Method      :  USB_Other_Requests (component USB_MSD_CLASS)
**
**     Description :
**         The funtion provides flexibilty to add class and vendor 
**         specific requests
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static uint_8 USB_Other_Requests(uint_8 controller_ID, USB_SETUP_STRUCT *setup_packet, uint_8_ptr *data, uint_32 *size)
{
    uint_8 error = USBERR_INVALID_REQ_TYPE;

    *size=0;

    if((setup_packet->request_type & USB_REQUEST_CLASS_MASK) ==
            USB_REQUEST_CLASS_CLASS)
    {  /* class request so handle it here */

        error = USB_OK;

        /* call for class/subclass specific requests */
        switch(setup_packet->request)
        {
        case GET_MAX_LUN :
            if((setup_packet->index < USB_MAX_SUPPORTED_INTERFACES)&&
                    (!setup_packet->value)&&(setup_packet->length == 0x0001)&&
                    ((setup_packet->request_type & USB_DATA_DIREC_MASK) ==
                        USB_DATA_TO_HOST))
            {
                /* return the maximum number of logical units supported */
                *data = &g_msc.lun;
                *size=1;
                g_msc.re_stall_flag = TRUE;
            }
            else
            {   /* for Get Max LUN request with invalid wIndex parameter,
                            host expects stall */
                error = USBERR_INVALID_REQ_TYPE;
            }
            break;
        case BULK_ONLY_MASS_STORAGE_RESET :
            /* Steps to be taken in this command :
                1) ready the device for the next CBW from the host
                2) preserve the value of its bulk data toggle bits
                3) preserve the value of its bulk endpoint STALL conditions
                4) device shall NAK the status stage of device request until
                command is complete*/
            if((setup_packet->index < USB_MAX_SUPPORTED_INTERFACES)&&
                    (!setup_packet->value)&&(!setup_packet->length) &&
                    ((setup_packet->request_type & USB_DATA_DIREC_MASK) ==
                        USB_DATA_TO_DEVICE))
            {
                /* get the endpoints from the descriptor module */
                USB_ENDPOINTS *usb_ep_data =
                USB_Desc_Get_Endpoints(controller_ID);
                uint_8 count;
                count = 0;
                /* deinitialize and initialize bulk endpoints */
                while(count < usb_ep_data->count)
                {
                    USB_EP_STRUCT_PTR ep_struct_ptr=
                    (USB_EP_STRUCT_PTR) (&usb_ep_data->ep[count]);
                    if(ep_struct_ptr->type == USB_BULK_PIPE)
                    {
                        uint_8 component = (uint_8)(ep_struct_ptr->ep_num |
                        (ep_struct_ptr->direction<<COMPONENT_PREPARE_SHIFT));
                        (void)_usb_device_set_status(&controller_ID,(uint_8)
                        (USB_STATUS_ENDPOINT|component),
                        (uint_16)USB_STATUS_STALLED);
                        /* set EndPoint Status as Idle */
                        (void)_usb_device_set_status(&controller_ID,(uint_8)
                        (USB_STATUS_ENDPOINT|component),
                        (uint_16)USB_STATUS_IDLE);
                    }
                    count++;
                }
                g_msc.out_flag         = FALSE;
                g_msc.in_flag          = FALSE;
                g_msc.out_stall_flag   = FALSE;
                g_msc.in_stall_flag    = FALSE;
                g_msc.cbw_valid_flag   = TRUE; /*making the first CBW valid */
                g_msc.re_stall_flag    = FALSE;
                g_transfer_remaining   = 0;
            }
            else
            {   /* for Get Max LUN request with invalid wIndex parameter,
                                host expects stall */
                error = USBERR_INVALID_REQ_TYPE;
            }
            break;
            default :break;
        }
    }
    else if((setup_packet->request_type & USB_REQUEST_CLASS_MASK) ==
            USB_REQUEST_CLASS_VENDOR)
    {   /* vendor specific request  */
        if(g_msc.vendor_callback != NULL)
        {
            error = g_msc.vendor_callback(controller_ID, setup_packet,data,size);
        }
    }

    return error;
}

/*
** ===================================================================
**     Method      :  USB_BYTE_SWAP4 (component USB_MSD_CLASS)
**     Description :
**         SWAP four consecutive bytes to correct the endianness of
**         data received
**     Parameters  :
**         NAME            - DESCRIPTION
**         a               -
**       * b               - Pointer to
**     Returns     : Nothing
** ===================================================================
*/
void USB_BYTE_SWAP4(uint_32 a, uint_32 *b)
{
        *b = a;
}
/*
** ===================================================================
**     Method      :  USB_memzero (component USB_MSD_CLASS)
**     Description :
**         To clear the buffer
**     Parameters  :
**         NAME            - DESCRIPTION
**       * ptr             -
**         size            -
**     Returns     : Nothing
** ===================================================================
*/
void USB_memzero(void* ptr, uint_32 size)
{
    uint_32 index;
    for(index = 0; index < size; index++)
    {
        *((uint_8_ptr)ptr + index) = 0x00;
    }
}

/*
** ===================================================================
**     Method      :  USB_memcopy (component USB_MSD_CLASS)
**     Description :
**         To copy data from one memory location to another
**     Parameters  :
**         NAME            - DESCRIPTION
**       * src             -
**       * dst             -
**         size            -
**     Returns     : Nothing
** ===================================================================
*/
void USB_memcopy(void* src, void* dst, uint_32 size)
{
    uint_32 index;
    for(index = 0; index < size; index++)
    {
        *((uint_8_ptr)dst + index) = *((uint_8_ptr)src + index);
    }
}

/*
** ===================================================================
**     Method      :  USB_Class_MSC_Init (component USB_MSD_CLASS)
**     Description :
**         This function initializes the MSC Class layer and layers it
**         is dependent on
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - To Identify the
**                           controller
**         msc_class_callback - event
**                           callback
**         vendor_req_callback - vendor
**                           specific class request callback
**         param_callback  - application params
**                           callback
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_8 USB_Class_MSC_Init(uint_8 controller_ID, USB_CLASS_CALLBACK msc_class_callback, USB_REQ_FUNC vendor_req_callback, USB_CLASS_CALLBACK param_callback)
{
        USB_ENDPOINTS *usb_ep_data = USB_Desc_Get_Endpoints(controller_ID);
    /* Initialize the device layer*/
    uint_8 error= _usb_device_init(controller_ID, NULL, (uint_8)(usb_ep_data->count+1));
    /* +1 is for Control Endpoint */

    /* initialize the Global Variable Structure */
        USB_memzero(&g_msc, sizeof(MSC_GLOBAL_VARIABLE_STRUCT));
         /* Initialize number of Logical Units */
    if(error == USB_OK)
    {
        /* Initialize the generic class functions */
        error = USB_Class_Init(controller_ID,USB_Class_MSC_Event,
                USB_Other_Requests);
        /* Initialize the pstn subclass functions */
        error = USB_MSC_SCSI_Init(controller_ID, param_callback);


        if(error == USB_OK)
        {
           /* save the callback pointer */
           g_msc.msc_callback          = msc_class_callback;

           /* save the callback pointer */
           g_msc.vendor_callback       = vendor_req_callback;

           /* save the callback pointer */
           g_msc.param_callback        = param_callback;
        }
    }

    if(g_msc.param_callback != NULL)
    {
        g_msc.param_callback(controller_ID, USB_MSC_DEVICE_GET_INFO, &g_msc.device_info);
    }

          /* Initialize number of Logical Units */
          g_msc.lun                    = (uint_8)(g_msc.device_info.num_lun_supported-1);

    return error;
}

/*
** ===================================================================
**     Method      :  USB_Class_MSC_DeInit (component USB_MSD_CLASS)
**     Description :
**         The function de-initializes the Device and Controller layer
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - Controller ID
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_8 USB_Class_MSC_DeInit(uint_8 controller_ID)
{
    uint_8 status;

    /* free the HID class callback pointer */
    g_msc.msc_callback       = NULL;

    /* free the vendor request callback pointer */
    g_msc.vendor_callback    = NULL;

    /* free the callback to ask application for class specific params*/
    g_msc.param_callback     = NULL;

    /* Call common class deinit function */
    status                   = USB_Class_DeInit(controller_ID);

    if(status == USB_OK)
        /* Call device deinit function */
            status = _usb_device_deinit();

    return status;
}

/*
** ===================================================================
**     Method      :  USB_Class_MSC_Send_Data (component USB_MSD_CLASS)
**     Description :
**
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - To identify the
**                           controller
**         ep_num          - endpoint num
**         app_buff        - buffer to send
**         size            - length of the transfer
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_8 USB_Class_MSC_Send_Data(uint_8 controller_ID, uint_8 ep_num, uint_8_ptr app_buff, uint_32 size)
{
    uint_8 error = USB_OK;

            error = USB_Class_Send_Data(controller_ID, ep_num, app_buff,size);

    return error;
}

/*
** ===================================================================
**     Method      :  USB_MSC_LBA_Transfer (component USB_MSD_CLASS)
**     Description :
**
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - To identify the
**                           controller
**         direction       - transfer direction
**         lba_info_ptr    - buffer to send
**     Returns     :
**         ---             - Error code
** ===================================================================
*/
uint_8 USB_MSC_LBA_Transfer(uint_8 controller_ID, boolean direction, PTR_LBA_INFO_STRUCT lba_info_ptr)
{
        uint_8 error;
        LBA_APP_STRUCT lba_data;

        if((!((lba_info_ptr->starting_lba<g_msc.device_info.total_lba_device_supports)&&
            (lba_info_ptr->lba_transfer_num <= (g_msc.device_info.total_lba_device_supports -
            lba_info_ptr->starting_lba)))) || (g_msc.param_callback == NULL))
        {
                /* host trying to access region beyond MASS STORAGE SPACE
                   Or no param_callback is registered */
            return(uint_8)((direction?USBERR_TX_FAILED:USBERR_RX_FAILED));
        }

        g_transfer_remaining = lba_info_ptr->lba_transfer_num *
          g_msc.device_info.length_of_each_lba_of_device;
        g_current_offset = lba_info_ptr->starting_lba *
          g_msc.device_info.length_of_each_lba_of_device;

        lba_data.offset = g_current_offset;

        if(direction == USB_SEND)
    {
                  lba_data.size = (g_transfer_remaining > MSC_SEND_DATA_BUFF_SIZE) ?
                        MSC_SEND_DATA_BUFF_SIZE : g_transfer_remaining; /* whichever is smaller */
                lba_data.buff_ptr = g_msc.msc_lba_send_buff;

                  g_msc.param_callback(controller_ID, USB_MSC_DEVICE_READ_REQUEST,
                          (void*)&lba_data);

            error = USB_MSC_Bulk_Send_Data(controller_ID,lba_data.buff_ptr,lba_data.size);
    }
    else
    {
                  lba_data.size = (g_transfer_remaining > MSC_RECV_DATA_BUFF_SIZE) ?
                        MSC_RECV_DATA_BUFF_SIZE : g_transfer_remaining; /* whichever is smaller */
                lba_data.buff_ptr = g_msc.msc_lba_recv_buff;
            error = USB_MSC_Bulk_Recv_Data(&controller_ID,lba_data.buff_ptr,lba_data.size);
    }
    return error;
}

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
