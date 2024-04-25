/*
 * sess_PROG.c
 *
 * Created: 4/24/2024 6:40:15 PM
 *  Author: ahmed
 */ 

#include "Sess20/sess_INT.h"

void shiftLCDright(){
	LCD_Shift(LCD_SHIFT_DIS_RIGHT);
}

void shiftLCDlift(){
	LCD_Shift(LCD_SHIFT_DIS_LIFT);
}

int source_code()
{
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	GI_enable();
	EXT_int0Int(EXT_RISING);
	EXT_int1Int(EXT_RISING);
	EXT_int2Int(EXT_RISING);
	LCD_init();
	LCD_sendStr("Ahmed");
	EXT_setcallbackInt0(shiftLCDright);
	EXT_setcallbackInt1(shiftLCDlift);
	while (1)
	{
		
	}
	return 0;
}