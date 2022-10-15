################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02-Source/01-MCAL/07-UART/Src/UART.c 

OBJS += \
./02-Source/01-MCAL/07-UART/Src/UART.o 

C_DEPS += \
./02-Source/01-MCAL/07-UART/Src/UART.d 


# Each subdirectory must supply rules for building sources it contributes
02-Source/01-MCAL/07-UART/Src/%.o: ../02-Source/01-MCAL/07-UART/Src/%.c 02-Source/01-MCAL/07-UART/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


