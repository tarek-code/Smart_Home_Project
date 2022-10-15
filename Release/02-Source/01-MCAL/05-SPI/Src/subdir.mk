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
	avr-gcc -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\00-Library" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\10-EEPROM_int\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\01-DIO\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\02-ADC\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\03-GINT\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\04-EXT_INT\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\05-SPI\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\06-Timers\Lib" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\06-Timers\Timer0\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\06-Timers\Timer1\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\06-Timers\Timer2\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\06-Timers\WDT\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\07-UART\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\01-MCAL\08-TWI\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\01-LED\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\02-BUTTON\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\05-LCD\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\06-SSD\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\07-Keypad\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\08-LM35\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\09-Buzzer\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\10-EEPROM_ext\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\11-Servo_Motor\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\12-DC_Motor\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\13-Bluetooth\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\14-Stepper_Motor\Inc" -I"C:\Users\lione\eclipse-workspace\Project_AMIT\02-Source\02-HAL\15-Ulrasonic\Inc" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


