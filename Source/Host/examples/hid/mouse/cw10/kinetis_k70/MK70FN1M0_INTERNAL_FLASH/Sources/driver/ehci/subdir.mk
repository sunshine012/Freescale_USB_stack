################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(SOURCE)/driver/kinetis/ehci/ehci_bw.c" \
"$(SOURCE)/driver/kinetis/ehci/ehci_cncl.c" \
"$(SOURCE)/driver/kinetis/ehci/ehci_intr.c" \
"$(SOURCE)/driver/kinetis/ehci/ehci_iso.c" \
"$(SOURCE)/driver/kinetis/ehci/ehci_main.c" \
"$(SOURCE)/driver/kinetis/ehci/ehci_shut.c" \
"$(SOURCE)/driver/kinetis/ehci/ehci_utl.c" \

C_SRCS += \
$(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_bw.c \
$(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_cncl.c \
$(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_intr.c \
$(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_iso.c \
$(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_main.c \
$(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_shut.c \
$(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_utl.c \

OBJS += \
./Sources/driver/ehci/ehci_bw_c.obj \
./Sources/driver/ehci/ehci_cncl_c.obj \
./Sources/driver/ehci/ehci_intr_c.obj \
./Sources/driver/ehci/ehci_iso_c.obj \
./Sources/driver/ehci/ehci_main_c.obj \
./Sources/driver/ehci/ehci_shut_c.obj \
./Sources/driver/ehci/ehci_utl_c.obj \

OBJS_QUOTED += \
"./Sources/driver/ehci/ehci_bw_c.obj" \
"./Sources/driver/ehci/ehci_cncl_c.obj" \
"./Sources/driver/ehci/ehci_intr_c.obj" \
"./Sources/driver/ehci/ehci_iso_c.obj" \
"./Sources/driver/ehci/ehci_main_c.obj" \
"./Sources/driver/ehci/ehci_shut_c.obj" \
"./Sources/driver/ehci/ehci_utl_c.obj" \

C_DEPS += \
./Sources/driver/ehci/ehci_bw_c.d \
./Sources/driver/ehci/ehci_cncl_c.d \
./Sources/driver/ehci/ehci_intr_c.d \
./Sources/driver/ehci/ehci_iso_c.d \
./Sources/driver/ehci/ehci_main_c.d \
./Sources/driver/ehci/ehci_shut_c.d \
./Sources/driver/ehci/ehci_utl_c.d \

C_DEPS_QUOTED += \
"./Sources/driver/ehci/ehci_bw_c.d" \
"./Sources/driver/ehci/ehci_cncl_c.d" \
"./Sources/driver/ehci/ehci_intr_c.d" \
"./Sources/driver/ehci/ehci_iso_c.d" \
"./Sources/driver/ehci/ehci_main_c.d" \
"./Sources/driver/ehci/ehci_shut_c.d" \
"./Sources/driver/ehci/ehci_utl_c.d" \

OBJS_OS_FORMAT += \
./Sources/driver/ehci/ehci_bw_c.obj \
./Sources/driver/ehci/ehci_cncl_c.obj \
./Sources/driver/ehci/ehci_intr_c.obj \
./Sources/driver/ehci/ehci_iso_c.obj \
./Sources/driver/ehci/ehci_main_c.obj \
./Sources/driver/ehci/ehci_shut_c.obj \
./Sources/driver/ehci/ehci_utl_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/driver/ehci/ehci_bw_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_bw.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/ehci/ehci_bw.args" -o "Sources/driver/ehci/ehci_bw_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/ehci/ehci_bw_c.d: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_bw.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/ehci/ehci_cncl_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_cncl.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/ehci/ehci_cncl.args" -o "Sources/driver/ehci/ehci_cncl_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/ehci/ehci_cncl_c.d: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_cncl.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/ehci/ehci_intr_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_intr.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/ehci/ehci_intr.args" -o "Sources/driver/ehci/ehci_intr_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/ehci/ehci_intr_c.d: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_intr.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/ehci/ehci_iso_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_iso.c
	@echo 'Building file: $<'
	@echo 'Executing target #19 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/ehci/ehci_iso.args" -o "Sources/driver/ehci/ehci_iso_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/ehci/ehci_iso_c.d: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_iso.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/ehci/ehci_main_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_main.c
	@echo 'Building file: $<'
	@echo 'Executing target #20 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/ehci/ehci_main.args" -o "Sources/driver/ehci/ehci_main_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/ehci/ehci_main_c.d: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_main.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/ehci/ehci_shut_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_shut.c
	@echo 'Building file: $<'
	@echo 'Executing target #21 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/ehci/ehci_shut.args" -o "Sources/driver/ehci/ehci_shut_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/ehci/ehci_shut_c.d: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_shut.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/driver/ehci/ehci_utl_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_utl.c
	@echo 'Building file: $<'
	@echo 'Executing target #22 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/ehci/ehci_utl.args" -o "Sources/driver/ehci/ehci_utl_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/ehci/ehci_utl_c.d: $(SOURCE_ESCAPED)/driver/kinetis/ehci/ehci_utl.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


