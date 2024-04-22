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
	
	while (1)
	{
		u8 custom_character_1[8] = {
			0b00000,
			0b00000,
			0b01010,
			0b00000,
			0b00100,
			0b01010,
			0b10001,
			0b00000
		};
		u8 custom_character_2[8]{
			0b00000,
			0b11111,
			0b10101,
			0b11111,
			0b11111,
			0b01010,
			0b01010,
			0b00000
		};
		LCD_CreateNewCharacter(custom_character_1,1);
		LCD_SendNewCharacter(1);
		LCD_CreateNewCharacter(custom_character_2,2);
		LCD_SendNewCharacter(2);
	}
	return 0;
}

*/
