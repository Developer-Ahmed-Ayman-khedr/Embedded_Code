/*
 *Sess-16(4-8)
 * ses.c
 *
 * Created: 4/9/2024 2:19:51 AM
 *  Author: Ahmed
 */ 

#include "Sess16/ses.h"

int source_code()
{
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINB2,DIO_INPUT);
	DIO_setPullUp(DIO_PINB2);
	while (1)
	{
		u8 state = DIO_readPinValue(DIO_PINB2);
		if (state== DIO_HIGH)
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
		}
		if (state == DIO_LOW)
		{
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
		}
	}
	return 0;
}
