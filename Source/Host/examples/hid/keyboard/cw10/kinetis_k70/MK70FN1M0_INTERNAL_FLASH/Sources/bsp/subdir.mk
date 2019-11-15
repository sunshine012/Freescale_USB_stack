################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(SOURCE)/bsp/P3/P3.c" \
"$(SOURCE)/bsp/P3/vectors.c" \

C_SRCS += \
$(SOURCE_ESCAPED)/bsp/P3/P3.c \
$(SOURCE_ESCAPED)/bsp/P3/vectors.c \

OBJS += \
./Sources/bsp/P3_c.obj \
./Sources/bsp/vectors_c.obj \

OBJS_QUOTED += \
"./Sources/bsp/P3_c.obj" \
"./Sources/bsp/vectors_c.obj" \

C_DEPS += \
./Sources/bsp/P3_c.d \
./Sources/bsp/vectors_c.d \

C_DEPS_QUOTED += \
"./Sources/bsp/P3_c.d" \
"./Sources/bsp/vectors_c.d" \

OBJS_OS_FORMAT += \
./Sources/bsp/P3_c.obj \
./Sources/bsp/vectors_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/bsp/P3_c.obj: $(SOURCE_ESCAPED)/bsp/P3/P3.c
	@echo 'Building file: $<'
	@echo 'Executing target #27 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/bsp/P3.args" -o "Sources/bsp/P3_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/bsp/P3_c.d: $(SOURCE_ESCAPED)/bsp/P3/P3.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/bsp/vectors_c.obj: $(SOURCE_ESCAPED)/bsp/P3/vectors.c
	@echo 'Building file: $<'
	@echo 'Executing target #28 $<'
	@echo 'Invoking: ARM Compiler'
	"$(ARM_ToolsDirEnv)/mwccarm" -gccinc @@"Sources/bsp/vectors.args" -o "Sources/bsp/vectors_c.obj" -c "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/bsp/vectors_c.d: $(SOURCE_ESCAPED)/bsp/P3/vectors.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


