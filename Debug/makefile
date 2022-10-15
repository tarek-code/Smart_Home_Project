################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 02-Source/06-port/subdir.mk
-include 02-Source/05-OS/Src/subdir.mk
-include 02-Source/04-App/subdir.mk
-include 02-Source/02-HAL/15-Ulrasonic/Src/subdir.mk
-include 02-Source/02-HAL/14-Stepper_Motor/Src/subdir.mk
-include 02-Source/02-HAL/13-Bluetooth/Src/subdir.mk
-include 02-Source/02-HAL/12-DC_Motor/Src/subdir.mk
-include 02-Source/02-HAL/11-Servo_Motor/Src/subdir.mk
-include 02-Source/02-HAL/10-EEPROM_ext/Src/subdir.mk
-include 02-Source/02-HAL/09-Buzzer/Src/subdir.mk
-include 02-Source/02-HAL/08-LM35/Src/subdir.mk
-include 02-Source/02-HAL/07-Keypad/Src/subdir.mk
-include 02-Source/02-HAL/06-SSD/Src/subdir.mk
-include 02-Source/02-HAL/05-LCD/Src/subdir.mk
-include 02-Source/02-HAL/02-BUTTON/Src/subdir.mk
-include 02-Source/02-HAL/01-LED/Src/subdir.mk
-include 02-Source/01-MCAL/08-TWI/Src/subdir.mk
-include 02-Source/01-MCAL/07-UART/Src/subdir.mk
-include 02-Source/01-MCAL/06-Timers/WDT/Src/subdir.mk
-include 02-Source/01-MCAL/06-Timers/Timer2/Src/subdir.mk
-include 02-Source/01-MCAL/06-Timers/Timer1/Src/subdir.mk
-include 02-Source/01-MCAL/06-Timers/Timer0/Src/subdir.mk
-include 02-Source/01-MCAL/05-SPI/Src/subdir.mk
-include 02-Source/01-MCAL/04-EXT_INT/Src/subdir.mk
-include 02-Source/01-MCAL/03-GINT/Src/subdir.mk
-include 02-Source/01-MCAL/02-ADC/Src/subdir.mk
-include 02-Source/01-MCAL/01-DIO/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Project_AMIT
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Project_AMIT.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: main-build

# Main-build Target
main-build: Project_AMIT.elf secondary-outputs

# Tool invocations
Project_AMIT.elf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Project_AMIT.map -mmcu=atmega32 -o "Project_AMIT.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Project_AMIT.lss: Project_AMIT.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Project_AMIT.elf  >"Project_AMIT.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Project_AMIT.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Project_AMIT.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Project_AMIT.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents main-build

-include ../makefile.targets
