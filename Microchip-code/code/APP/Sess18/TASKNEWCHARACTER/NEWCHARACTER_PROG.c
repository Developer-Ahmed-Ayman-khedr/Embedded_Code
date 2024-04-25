/*
 * NEWCHARACTER_PROG.c
 *
 * Created: 4/22/2024 5:58:43 PM
 *  Author: ahmed
 


#include "Sess18/TASKNEWCHARACTER/NEWCHARACTER_INT.h"

int source_code()
{
	//Initialize the LCD
	LCD_init();
	//Custom characters
	u8 customCharacter1[8]  = {
		0b00000,
		0b00000,
		0b01010,
		0b00000,
		0b00100,
		0b01010,
		0b10001,
		0b00000
	};
	u8 customCharacter2[8] = {
	0b00000,
	0b11111,
	0b10101,
	0b11111,
	0b11111,
	0b01010,
	0b01010,
	0b00000
	};

	//Position on LCD
	u8 position = 0;
	while (1)
	{
		//LCD_CreateNewCharacter(customCharacter1,1);
		//LCD_SendNewCharacter(1);
		LCD_CreateNewCharacter(customCharacter2,2);
		LCD_SendNewCharacter(2);
		_delay_ms(100);
		LCD_Shift(LCD_SHIFT_DIS_RIGHT);
		position++;
		if (position==8)
		{
			LCD_GoTo(0,1);
			position = 0;
		}
	}
	return 0;
}


*/