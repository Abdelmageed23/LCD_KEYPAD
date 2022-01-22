################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 03\ -\ HAL/LCD/subdir.mk
-include 03\ -\ HAL/KEYPAD/subdir.mk
-include 02\ -\ MCAL/Interrupt/subdir.mk
-include 02\ -\ MCAL/DIO/subdir.mk
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

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
KeyPad_test.lss \

FLASH_IMAGE += \
KeyPad_test.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: KeyPad_test.elf secondary-outputs

# Tool invocations
KeyPad_test.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,KeyPad_test.map -mmcu=atmega32 -o "KeyPad_test.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

KeyPad_test.lss: KeyPad_test.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S KeyPad_test.elf  >"KeyPad_test.lss"
	@echo 'Finished building: $@'
	@echo ' '

KeyPad_test.hex: KeyPad_test.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex KeyPad_test.elf  "KeyPad_test.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: KeyPad_test.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 KeyPad_test.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: KeyPad_test.elf
	@echo 'Invoking: AVRDude'
	C:\WinAVR-20100110\bin\avrdude -pm32 -cusbasp -Uflash:w:KeyPad_test.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) KeyPad_test.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
