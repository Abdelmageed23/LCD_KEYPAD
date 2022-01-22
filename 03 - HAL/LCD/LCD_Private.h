/*********************************************************
 * Author 	: Abdelrahman Mohamed
 * Date		: 16 / 1 / 2022
 * Version	: V1.0
 ********************************************************/

#ifndef LCD_PRIVATE_H
#define LCD_PRIVATE_H


#define LCD_FUNCTION_8BIT_2LINES	(0x38)
#define LCD_FUNCTION_4BIT_2LINES	(0x28)
#define LCD_MOVE_DISP_RIGHT			(0X1C)
#define LCD_MOVE_DISP_LEFT			(0X18)
#define LCD_MOVE_CURSOR_RIGHT		(0X14)
#define LCD_MOVE_CURSOR_LEFT		(0X10)
#define LCD_DISP_OFF				(0X08)
#define LCD_DISP_ON_CURSOR			(0X0E)
#define LCD_DISP_ON_CURSOR_BLINK	(0X0F)
#define LCD_DISP_ON_BLINK  			(0X0D)
#define LCD_DISP_ON		  			(0X0C)
#define LCD_ENTERY_DEC  			(0X04)
#define LCD_ENTERY_DEC_SHIFT 		(0X05)
#define LCD_ENTERY_INC  			(0X06)
#define LCD_ENTERY_INC_SHIFT 		(0X07)
#define LCD_BEGIN_AT_FIRST_RAW		(0X80)
#define LCD_BEGIN_AT_SECOND_RAW		(0XC0)
#define LCD_CLEAR_SCREEN			(0X01)
#define LCD_ENTRY_MODE				(0X06)

void LCD_CommandInit();


#endif
