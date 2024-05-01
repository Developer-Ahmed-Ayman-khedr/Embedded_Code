/*
 * SESSTI1_PROG.c
 *
 * Created: 5/1/2024 6:46:06 PM
 *  Author: ahmed
 */ 

#include "Sess22TI1/TASKCOUNTER/TASKCOUNTER_INT.h"

int source_code()
{
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC3,DIO_OUTPUT);
	
	LCD_init();
	
	GI_enable();
	TIMER0_initNormal();
	TIMER0_start(TIMER0_RISING);
	TIMER0_setPreload(0);	
	while (1)
	{
		if (TIMER0_getCounter()==3)
		{
			LCD_clearDis();
			LCD_sendStr("Complete");
			TIMER0_setPreload(0);
		}
	}
		
	return 0;
}