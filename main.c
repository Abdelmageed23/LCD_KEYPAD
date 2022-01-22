/*
 * main.c
 *
 *  Created on: Jan 10, 2022
 *      Author: Abdelrahman Mohamed
 */

#include "01 - LIB/BIT_MATH.h"
#include "01 - LIB/STD_TYPES.h"

#include "02 - MCAL/DIO/DIO_interface.h"

#include "03 - HAL/KEYPAD/KEYPAD_Interface.h"
#include  "03 - HAL/LCD/LCD_Interface.h"


void main()
{

	uint8_t b=0;

	LCD_Init();
	KEYPAD_init();

	lcd_string("The number is :");
	LCD_GotoXY(1,5);

	while(1)
	{

		b=KEYPAD_GetNum();
		if( b==255)
		{

		}
		else
		{
			LCD_SendNumber(b);
		}

	//	lcd_string(");
	}


	/* LED*/
/*
		DIO_SetPinDircection(PORTB,5,OUTPUT);
		DIO_SetPinDircection(PORTB,6,OUTPUT);
		DIO_SetPinDircection(PORTB,7,OUTPUT);


	KEYPAD_init();

	while(1)
	{

		b=KEYPAD_GetNum();
		if(b==1)
		{
			DIO_TogglePin(PORTB,5);
		}
		else if(b==2)
		{
			DIO_TogglePin(PORTB,6);
		}
		else if(b==3)
		{
			DIO_SetPinValue(PORTB,7,HIGH);
		}

		else if(b==4)
		{
			DIO_SetPinValue(PORTB,5,LOW);
		}
		else if(b==5)
		{
			DIO_SetPinValue(PORTB,6,LOW);
		}
		else if(b==6)
		{
			DIO_SetPinValue(PORTB,7,LOW);
		}
		else if(b==7)
		{
			DIO_SetPinValue(PORTB,5,HIGH);
		}
		else if(b==8)
		{
			DIO_SetPinValue(PORTB,6,HIGH);
		}
		else if(b==9)
		{
			DIO_SetPinValue(PORTB,7,HIGH);
		}
}
*/
}
