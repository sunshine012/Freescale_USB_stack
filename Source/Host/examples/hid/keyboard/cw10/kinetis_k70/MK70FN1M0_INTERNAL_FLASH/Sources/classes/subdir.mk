################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(CLASSES)/common/usb_classes.c" \

C_SRCS += \
$(CLASSES_ESCAPED)/common/usb_classes.c \

OBJS += \
./Sources/classes/usb_classes_c.obj \

OBJS_QUOTED += \
"./Sources/classes/usb_classes_c.obj" \

C_DEPS += \
./Sources/classes/usb_classes_c.d \

C_DEPS_QUOTED += \
"./Sources/classes/usb_classes_c.d" \

OBJS_OS_FORMAT += \
./Sources/classes/usb_classes_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/classes/usb_classes_c.obj: $(CLASSES_ESCAPED)/common/usb_classes.c
	@echo 'Building file: $<'
	@echo 'Executing target #23 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/classes/usb_classes.args" -o "Sources/classes/usb_classes_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/classes/usb_classes_c.d: $(CLASSES_ESCAPED)/common/usb_classes.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


