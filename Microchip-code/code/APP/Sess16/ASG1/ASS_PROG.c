/*
 * ASS_PROG.c
 *
 * Created: 4/19/2024 1:58:53 PM
 *  Author: ahmed
 

#include "Sess16/ASG1/ASS_INT.h"

int source_code()
{
	//LED
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);	
	while (1)
	{
		DIO_togglePinValue(DIO_PINC2);
		_delay_ms(100);
	}
	return 0;
}*/
