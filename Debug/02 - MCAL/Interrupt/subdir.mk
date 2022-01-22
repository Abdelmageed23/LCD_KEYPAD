################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02\ -\ MCAL/Interrupt/Interrupt_program.c 

OBJS += \
./02\ -\ MCAL/Interrupt/Interrupt_program.o 

C_DEPS += \
./02\ -\ MCAL/Interrupt/Interrupt_program.d 


# Each subdirectory must supply rules for building sources it contributes
02\ -\ MCAL/Interrupt/Interrupt_program.o: ../02\ -\ MCAL/Interrupt/Interrupt_program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"02 - MCAL/Interrupt/Interrupt_program.d" -MT"02\ -\ MCAL/Interrupt/Interrupt_program.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


