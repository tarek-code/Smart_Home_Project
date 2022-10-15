################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02-Source/01-MCAL/05-SPI/Src/SPI.c 

OBJS += \
./02-Source/01-MCAL/05-SPI/Src/SPI.o 

C_DEPS += \
./02-Source/01-MCAL/05-SPI/Src/SPI.d 


# Each subdirectory must supply rules for building sources it contributes
02-Source/01-MCAL/05-SPI/Src/%.o: ../02-Source/01-MCAL/05-SPI/Src/%.c 02-Source/01-MCAL/05-SPI/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


