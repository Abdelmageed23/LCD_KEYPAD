/*********************************************************
 * Author 	: Abdelrahman Mohamed
 * Date		: 16 / 1 / 2022
 * Version	: V1.0
 ********************************************************/

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

/*
 * PORTA
 * PORTB
 * PORTC
 * PORTD
 */
#define LCD_PORT	PORTA

#define LCD_PIN0
#define LCD_PIN1
#define LCD_PIN2
#define LCD_PIN3
#define LCD_PIN4   PIN4
#define LCD_PIN5   PIN5
#define LCD_PIN6   PIN6
#define LCD_PIN7   PIN7

#define LCD_RS	   	PIN1
#define LCD_RW		PIN2
#define LCD_E		PIN3



void LCD_Init();
void LCD_SendChar(uint8_t Char);
void LCD_SendCommand(uint8_t Command);
void LCD_SendNumber(sint32_t num);
void lcd_string(char *str);
void LCD_Clear_screen();
void LCD_GotoXY (uint8_t line ,uint8_t postion);

/*
void LCD_Check_Busy();
void Delay(uint32_t delay);
void LCD_MoveCursorLeft();
void LCD_MoveCursorRight();
*/
#endif
