/*********************************************************/
/* Author  : Abdelrahman Mohamed              			 */
/* Date     : 11 Jan	2022                   			 */
/* Version  : V01                            			 */
/*********************************************************/


#include "../../01 - LIB/STD_TYPES.h"
#include "../../01 - LIB/BIT_MATH.h"

#include "../../02 - MCAL/DIO/DIO_interface.h"
#include "KEYPAD_Interface.h"
#include "KEYPAD_config.h"
#include "KEYPAD_Private.h"




void KEYPAD_init()
{
		DIO_SetPinDircection(KPD_PORT,KPD_column1,OUTPUT);
		DIO_SetPinDircection(KPD_PORT,KPD_column2,OUTPUT);
		DIO_SetPinDircection(KPD_PORT,KPD_column3,OUTPUT);

		DIO_SetPinValue(KPD_PORT,KPD_column1,HIGH);
		DIO_SetPinValue(KPD_PORT,KPD_column2,HIGH);
		DIO_SetPinValue(KPD_PORT,KPD_column3,HIGH);


		DIO_SetPinDircection(KPD_PORT,KPD_row1,INPUT_PULLUP);
		DIO_SetPinDircection(KPD_PORT,KPD_row2,INPUT_PULLUP);
		DIO_SetPinDircection(KPD_PORT,KPD_row3,INPUT_PULLUP);
}



uint8_t KEYPAD_GetNum()
{

	uint8_t value = KPD_NOT_PRESSED, pin_check=0;
	uint8_t KPD_NUM[COL_NUM][ROW_NUM]={{1,2,3},{4,5,6},{7,8,9}};
	uint8_t KPD_COLUMNS[]={KPD_column1 ,KPD_column2, KPD_column3};
	uint8_t KPD_ROWS[]={KPD_row1 ,KPD_row2, KPD_row3};
	uint8_t col,row;

	for(col=0;col<COL_NUM;col++)
	{
		DIO_SetPinValue(KPD_PORT,KPD_COLUMNS[col],LOW);
		for(row=0;row<ROW_NUM;row++){

			DIO_GetPinVal(KPD_PORT,KPD_ROWS[row],&pin_check);

			if(pin_check == LOW)
			{
				value = KPD_NUM[col][row];
				for(uint32_t delay=0 ; delay <DELAY_TIME;delay++);
				while(pin_check == LOW)
				{
					DIO_GetPinVal(KPD_PORT,KPD_ROWS[row],&pin_check);
				}
				DIO_SetPinValue(KPD_PORT,KPD_COLUMNS[row],HIGH);

				return value;
			}

		}
		DIO_SetPinValue(KPD_PORT,KPD_COLUMNS[col],HIGH);
	}

	return value;
}
