################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(CLASSES)/hid/usb_host_hid.c" \

C_SRCS += \
$(CLASSES_ESCAPED)/hid/usb_host_hid.c \

OBJS += \
./Sources/classes/hid/usb_host_hid_c.obj \

OBJS_QUOTED += \
"./Sources/classes/hid/usb_host_hid_c.obj" \

C_DEPS += \
./Sources/classes/hid/usb_host_hid_c.d \

C_DEPS_QUOTED += \
"./Sources/classes/hid/usb_host_hid_c.d" \

OBJS_OS_FORMAT += \
./Sources/classes/hid/usb_host_hid_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/classes/hid/usb_host_hid_c.obj: $(CLASSES_ESCAPED)/hid/usb_host_hid.c
	@echo 'Building file: $<'
	@echo 'Executing target #26 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/classes/hid/usb_host_hid.args" -o "Sources/classes/hid/usb_host_hid_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/classes/hid/usb_host_hid_c.d: $(CLASSES_ESCAPED)/hid/usb_host_hid.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


