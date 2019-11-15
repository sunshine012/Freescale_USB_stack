/**HEADER********************************************************************
* 
* Copyright (c) 2010 Freescale Semiconductor;
* All Rights Reserved
*
*
*************************************************************************** 
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR 
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
* THE POSSIBILITY OF SUCH DAMAGE.
*
**************************************************************************
*
* $FileName: audio.c$
* $Version : 
* $Date    : 
*
* Comments:
*
*   This file is an example of device drivers for the Audio host class. This example
*   demonstrates the audio transfer capability of audio host class with audio devices.
*
*END************************************************************************/
/*************************************************************************
* Includes
**************************************************************************/
#include "IO_map.h"
#include "audio.h"
#include "device_driver_info.h"
#include "usb_host_audio.h"
#include "usbprv_host.h"
#include "usbevent.h"
#include "PIT0.h"
#include "poll.h"

/***************************************
**
** Global variables
****************************************/

USB_EVENT_STRUCT USB_Event;

/* Input Terminal types */
uchar_ptr it_type_string[7] =
{
    (uchar_ptr)"Input Undefined",
    (uchar_ptr)"Microphone",
    (uchar_ptr)"Desktop Microphone",
    (uchar_ptr)"Personal Microphone",
    (uchar_ptr)"Omni directional Microphone",
    (uchar_ptr)"Microphone array",
    (uchar_ptr)"Processing Microphone array",
};
/* Output Terminal types */
uchar_ptr ot_type_string[8] =
{
    (uchar_ptr)"Output Undefined",
    (uchar_ptr)"Speaker",
    (uchar_ptr)"Headphones",
    (uchar_ptr)"Head Mounted Display Audio",
    (uchar_ptr)"Desktop Speaker",
    (uchar_ptr)"Room Speaker",
    (uchar_ptr)"Communication Speaker",
    (uchar_ptr)"Low Frequency Effects Speaker",
};
volatile AUDIO_CONTROL_DEVICE_STRUCT    audio_control = { 0 };
volatile AUDIO_STREAM_DEVICE_STRUCT     audio_stream  = { 0 };
volatile unsigned long *duty;
uchar_ptr                               device_string;
uchar                                   device_direction = UNDEFINE_DEVICE;
uint_8                                  wav_buff[MAX_ISO_PACKET_SIZE];
uint_8                                  wav_recv_buff[MAX_ISO_PACKET_SIZE];
uint_8                                  wav_recv_buff_tmp[MAX_ISO_PACKET_SIZE];
uint_32                                 packet_size=8;
uint_8                                  resolution_size;
extern const uchar                      wav_data[];
extern const uint_32                    wav_size;

/*************************************************************************
* Global function prototypes
**************************************************************************/
extern void _usb_khci_task(void);

/****************************************************************************
**
** Local variables
*****************************************************************************/
static AUDIO_COMMAND audio_com;
static uint_32 audio_position = 0;

static uint_8 g_cur_mute[1] ={0x01};

boolean play = FALSE;
uint_8 sample_step;
uint_8 sample_out;
uint_8                           audio_sample = 0;
uint_8                           mute_flag = FALSE;
uint_32                          check_open = 0;
static USB_AUDIO_CONTROL_STATUS         audio_status_interrupt;

/*************************************************************************
* Local functions
**************************************************************************/
static void USB_Prepare_Data(void);
static USB_STATUS check_device_type(USB_AUDIO_CTRL_DESC_IT_PTR ,USB_AUDIO_CTRL_DESC_OT_PTR ,uchar_ptr _PTR_ ,uchar_ptr);

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : Main
* Returned Value : none
* Comments       :
*     
*
*END*--------------------------------------------------------------------*/
void Audio_init(void) 
{
   USB_STATUS           status = USB_OK;
   _usb_host_handle     host_handle;
   
   /* Initializes the current platform. Call for the _bsp_platform_init which is specific to each processor family */

    /* Init polling global variable */
   PIT0_Disable();
   POLL_init(); 
   duty = &(FTM0_C0V);
    /* Set pull-up resistor for InPut-pin: PTC13 */
   PORTC_PCR13 |= (uint32_t)0x0003;
   /* Set pull-up resistor for InPut-pin: PTC15 */
   PORTC_PCR5 |= (uint32_t)0x0003;
   USB_lock();
   status = _usb_host_init (
         HOST_CONTROLLER_NUMBER,   /* Use value in header file */
         MAX_FRAME_SIZE,            /* Frame size per USB spec  */
         &host_handle);             /* Returned pointer */
   if (status != USB_OK) 
   {
       printf("\nUSB Host Initialization failed! STATUS: 0x%x", (unsigned int) status);
       fflush(stdout);
       exit(3);
   }
   status = _usb_host_driver_info_register (
                                    host_handle,
                                    (pointer)DriverInfoTable
                                    );
    if (status != USB_OK) 
    {
        printf("\nDriver Registration failed! STATUS: 0x%x",(unsigned int) status);
        fflush(stdout);
        exit(4);
   }    
  
    USB_unlock();
 

  printf("USB Host Audio Demo\r\nWaitting for USB Audio Device to be attached...\r\n");
 
 _usb_event_init(&USB_Event);
}


/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : USB_Prepare_Data
* Returned Value : None
* Comments       :
*     Called to prepare data to send.
*
*END*--------------------------------------------------------------------*/
static void USB_Prepare_Data(void)
{
    uint_8 k;
    /* copy data to buffer */
      for(k=1; k<packet_size+1; k++, audio_position += sample_step)
      {
          wav_buff[resolution_size*k - 1]    = wav_data[audio_position];
      }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : USB_Audio_Get_Packet_Size
* Returned Value : None
* Comments       :
*     This function gets the frequency supported by the attached device.
*
*END*--------------------------------------------------------------------*/
static uint_32 USB_Audio_Get_Packet_Size
    (
        /* [IN] Point to format type descriptor */
        USB_AUDIO_STREAM_DESC_FORMAT_TYPE_PTR format_type_desc
    )
{
    uint_32 packet_size_tmp;
    /* copy data to buffer */
    packet_size_tmp = (uint_32)(format_type_desc->tSamFreq[2] << 16) |
                      (format_type_desc->tSamFreq[1] << 8)  |
                      (format_type_desc->tSamFreq[0] << 0);
                      
    return (packet_size_tmp/1000);
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : check_device_type
* Returned Value : None
* Comments       :
*    This function check whether the attached device is out-device or in-device. 
*
*END*--------------------------------------------------------------------*/
USB_STATUS check_device_type
    (
    /* [IN] Input terminal descriptor */
    USB_AUDIO_CTRL_DESC_IT_PTR         it_desc,
    
    /* [IN] Output terminal descriptor */
    USB_AUDIO_CTRL_DESC_OT_PTR         ot_desc,
    
    /* [OUT] Terminal type name */
    uchar_ptr _PTR_                   device_type,
    
    /* [OUT] device direction */
    uchar_ptr                        direction
    )
{
    uchar it_type_high, it_type_low, ot_type_high, ot_type_low;
    
    it_type_high = it_desc->wTerminalType[0];
    it_type_low  = it_desc->wTerminalType[1];
    ot_type_high = ot_desc->wTerminalType[0];
    ot_type_low  = ot_desc->wTerminalType[1];
    
    /* Input terminal associates with audio streaming */
    if (USB_TERMINAL_TYPE == it_type_low)
    {
        *direction = IN_DEVICE;
    }
    /* Input terminal type */
    else if (INPUT_TERMINAL_TYPE == it_type_low)
    {
        /* get type device name */
        *device_type = it_type_string[it_type_high];
    }
    else
    {
        return USBERR_ERROR;
    }
    
    /* Output terminal associates with audio streaming */
    if (USB_TERMINAL_TYPE == ot_type_low)
    {
        if (IN_DEVICE == (*direction))
        {
            *direction = UNDEFINE_DEVICE;
            return USBERR_ERROR;
        }
        else
        {
            *direction = OUT_DEVICE;
        }
    }
    /* Output terminal type */
    else if (OUTPUT_TERMINAL_TYPE == ot_type_low)
    {
        /* get type device name */
        *device_type = ot_type_string[it_type_high];
    }
    else
    {
        return USBERR_ERROR;
    }
    return USB_OK;
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_audio_tr_callback
* Returned Value : None
* Comments       :
*     Called when a isochronous pipe transfer is completed.
*
*END*--------------------------------------------------------------------*/
void usb_host_audio_tr_callback
    (
    /* [IN] pointer to pipe */
    _usb_pipe_handle pipe_handle,
    
    /* [IN] user-defined parameter */
    pointer user_parm,
    
    /* [IN] buffer address */
    uchar_ptr buffer,
    
    /* [IN] length of data transferred */
    uint_32 buflen,
    
    /* [IN] status, hopefully USB_OK or USB_DONE */
    uint_32 status
    )
{
    UNUSED(pipe_handle)
    UNUSED(user_parm)
    UNUSED(buffer)
    UNUSED(buflen)
    UNUSED(status)
    
    if (IN_DEVICE == device_direction)
    {
      if(audio_position > wav_size)
        {
            audio_position = 0;
        }
        USB_Prepare_Data();        
    }
    else
    {
        uint_8 k;
        for(k=0; k < packet_size; k++)
        {
            wav_recv_buff_tmp[k] = wav_recv_buff[resolution_size -1 + resolution_size*k];
        }
        _usb_event_set(&USB_Event, USB_EVENT_RECEIVED_DATA);
    }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_audio_mute_ctrl_callback
* Returned Value : None
* Comments       :
*     Called when a mute request is sent successfully.
*
*END*--------------------------------------------------------------------*/
void usb_host_audio_mute_ctrl_callback
   (
      /* [IN] pointer to pipe */
      _usb_pipe_handle  pipe_handle,

      /* [IN] user-defined parameter */
      pointer           user_parm,

      /* [IN] buffer address */
      uchar_ptr         buffer,

      /* [IN] length of data transferred */
      uint_32           buflen,

      /* [IN] status, hopefully USB_OK or USB_DONE */
      uint_32           status
   )
{ /* Body */
    
    UNUSED(pipe_handle)
    UNUSED(user_parm)
    UNUSED(buffer)
  UNUSED(buflen)
  UNUSED(status)    
    
    
    printf("Set Mute successfully\r\n");
    fflush(stdout);
    if(TRUE == play) 
        PIT0_Enable();
                
} /* Endbody */

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_audio_interrupt_callback
* Returned Value : None
* Comments       :
*     Called when a interrupt pipe transfer is completed.
*
*END*--------------------------------------------------------------------*/
void usb_host_audio_interrupt_callback
   (
      /* [IN] pointer to pipe */
      _usb_pipe_handle  pipe_handle,

      /* [IN] user-defined parameter */
      pointer           user_parm,

      /* [IN] buffer address */
      uchar_ptr         buffer,

      /* [IN] length of data transferred */
      uint_32           buflen,

      /* [IN] status, hopefully USB_OK or USB_DONE */
      uint_32           status
   )
{ /* Body */

    UNUSED(pipe_handle)
    UNUSED(user_parm)
    UNUSED(buflen)
    
    if(!status)
    {
        audio_status_interrupt.Status=buffer[0];
        audio_status_interrupt.Originator=buffer[1];
        
        printf("\r\nStatus Interrupt:");
        printf("   Status: %d",audio_status_interrupt.Status);    
        printf("   Originator: %d",audio_status_interrupt.Originator);
    }
    fflush(stdout);
    
} /* Endbody */

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_audio_control_event
* Returned Value : None
* Comments       :
*     Called when control interface has been attached, detached, etc.
*END*--------------------------------------------------------------------*/
void usb_host_audio_control_event
   (
      /* [IN] pointer to device instance */
      _usb_device_instance_handle      dev_handle,

      /* [IN] pointer to interface descriptor */
      _usb_interface_descriptor_handle intf_handle,

      /* [IN] code number for event causing callback */
      uint_32                          event_code
   )
{
   INTERFACE_DESCRIPTOR_PTR   intf_ptr =
      (INTERFACE_DESCRIPTOR_PTR)intf_handle;
    
   fflush(stdout);
   switch (event_code) {
      case USB_CONFIG_EVENT:
      /* Drop through into attach, same processing */
      case USB_ATTACH_EVENT: 
      {
         USB_AUDIO_CTRL_DESC_HEADER_PTR     header_desc = NULL;
         USB_AUDIO_CTRL_DESC_IT_PTR            it_desc     = NULL;
         USB_AUDIO_CTRL_DESC_OT_PTR          ot_desc     = NULL;
         USB_AUDIO_CTRL_DESC_FU_PTR          fu_desc     = NULL;
        
        if((audio_stream.DEV_STATE == USB_DEVICE_IDLE) || (audio_stream.DEV_STATE == USB_DEVICE_DETACHED)) {
            audio_control.DEV_HANDLE  = dev_handle;
            audio_control.INTF_HANDLE = intf_handle;
            audio_control.DEV_STATE   = USB_DEVICE_ATTACHED;
        }
        else {
            printf("Audio device already attached\r\n");
            fflush(stdout);
        }
        
         /* finds all the descriptors in the configuration */
         if (USB_OK != usb_class_audio_control_get_descriptors(dev_handle,
             intf_handle,
             &header_desc,
             &it_desc,
             &ot_desc,
             &fu_desc))
         {
             break;
         };
         
         if(USB_OK != check_device_type(it_desc, ot_desc, &device_string, &device_direction))
         {
             break;
         }
           /* initialize new interface members and select this interface */
         if (USB_OK != _usb_hostdev_select_interface(dev_handle,
            intf_handle, (pointer)&audio_control.CLASS_INTF))
         {
            break;
         }
         
         /* set all info got from descriptors to the class interface struct */
         usb_class_audio_control_set_descriptors((pointer)&audio_control.CLASS_INTF,
            header_desc, it_desc, ot_desc, fu_desc);
            
         printf("----- Audio control interface: attach event -----\r\n");
         fflush(stdout);
         printf("State = attached");
         printf("  Class = %d", intf_ptr->bInterfaceClass);
         printf("  SubClass = %d", intf_ptr->bInterfaceSubClass);
         printf("  Protocol = %d\r\n", intf_ptr->bInterfaceProtocol);
         break;

      }
      case USB_INTF_EVENT: 
      {
         USB_STATUS status;
         
         status = usb_class_audio_init_ipipe((CLASS_CALL_STRUCT_PTR)&audio_control.CLASS_INTF,
         usb_host_audio_interrupt_callback,NULL);
          
         if ((status != USB_OK) && (status != USBERR_OPEN_PIPE_FAILED))
             break;
         
         printf("----- Audio control interface: interface event -----\r\n");
         
         audio_control.DEV_STATE = USB_DEVICE_INTERFACED;

         break;
      }
         
      case USB_DETACH_EVENT:
         printf("----- Audio control interface: detach event -----\r\n");
         fflush(stdout);
         printf("State = detached");
         printf("  Class = %d", intf_ptr->bInterfaceClass);
         printf("  SubClass = %d", intf_ptr->bInterfaceSubClass);
         printf("  Protocol = %d\r\n", intf_ptr->bInterfaceProtocol);
         fflush(stdout);
         audio_control.DEV_STATE = USB_DEVICE_DETACHED;
         break;
      default:
         printf("Audio Device: unknown control event\r\n");
         fflush(stdout);
         break;
   } /* EndSwitch */
   fflush(stdout);
} /* Endbody */

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : usb_host_audio_stream_event
* Returned Value : None
* Comments       :
*     Called when stream interface has been attached, detached, etc.
*END*--------------------------------------------------------------------*/
void usb_host_audio_stream_event
   (
      /* [IN] pointer to device instance */
      _usb_device_instance_handle      dev_handle,

      /* [IN] pointer to interface descriptor */
      _usb_interface_descriptor_handle intf_handle,

      /* [IN] code number for event causing callback */
      uint_32                          event_code
   )
{ /* Body */
   INTERFACE_DESCRIPTOR_PTR   intf_ptr =
      (INTERFACE_DESCRIPTOR_PTR)intf_handle;
   
   /* Check audio stream interface alternating 0 */
   if (intf_ptr->bNumEndpoints == 0)
           return;
   
   switch (event_code) {
      case USB_CONFIG_EVENT:
      /* Drop through into attach, same processing */
      case USB_ATTACH_EVENT: 
      {
         USB_AUDIO_STREAM_DESC_SPEPIFIC_AS_IF_PTR         as_itf_desc         = NULL;
         USB_AUDIO_STREAM_DESC_FORMAT_TYPE_PTR            frm_type_desc         = NULL;
         USB_AUDIO_STREAM_DESC_SPECIFIC_ISO_ENDP_PTR      iso_endp_spec_desc     = NULL;
                
        if(audio_stream.DEV_STATE == USB_DEVICE_IDLE) {
            audio_stream.DEV_HANDLE  = dev_handle;
            audio_stream.INTF_HANDLE = intf_handle;
            audio_stream.DEV_STATE      = USB_DEVICE_ATTACHED;
        }
        else {
            printf("Audio device already attached\r\n");
            fflush(stdout);
        }

         /* finds all the descriptors in the configuration */
         if (USB_OK != usb_class_audio_stream_get_descriptors(dev_handle,
             intf_handle,
             &as_itf_desc,
             &frm_type_desc,
             &iso_endp_spec_desc))
         {
             break;
         };
             
           /* initialize new interface members and select this interface */
         if (USB_OK != _usb_hostdev_select_interface(dev_handle,
            intf_handle, (pointer)&audio_stream.CLASS_INTF))
         {
              break;
         }
         
         packet_size = USB_Audio_Get_Packet_Size(frm_type_desc);
         resolution_size = (uint_8)(frm_type_desc->bBitResolution / 8);
         
         if (OUT_DEVICE == device_direction)
         {
         PIT_LDVAL0 = 48000 / 8;

         sample_out = (uint_8)(packet_size / 8);
         
         }
         else
         {
         PIT_LDVAL0 = 48000;
            sample_step = (uint_8)(48/packet_size);
        }
             
         /* set all info got from descriptors to the class interface struct */
         usb_class_audio_stream_set_descriptors((pointer)&audio_stream.CLASS_INTF,
            as_itf_desc, frm_type_desc, iso_endp_spec_desc);
            
         printf("----- Audio stream interface: attach event -----\r\n");
         fflush(stdout);
         printf("State = attached");
         printf("  Class = %d", intf_ptr->bInterfaceClass);
         printf("  SubClass = %d", intf_ptr->bInterfaceSubClass);
         printf("  Protocol = %d\r\n", intf_ptr->bInterfaceProtocol);
         fflush(stdout);

         break;
      }   
      case USB_INTF_EVENT: 
      {
         audio_stream.DEV_STATE = USB_DEVICE_INTERFACED;
           printf("----- Audio stream interface: inteface event-----\r\n");
         printf("Audio device information:\r\n");
         printf("   - Device type    : %s\r\n", device_string);
         printf("   - Frequency      : %d KHz\r\n",(int) packet_size);
         printf("   - Bit resolution : %d bit\r\n", resolution_size * 8); 
         fflush(stdout);
          break;
      }
         
      case USB_DETACH_EVENT: 
      {
           audio_stream.DEV_STATE = USB_DEVICE_DETACHED;
         printf("----- Audio stream interface: detach event-----\r\n");
         fflush(stdout);
         audio_stream.DEV_STATE = USB_DEVICE_DETACHED;
         play = FALSE;
         PIT0_Disable();
           break;
      }

      default:
         printf("Audio device: unknown data event\r\n");
         fflush(stdout);
         break;
   } /* EndSwitch */
} /* Endbody */


/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : Mute_task
* Returned Value : None
* Comments       :
*     Execution starts here
*END*--------------------------------------------------------------------*/
uint_8 first_play = FALSE;
void Mute_button_task(void)
{
   if(first_play ==TRUE)
   {
      mute_flag=1;
   }
   if(USB_DEVICE_INTERFACED == audio_control.DEV_STATE)
    {
	   g_cur_mute[0] = (boolean)(1 - g_cur_mute[0]);           
        if(mute_flag == 1)
            {
            mute_flag = 0;
            
             if(play == TRUE)
             {
            	 PIT0_Disable();                   
             }
             if (FALSE == g_cur_mute[0])
             {
                 printf("\nSet Mute OFF\n");
             }
             else
             {
                 printf("\nSet Mute ON\n");
             }            
             /* Send set mute request */
             audio_com.CLASS_PTR = (CLASS_CALL_STRUCT_PTR)&audio_control.CLASS_INTF;
             audio_com.CALLBACK_FN = usb_host_audio_mute_ctrl_callback;
             audio_com.CALLBACK_PARAM = 0;
             usb_class_audio_set_cur_mute(&audio_com,(pointer)g_cur_mute);
         }
     }
   first_play = TRUE;
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : Play_button_task
* Returned Value : None
* Comments       :
*     Execution starts here
*END*--------------------------------------------------------------------*/
void Play_button_task()
{
      if(USB_DEVICE_INTERFACED == audio_stream.DEV_STATE)
      {
          play = (boolean)(1 - play);
          /* play */
          if (TRUE == play)
          {
              printf("Playing ...\n");
              _usb_event_set(&USB_Event, USB_EVENT_RECEIVED_DATA);
              PIT0_Enable();
          }
          /* stop */
          else
          {
              printf("Paused.\n");
              PIT0_Disable();
          }
      }
}

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : Play_task
* Returned Value : None
* Comments       :
*     Execution starts here
*END*--------------------------------------------------------------------*/
void Play_task()
{
    if (USB_DEVICE_INTERFACED == audio_stream.DEV_STATE)
    {
        /* Check device type */
        if(IN_DEVICE == device_direction)
        {
            /* For speaker */
            /* Send data */
            usb_audio_send_data((CLASS_CALL_STRUCT_PTR)&audio_control.CLASS_INTF,
            (CLASS_CALL_STRUCT_PTR)&audio_stream.CLASS_INTF, usb_host_audio_tr_callback,
            NULL, packet_size, (uchar_ptr)wav_buff);
        }
        else
        {
            /* For microphone */
            if((packet_size-1) < audio_sample)
            {
                audio_sample = 0;
                _usb_event_clear(&USB_Event, USB_EVENT_RECEIVED_DATA);
                /* Recv data */
                usb_audio_recv_data((CLASS_CALL_STRUCT_PTR)&audio_control.CLASS_INTF,
                (CLASS_CALL_STRUCT_PTR)&audio_stream.CLASS_INTF, usb_host_audio_tr_callback,
                NULL, packet_size*resolution_size, (uchar_ptr)wav_recv_buff);
            }
            else
            {
                /* Check packet is sent completely */
                if (USB_EVENT_SET == _usb_event_wait_ticks(&USB_Event, USB_EVENT_RECEIVED_DATA,0,0))
                {
                    /* update duty */
                    *duty = wav_recv_buff_tmp[audio_sample];
                }
            }
            audio_sample+= sample_out;
        }
    }
}
/* EOF */
