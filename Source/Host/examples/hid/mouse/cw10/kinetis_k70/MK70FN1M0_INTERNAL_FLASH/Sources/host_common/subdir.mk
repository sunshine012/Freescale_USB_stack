################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(HOST_COMMON)/host_ch9.c" \
"$(HOST_COMMON)/host_close.c" \
"$(HOST_COMMON)/host_cnl.c" \
"$(HOST_COMMON)/host_common.c" \
"$(HOST_COMMON)/host_dev_list.c" \
"$(HOST_COMMON)/host_driver.c" \
"$(HOST_COMMON)/host_main.c" \
"$(HOST_COMMON)/host_rcv.c" \
"$(HOST_COMMON)/host_shut.c" \
"$(HOST_COMMON)/host_snd.c" \

C_SRCS += \
$(HOST_COMMON_ESCAPED)/host_ch9.c \
$(HOST_COMMON_ESCAPED)/host_close.c \
$(HOST_COMMON_ESCAPED)/host_cnl.c \
$(HOST_COMMON_ESCAPED)/host_common.c \
$(HOST_COMMON_ESCAPED)/host_dev_list.c \
$(HOST_COMMON_ESCAPED)/host_driver.c \
$(HOST_COMMON_ESCAPED)/host_main.c \
$(HOST_COMMON_ESCAPED)/host_rcv.c \
$(HOST_COMMON_ESCAPED)/host_shut.c \
$(HOST_COMMON_ESCAPED)/host_snd.c \

OBJS += \
./Sources/host_common/host_ch9_c.obj \
./Sources/host_common/host_close_c.obj \
./Sources/host_common/host_cnl_c.obj \
./Sources/host_common/host_common_c.obj \
./Sources/host_common/host_dev_list_c.obj \
./Sources/host_common/host_driver_c.obj \
./Sources/host_common/host_main_c.obj \
./Sources/host_common/host_rcv_c.obj \
./Sources/host_common/host_shut_c.obj \
./Sources/host_common/host_snd_c.obj \

OBJS_QUOTED += \
"./Sources/host_common/host_ch9_c.obj" \
"./Sources/host_common/host_close_c.obj" \
"./Sources/host_common/host_cnl_c.obj" \
"./Sources/host_common/host_common_c.obj" \
"./Sources/host_common/host_dev_list_c.obj" \
"./Sources/host_common/host_driver_c.obj" \
"./Sources/host_common/host_main_c.obj" \
"./Sources/host_common/host_rcv_c.obj" \
"./Sources/host_common/host_shut_c.obj" \
"./Sources/host_common/host_snd_c.obj" \

C_DEPS += \
./Sources/host_common/host_ch9_c.d \
./Sources/host_common/host_close_c.d \
./Sources/host_common/host_cnl_c.d \
./Sources/host_common/host_common_c.d \
./Sources/host_common/host_dev_list_c.d \
./Sources/host_common/host_driver_c.d \
./Sources/host_common/host_main_c.d \
./Sources/host_common/host_rcv_c.d \
./Sources/host_common/host_shut_c.d \
./Sources/host_common/host_snd_c.d \

C_DEPS_QUOTED += \
"./Sources/host_common/host_ch9_c.d" \
"./Sources/host_common/host_close_c.d" \
"./Sources/host_common/host_cnl_c.d" \
"./Sources/host_common/host_common_c.d" \
"./Sources/host_common/host_dev_list_c.d" \
"./Sources/host_common/host_driver_c.d" \
"./Sources/host_common/host_main_c.d" \
"./Sources/host_common/host_rcv_c.d" \
"./Sources/host_common/host_shut_c.d" \
"./Sources/host_common/host_snd_c.d" \

OBJS_OS_FORMAT += \
./Sources/host_common/host_ch9_c.obj \
./Sources/host_common/host_close_c.obj \
./Sources/host_common/host_cnl_c.obj \
./Sources/host_common/host_common_c.obj \
./Sources/host_common/host_dev_list_c.obj \
./Sources/host_common/host_driver_c.obj \
./Sources/host_common/host_main_c.obj \
./Sources/host_common/host_rcv_c.obj \
./Sources/host_common/host_shut_c.obj \
./Sources/host_common/host_snd_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/host_common/host_ch9_c.obj: $(HOST_COMMON_ESCAPED)/host_ch9.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_ch9.args" -o "Sources/host_common/host_ch9_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_ch9_c.d: $(HOST_COMMON_ESCAPED)/host_ch9.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_close_c.obj: $(HOST_COMMON_ESCAPED)/host_close.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_close.args" -o "Sources/host_common/host_close_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_close_c.d: $(HOST_COMMON_ESCAPED)/host_close.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_cnl_c.obj: $(HOST_COMMON_ESCAPED)/host_cnl.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_cnl.args" -o "Sources/host_common/host_cnl_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_cnl_c.d: $(HOST_COMMON_ESCAPED)/host_cnl.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_common_c.obj: $(HOST_COMMON_ESCAPED)/host_common.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_common.args" -o "Sources/host_common/host_common_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_common_c.d: $(HOST_COMMON_ESCAPED)/host_common.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_dev_list_c.obj: $(HOST_COMMON_ESCAPED)/host_dev_list.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_dev_list.args" -o "Sources/host_common/host_dev_list_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_dev_list_c.d: $(HOST_COMMON_ESCAPED)/host_dev_list.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_driver_c.obj: $(HOST_COMMON_ESCAPED)/host_driver.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_driver.args" -o "Sources/host_common/host_driver_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_driver_c.d: $(HOST_COMMON_ESCAPED)/host_driver.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_main_c.obj: $(HOST_COMMON_ESCAPED)/host_main.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_main.args" -o "Sources/host_common/host_main_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_main_c.d: $(HOST_COMMON_ESCAPED)/host_main.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_rcv_c.obj: $(HOST_COMMON_ESCAPED)/host_rcv.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_rcv.args" -o "Sources/host_common/host_rcv_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_rcv_c.d: $(HOST_COMMON_ESCAPED)/host_rcv.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_shut_c.obj: $(HOST_COMMON_ESCAPED)/host_shut.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_shut.args" -o "Sources/host_common/host_shut_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_shut_c.d: $(HOST_COMMON_ESCAPED)/host_shut.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/host_common/host_snd_c.obj: $(HOST_COMMON_ESCAPED)/host_snd.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/host_common/host_snd.args" -o "Sources/host_common/host_snd_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/host_common/host_snd_c.d: $(HOST_COMMON_ESCAPED)/host_snd.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


