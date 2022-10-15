################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02-Source/05-OS/Src/croutine.c \
../02-Source/05-OS/Src/event_groups.c \
../02-Source/05-OS/Src/list.c \
../02-Source/05-OS/Src/queue.c \
../02-Source/05-OS/Src/stream_buffer.c \
../02-Source/05-OS/Src/tasks.c \
../02-Source/05-OS/Src/timers.c 

OBJS += \
./02-Source/05-OS/Src/croutine.o \
./02-Source/05-OS/Src/event_groups.o \
./02-Source/05-OS/Src/list.o \
./02-Source/05-OS/Src/queue.o \
./02-Source/05-OS/Src/stream_buffer.o \
./02-Source/05-OS/Src/tasks.o \
./02-Source/05-OS/Src/timers.o 

C_DEPS += \
./02-Source/05-OS/Src/croutine.d \
./02-Source/05-OS/Src/event_groups.d \
./02-Source/05-OS/Src/list.d \
./02-Source/05-OS/Src/queue.d \
./02-Source/05-OS/Src/stream_buffer.d \
./02-Source/05-OS/Src/tasks.d \
./02-Source/05-OS/Src/timers.d 


# Each subdirectory must supply rules for building sources it contributes
02-Source/05-OS/Src/%.o: ../02-Source/05-OS/Src/%.c 02-Source/05-OS/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


