################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02-Source/02-HAL/08-LM35/Src/LM35.c 

OBJS += \
./02-Source/02-HAL/08-LM35/Src/LM35.o 

C_DEPS += \
./02-Source/02-HAL/08-LM35/Src/LM35.d 


# Each subdirectory must supply rules for building sources it contributes
02-Source/02-HAL/08-LM35/Src/%.o: ../02-Source/02-HAL/08-LM35/Src/%.c 02-Source/02-HAL/08-LM35/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


