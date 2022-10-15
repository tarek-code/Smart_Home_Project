################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02-Source/01-MCAL/01-DIO/Src/Dio.c 

OBJS += \
./02-Source/01-MCAL/01-DIO/Src/Dio.o 

C_DEPS += \
./02-Source/01-MCAL/01-DIO/Src/Dio.d 


# Each subdirectory must supply rules for building sources it contributes
02-Source/01-MCAL/01-DIO/Src/%.o: ../02-Source/01-MCAL/01-DIO/Src/%.c 02-Source/01-MCAL/01-DIO/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


