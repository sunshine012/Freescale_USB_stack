/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : usb_descriptor.h
**     Project   : ProcessorExpert
**     Processor : MK40N512LQ100
**     Component : USB_DEVICE_STACK
**     Version   : Driver 01.00, CPU db: 3.00.001
**     Compiler  : CodeWarrior ARM C Compiler
**     Date/Time : 2013-01-20, 23:13, # CodeGen: 1
**     Abstract  :
**     Settings  :
**     (c) Copyright <company/user-name>, 2011
**     http      : www.<company>.com
**     mail      : info@<company>.com
** ###################################################################*/
/* Begin of code block <0>  auto generated code, DO NOT MODIFY LINES BELOW */
#ifndef _USB_DESCRIPTOR_H
#define _USB_DESCRIPTOR_H
#include "usb_class.h"
#include "usb_framework.h"
/* End code block <0>  auto generated code, DO NOT MODIFY LINES ABOVE */

/* Write your own includes here ... */

/* Begin of code block <1>  auto generated code, DO NOT MODIFY LINES BELOW */
/******************************************************************************
 * Macro's
 *****************************************************************************/
#define BCD_USB_VERSION                     (0x0200)
/* Various descriptor sizes */
#define DEVICE_DESCRIPTOR_SIZE              (18)
#define DEVICE_QUALIFIER_DESCRIPTOR_SIZE    (10)
#define CONFIG_ONLY_DESC_SIZE               (9)
#define IFACE_ONLY_DESC_SIZE                (9)
#define ENDP_ONLY_DESC_SIZE                 (7)
#define DESC_ENDPOINT_COUNT                 (2)
#define DESC_INTERFACE_COUNT                (1)
#define USER_DESC_SIZE                      (0)
#define CONFIG_DESC_SIZE                    ((CONFIG_ONLY_DESC_SIZE) + \
                                            (IFACE_ONLY_DESC_SIZE * DESC_INTERFACE_COUNT) + \
                                            (ENDP_ONLY_DESC_SIZE * DESC_ENDPOINT_COUNT) + \
                                            (USER_DESC_SIZE))
/* Max descriptors provided by the Application */
#define USB_MAX_STD_DESCRIPTORS             (8)
#define USB_MAX_CLASS_SPECIFIC_DESCRIPTORS  (2)

/* Max configuration supported by the Application */
#define USB_MAX_CONFIG_SUPPORTED            (1)

/* Max string descriptors supported by the Application */
#define USB_MAX_STRING_DESCRIPTORS          (5)

/* Max language codes supported by the USB */
#define USB_MAX_LANGUAGES_SUPPORTED         (1)

/* string descriptors sizes */
#define USB_STR_DESC_SIZE                   (2)
#define USB_STR_0_SIZE                      (2)
#define USB_STR_1_SIZE                      (56)
#define USB_STR_2_SIZE                      (46)
#define USB_STR_3_SIZE                      (32)
#define USB_STR_n_SIZE                      (32)

/* descriptors codes */
#define USB_DEVICE_DESCRIPTOR               (1)
#define USB_CONFIG_DESCRIPTOR               (2)
#define USB_STRING_DESCRIPTOR               (3)
#define USB_IFACE_DESCRIPTOR                (4)
#define USB_ENDPOINT_DESCRIPTOR             (5)
#define USB_DEVQUAL_DESCRIPTOR              (6)
#define USB_MAX_SUPPORTED_INTERFACES        (1)
/* End code block <1>  auto generated code, DO NOT MODIFY LINES ABOVE */

/* Write code here ... */

/* redefine the USER_DESC_SIZE parameter here
 * example
 * #undef USER_DESC_SIZE
 * #define USER_DESC_SIZE                   (10)
 */

/* Add your custom macro here*/
#define DEVICE_DESC_DEVICE_CLASS             (0x00)
#define DEVICE_DESC_DEVICE_SUBCLASS          (0x00)
#define DEVICE_DESC_DEVICE_PROTOCOL          (0x00)
#define DEVICE_DESC_NUM_CONFIG_SUPPOTED      (0x01)
#define CONFIG_DESC_NUM_INTERFACES_SUPPOTED  (0x01)
#define CONFIG_DESC_CURRENT_DRAWN            (0x32)

#define BCD_USB_VERSION              (0x0200)
#define REMOTE_WAKEUP_SUPPORT        (0)/*1: TRUE, 0: FALSE*/
#define REMOTE_WAKEUP_SHIFT          (5)
#define IMPLEMENT_QUEUING            (1)/*1:TRUE; 0:FALSE*/

/* Implementation Specific Macros */
#define MSD_DESC_ENDPOINT_COUNT      (2)
#define BULK_IN_ENDPOINT             (1)
#define BULK_IN_ENDP_PACKET_SIZE     (32)/* max supported is 64 for FS and 512 for HS*/
#define BULK_OUT_ENDPOINT            (2)
#define BULK_OUT_ENDP_PACKET_SIZE    (32)/* max supported is 64 and 512 for HS*/

/* mass storage specific macros */
#define MASS_STORAGE_CLASS           (0x08)
#define SCSI_TRANSPARENT_COMMAND_SET (0x06)
#define BULK_ONLY_PROTOCOL           (0x50)
#define PERIPHERAL_DEVICE_TYPE       (0x00)
/* Direct Access Block Device : Magnetic and Flash Drives*/
#define PERIPHERAL_QUALIFIER_SHIFT   (5)
#define PERIPHERAL_QUALIFIER         (0)
#define SPC_VERSION                  (4)/*SPC3 is 5; SPC2 is 4*/
#define REMOVABLE_MEDIUM_BIT         (1) 
#define REMOVABLE_MEDIUM_BIT_SHIFT   (7)
#define ADDITIONAL_LENGTH            (0x20)
/*set to 0x20H if returning 36 bytes of inquiry data*/

#define SUPPORT_DISK_LOCKING_MECHANISM  (0) /*1: TRUE; 0:FALSE*/
#define IMPLEMENTING_DISK_DRIVE         (0) /*1: TRUE; 0:FALSE*/
/* Begin of code block <2>  auto generated code, DO NOT MODIFY LINES BELOW */
/******************************************************************************
 * Types
 *****************************************************************************/
typedef const struct _USB_LANGUAGE
{
    uint_16 const language_id;      /* Language ID */
    uint_8 const ** lang_desc;      /* Language Descriptor String */
    uint_8 const * lang_desc_size;  /* Language Descriptor Size */
} USB_LANGUAGE;

typedef const struct _USB_ALL_LANGUAGES
{
    /* Pointer to Supported Language String */
    uint_8 const *languages_supported_string;
    /* Size of Supported Language String */
    uint_8 const languages_supported_size;
    /* Array of Supported Languages */
    USB_LANGUAGE usb_language[USB_MAX_SUPPORTED_INTERFACES];
}USB_ALL_LANGUAGES;

typedef const struct _USB_ENDPOINTS
{
    /* Number of non control Endpoints */
    uint_8 count;
    /* Array of Endpoints Structures */
    USB_EP_STRUCT ep[DESC_ENDPOINT_COUNT];
}USB_ENDPOINTS;
/* End code block <2>  auto generated code, DO NOT MODIFY LINES ABOVE */

/* Write code here ... */


/* Begin of code block <3>  auto generated code, DO NOT MODIFY LINES BELOW */
/******************************************************************************
* Global Functions
*****************************************************************************/
uint_8 USB_Desc_Get_Descriptor(
uint_8 controller_ID,
uint_8 type,
uint_8 str_num,
uint_16 index,
uint_8_ptr *descriptor,
USB_PACKET_SIZE *size
);
/*
** ===================================================================
**     Method      :  usb_device_USB_Desc_Get_Descriptor (component USB_DEVICE_STACK)
**
**     Description :
**         The function returns the correponding descriptor
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN]  Controller ID
**         type            - [IN]  Type of descriptor requested
**         str_num         - [IN]  String index for string
**                           descriptor
**         index           - [IN]  String descriptor language Id
**       * descriptor      - [OUT] Output descriptor
**                           pointer
**       * size            - [OUT] Size of descriptor returned
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint_8 USB_Desc_Get_Interface(uint_8 controller_ID, uint_8 interface, uint_8_ptr alt_interface);
/*
** ===================================================================
**     Method      :  usb_device_USB_Desc_Get_Interface (component USB_DEVICE_STACK)
**
**     Description :
**         The function returns the alternate interface
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN]  Controller ID
**         interface       - [IN] Interface number
**         alt_interface   - [OUT] Output alternate
**                           interface
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

boolean USB_Desc_Valid_Configation(uint_8 controller_ID, uint_16 config_val);
/*
** ===================================================================
**     Method      :  usb_device_USB_Desc_Valid_Configation (component USB_DEVICE_STACK)
**
**     Description :
**         This function checks whether the configuration is valid or
**         not
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN]  Controller ID
**         config_val      - [IN] Configuration value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

boolean USB_Desc_Valid_Interface(uint_8 controller_ID, uint_8 interface);
/*
** ===================================================================
**     Method      :  usb_device_USB_Desc_Valid_Interface (component USB_DEVICE_STACK)
**
**     Description :
**         This function checks whether the interface is valid or not
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN]  Controller ID
**         interface       - [IN] Target interface
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

boolean USB_Desc_Remote_Wakeup(uint_8 controller_ID);
/*
** ===================================================================
**     Method      :  usb_device_USB_Desc_Remote_Wakeup (component USB_DEVICE_STACK)
**
**     Description :
**         This function returns remote wakeup is supported or not
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN]  Controller ID
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void* USB_Desc_Get_Endpoints(uint_8 controller_ID);
/*
** ===================================================================
**     Method      :  usb_device_USB_Desc_Get_Endpoints (component USB_DEVICE_STACK)
**
**     Description :
**         This function returns the information about all the non
**         control endpoints implemented
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN]  Controller ID
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint_8 USB_Desc_Set_Interface(uint_8 controller_ID, uint_8 interface, uint_8 alt_interface);
/*
** ===================================================================
**     Method      :  usb_device_USB_Desc_Set_Interface (component USB_DEVICE_STACK)
**
**     Description :
**         The function sets the alternate interface
**     Parameters  :
**         NAME            - DESCRIPTION
**         controller_ID   - [IN]  Controller ID
**         interface       - [IN] Interface number
**         alt_interface   - [IN] Input alternate
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

/* End code block <3>  auto generated code, DO NOT MODIFY LINES ABOVE */

/* Write code here ... */

/* Begin of code block <4>  auto generated code, DO NOT MODIFY LINES BELOW */
#endif
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
/* End code block <4>  auto generated code, DO NOT MODIFY LINES ABOVE */
