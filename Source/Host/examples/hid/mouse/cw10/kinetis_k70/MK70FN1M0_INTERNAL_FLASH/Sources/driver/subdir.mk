################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(SOURCE)/driver/mem_util.c" \
"$(SOURCE)/driver/usbevent.c" \
"$(SOURCE)/driver/usbmsgq.c" \
"$(SOURCE)/driver/usbsem.c" \

C_SRCS += \
$(SOURCE_ESCAPED)/driver/mem_util.c \
$(SOURCE_ESCAPED)/driver/usbevent.c \
$(SOURCE_ESCAPED)/driver/usbmsgq.c \
$(SOURCE_ESCAPED)/driver/usbsem.c \

OBJS += \
./Sources/driver/mem_util_c.obj \
./Sources/driver/usbevent_c.obj \
./Sources/driver/usbmsgq_c.obj \
./Sources/driver/usbsem_c.obj \

OBJS_QUOTED += \
"./Sources/driver/mem_util_c.obj" \
"./Sources/driver/usbevent_c.obj" \
"./Sources/driver/usbmsgq_c.obj" \
"./Sources/driver/usbsem_c.obj" \

C_DEPS += \
./Sources/driver/mem_util_c.d \
./Sources/driver/usbevent_c.d \
./Sources/driver/usbmsgq_c.d \
./Sources/driver/usbsem_c.d \

C_DEPS_QUOTED += \
"./Sources/driver/mem_util_c.d" \
"./Sources/driver/usbevent_c.d" \
"./Sources/driver/usbmsgq_c.d" \
"./Sources/driver/usbsem_c.d" \

OBJS_OS_FORMAT += \
./Sources/driver/mem_util_c.obj \
./Sources/driver/usbevent_c.obj \
./Sources/driver/usbmsgq_c.obj \
./Sources/driver/usbsem_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/driver/mem_util_c.obj: $(SOURCE_ESCAPED)/driver/mem_util.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/mem_util.args" -o "Sources/driver/mem_util_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/mem_util_c.d: $(SOURCE_ESCAPED)/driver/mem_util.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/usbevent_c.obj: $(SOURCE_ESCAPED)/driver/usbevent.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/usbevent.args" -o "Sources/driver/usbevent_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/usbevent_c.d: $(SOURCE_ESCAPED)/driver/usbevent.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/usbmsgq_c.obj: $(SOURCE_ESCAPED)/driver/usbmsgq.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/usbmsgq.args" -o "Sources/driver/usbmsgq_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/usbmsgq_c.d: $(SOURCE_ESCAPED)/driver/usbmsgq.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/usbsem_c.obj: $(SOURCE_ESCAPED)/driver/usbsem.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/usbsem.args" -o "Sources/driver/usbsem_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/usbsem_c.d: $(SOURCE_ESCAPED)/driver/usbsem.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


