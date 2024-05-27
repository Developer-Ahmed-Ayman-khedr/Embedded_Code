/*
 * sess_PROG.c
 *
 * Created: 5/27/2024 9:03:00 PM
 *  Author: ahmed
 */ 

#include "Sess28I2C/sess_INT.h"

int source_code()
{
	I2C_init(SLAVE);
	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	
	u8 RecevedData;
	while (1)
	{
		I2C_SlaveReceiveByte(&RecevedData);
		if (RecevedData==1)
		{
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
		}
		else if (RecevedData==0)
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
		}
	}
	return 0;
}