################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#Progress monitor hint: 34
first : all
-include ../makefile.init

# This file contains definitions of environment variables used in the makefiles and .args files if exist.
-include makefile.local

RM := "$(GNU_Make_Install_DirEnv)/rm" -f

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include prm/subdir.mk
-include Sources/host_common/subdir.mk
-include Sources/driver/subdir.mk
-include Sources/driver/khci/subdir.mk
-include Sources/driver/ehci/subdir.mk
-include Sources/classes/subdir.mk
-include Sources/classes/hub/subdir.mk
-include Sources/classes/hid/subdir.mk
-include Sources/bsp/subdir.mk
-include Sources/app/subdir.mk
-include Project_Settings/Startup/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Kinetis_MK70FN1M0_keyboard_host.afx \

EXECUTABLES_QUOTED += \
"Kinetis_MK70FN1M0_keyboard_host.afx" \

EXECUTABLES_OS_FORMAT += \
Kinetis_MK70FN1M0_keyboard_host.afx \


# All Target
all: warning-messages explicit-dependencies Kinetis_MK70FN1M0_keyboard_host.afx

# Tool invocations
Kinetis_MK70FN1M0_keyboard_host.afx: $(OBJS) $(LCF_BUILD_DEPENCENCY) $(USER_OBJS) $(LCF_SRCS)
	@echo 'Building target: $@'
	@echo 'Executing target #35 $@'
	@echo 'Invoking: ARM Linker'
	"$(ARM_ToolsDirEnv)/mwldarm" -o "Kinetis_MK70FN1M0_keyboard_host.afx" @@"Kinetis_MK70FN1M0_keyboard_host.args"  $(USER_OBJS_QUOTED) $(LIBS_QUOTED)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(S_DEPS_QUOTED) $(CC_DEPS_QUOTED) $(CPP_DEPS_QUOTED) "./*/*/*.obj" "./*/*/*/*.obj"  $(S_UPPER_DEPS_QUOTED) $(CXX_DEPS_QUOTED) $(ASM_DEPS_QUOTED) $(ASM_UPPER_DEPS_QUOTED) $(C_UPPER_DEPS_QUOTED) $(EXECUTABLES_QUOTED) "./*/*/*.d" "./*/*/*/*.d"  $(ProjDirPath)/MK70FN1M0_INTERNAL_FLASH/Kinetis_MK70FN1M0_keyboard_host.afx
	-@echo ' '

.PHONY: all clean dependents explicit-dependencies warning-messages
.SECONDARY:

-include ../makefile.targets

explicit-dependencies: 

warning-messages: 

