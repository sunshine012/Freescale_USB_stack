################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(CLASSES)/hub/usb_host_hub.c" \
"$(CLASSES)/hub/usb_host_hub_sm.c" \

C_SRCS += \
$(CLASSES_ESCAPED)/hub/usb_host_hub.c \
$(CLASSES_ESCAPED)/hub/usb_host_hub_sm.c \

OBJS += \
./Sources/classes/hub/usb_host_hub_c.obj \
./Sources/classes/hub/usb_host_hub_sm_c.obj \

OBJS_QUOTED += \
"./Sources/classes/hub/usb_host_hub_c.obj" \
"./Sources/classes/hub/usb_host_hub_sm_c.obj" \

C_DEPS += \
./Sources/classes/hub/usb_host_hub_c.d \
./Sources/classes/hub/usb_host_hub_sm_c.d \

C_DEPS_QUOTED += \
"./Sources/classes/hub/usb_host_hub_c.d" \
"./Sources/classes/hub/usb_host_hub_sm_c.d" \

OBJS_OS_FORMAT += \
./Sources/classes/hub/usb_host_hub_c.obj \
./Sources/classes/hub/usb_host_hub_sm_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/classes/hub/usb_host_hub_c.obj: $(CLASSES_ESCAPED)/hub/usb_host_hub.c
	@echo 'Building file: $<'
	@echo 'Executing target #24 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/classes/hub/usb_host_hub.args" -o "Sources/classes/hub/usb_host_hub_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/classes/hub/usb_host_hub_c.d: $(CLASSES_ESCAPED)/hub/usb_host_hub.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/classes/hub/usb_host_hub_sm_c.obj: $(CLASSES_ESCAPED)/hub/usb_host_hub_sm.c
	@echo 'Building file: $<'
	@echo 'Executing target #25 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/classes/hub/usb_host_hub_sm.args" -o "Sources/classes/hub/usb_host_hub_sm_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/classes/hub/usb_host_hub_sm_c.d: $(CLASSES_ESCAPED)/hub/usb_host_hub_sm.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


