################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../Bluetooth.c \
../Button.c \
../Buzzer.c \
../DC_Motor.c \
../Dio.c \
../EEPROM.c \
../EXT_INT.c \
../GLBINT.c \
../Keypad.c \
../LM35.c \
../Lcd.c \
../Lcd_Cfg.c \
../Led.c \
../SPI.c \
../SSD.c \
../Servo_Motor.c \
../TWI.c \
../Timer0.c \
../Timer1.c \
../Timer2.c \
../UART.c \
../Ultrasonic.c \
../WDT.c \
../main.c 

OBJS += \
./ADC.o \
./Bluetooth.o \
./Button.o \
./Buzzer.o \
./DC_Motor.o \
./Dio.o \
./EEPROM.o \
./EXT_INT.o \
./GLBINT.o \
./Keypad.o \
./LM35.o \
./Lcd.o \
./Lcd_Cfg.o \
./Led.o \
./SPI.o \
./SSD.o \
./Servo_Motor.o \
./TWI.o \
./Timer0.o \
./Timer1.o \
./Timer2.o \
./UART.o \
./Ultrasonic.o \
./WDT.o \
./main.o 

C_DEPS += \
./ADC.d \
./Bluetooth.d \
./Button.d \
./Buzzer.d \
./DC_Motor.d \
./Dio.d \
./EEPROM.d \
./EXT_INT.d \
./GLBINT.d \
./Keypad.d \
./LM35.d \
./Lcd.d \
./Lcd_Cfg.d \
./Led.d \
./SPI.d \
./SSD.d \
./Servo_Motor.d \
./TWI.d \
./Timer0.d \
./Timer1.d \
./Timer2.d \
./UART.d \
./Ultrasonic.d \
./WDT.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


