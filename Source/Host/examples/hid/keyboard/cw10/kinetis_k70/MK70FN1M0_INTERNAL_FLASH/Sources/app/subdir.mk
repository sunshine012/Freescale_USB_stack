################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(EXAMPLES)/common/kinetis/PIT1_kinetis.c" \
"$(EXAMPLES)/hid/keyboard/hidkeyboard.c" \
"$(EXAMPLES)/common/poll.c" \
"$(EXAMPLES)/common/kinetis/printf.c" \
"$(EXAMPLES)/common/kinetis/sci.c" \

C_SRCS += \
$(EXAMPLES_ESCAPED)/common/kinetis/PIT1_kinetis.c \
$(EXAMPLES_ESCAPED)/hid/keyboard/hidkeyboard.c \
$(EXAMPLES_ESCAPED)/common/poll.c \
$(EXAMPLES_ESCAPED)/common/kinetis/printf.c \
$(EXAMPLES_ESCAPED)/common/kinetis/sci.c \

OBJS += \
./Sources/app/PIT1_kinetis_c.obj \
./Sources/app/hidkeyboard_c.obj \
./Sources/app/poll_c.obj \
./Sources/app/printf_c.obj \
./Sources/app/sci_c.obj \

OBJS_QUOTED += \
"./Sources/app/PIT1_kinetis_c.obj" \
"./Sources/app/hidkeyboard_c.obj" \
"./Sources/app/poll_c.obj" \
"./Sources/app/printf_c.obj" \
"./Sources/app/sci_c.obj" \

C_DEPS += \
./Sources/app/PIT1_kinetis_c.d \
./Sources/app/hidkeyboard_c.d \
./Sources/app/poll_c.d \
./Sources/app/printf_c.d \
./Sources/app/sci_c.d \

C_DEPS_QUOTED += \
"./Sources/app/PIT1_kinetis_c.d" \
"./Sources/app/hidkeyboard_c.d" \
"./Sources/app/poll_c.d" \
"./Sources/app/printf_c.d" \
"./Sources/app/sci_c.d" \

OBJS_OS_FORMAT += \
./Sources/app/PIT1_kinetis_c.obj \
./Sources/app/hidkeyboard_c.obj \
./Sources/app/poll_c.obj \
./Sources/app/printf_c.obj \
./Sources/app/sci_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/app/PIT1_kinetis_c.obj: $(EXAMPLES_ESCAPED)/common/kinetis/PIT1_kinetis.c
	@echo 'Building file: $<'
	@echo 'Executing target #29 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/app/PIT1_kinetis.args" -o "Sources/app/PIT1_kinetis_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/PIT1_kinetis_c.d: $(EXAMPLES_ESCAPED)/common/kinetis/PIT1_kinetis.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/app/hidkeyboard_c.obj: $(EXAMPLES_ESCAPED)/hid/keyboard/hidkeyboard.c
	@echo 'Building file: $<'
	@echo 'Executing target #30 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/app/hidkeyboard.args" -o "Sources/app/hidkeyboard_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/hidkeyboard_c.d: $(EXAMPLES_ESCAPED)/hid/keyboard/hidkeyboard.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/app/poll_c.obj: $(EXAMPLES_ESCAPED)/common/poll.c
	@echo 'Building file: $<'
	@echo 'Executing target #31 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/app/poll.args" -o "Sources/app/poll_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/poll_c.d: $(EXAMPLES_ESCAPED)/common/poll.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/app/printf_c.obj: $(EXAMPLES_ESCAPED)/common/kinetis/printf.c
	@echo 'Building file: $<'
	@echo 'Executing target #32 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/app/printf.args" -o "Sources/app/printf_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/printf_c.d: $(EXAMPLES_ESCAPED)/common/kinetis/printf.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/app/sci_c.obj: $(EXAMPLES_ESCAPED)/common/kinetis/sci.c
	@echo 'Building file: $<'
	@echo 'Executing target #33 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/app/sci.args" -o "Sources/app/sci_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/sci_c.d: $(EXAMPLES_ESCAPED)/common/kinetis/sci.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


