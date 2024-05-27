/*
 * sess_PROG.c
 *
 * Created: 5/15/2024 4:59:46 PM
 *  Author: ahmed
 

#include "Sess25WDT/sess_INT.h"

int source_code()
{
	DIO_setPinDir(DIO_PINC5,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC6,DIO_OUTPUT);
	
	WDT_Start(8);
	
	DIO_setPinValue(DIO_PINC5,DIO_HIGH);
	_delay_ms(1000);
	DIO_setPinValue(DIO_PINC5,DIO_LOW);
	
	
	while (1)
	{
		DIO_togglePinValue(DIO_PINC6);
		_delay_ms(2000);
	}
	WDT_Stop();
	
	return 0;
}

*/ 