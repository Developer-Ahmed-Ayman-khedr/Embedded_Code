/*
 * sess_PROG.c
 *
 * Created: 5/8/2024 7:02:40 PM
 *  Author: ahmed
 

#include "Sess23CTC/sess_INT.h"

void toggleled(){
	static u16 counter = 0;
	
	counter++;
	if (counter % 100 == 0)
	{
		DIO_togglePinValue(DIO_PINC2);
	}
}

int source_code()
{
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	
	GI_enable();
	
	TIMER0_initCTC();
	
	TIMER0_setOCR(250);
	
	TIMER_setcallbackCTC(toggleled);
	
	TIMER0_start(TIMER0_DIV64);
	
	while (1)
	{
		
	}
	
	return 0;
}
*/ 