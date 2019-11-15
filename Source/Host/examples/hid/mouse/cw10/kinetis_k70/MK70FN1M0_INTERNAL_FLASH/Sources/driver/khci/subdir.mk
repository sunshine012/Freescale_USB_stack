################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(SOURCE)/driver/kinetis/khci_kinetis.c" \

C_SRCS += \
$(SOURCE_ESCAPED)/driver/kinetis/khci_kinetis.c \

OBJS += \
./Sources/driver/khci/khci_kinetis_c.obj \

OBJS_QUOTED += \
"./Sources/driver/khci/khci_kinetis_c.obj" \

C_DEPS += \
./Sources/driver/khci/khci_kinetis_c.d \

C_DEPS_QUOTED += \
"./Sources/driver/khci/khci_kinetis_c.d" \

OBJS_OS_FORMAT += \
./Sources/driver/khci/khci_kinetis_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/driver/khci/khci_kinetis_c.obj: $(SOURCE_ESCAPED)/driver/kinetis/khci_kinetis.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/driver/khci/khci_kinetis.args" -o "Sources/driver/khci/khci_kinetis_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/driver/khci/khci_kinetis_c.d: $(SOURCE_ESCAPED)/driver/kinetis/khci_kinetis.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


