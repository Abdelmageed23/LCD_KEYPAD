################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../03\ -\ HAL/LCD/LCD_Program.c 

OBJS += \
./03\ -\ HAL/LCD/LCD_Program.o 

C_DEPS += \
./03\ -\ HAL/LCD/LCD_Program.d 


# Each subdirectory must supply rules for building sources it contributes
03\ -\ HAL/LCD/LCD_Program.o: ../03\ -\ HAL/LCD/LCD_Program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"03 - HAL/LCD/LCD_Program.d" -MT"03\ -\ HAL/LCD/LCD_Program.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


