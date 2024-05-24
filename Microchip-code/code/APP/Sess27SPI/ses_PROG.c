/*
 * ses_PROG.c
 *
 * Created: 5/22/2024 8:08:15 PM
 *  Author: ahmed
 */ 

#include "Sess27SPI/sess_INT.h"

int source_code()
{
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	SPI_init(SPI_MASTER);
	u8 RecevedData;
	while (1)
	{		
		//refresh slave select
		//B4 -> HIGH
		//B4 -> LOW
		DIO_setPinValue(DIO_PINB4,DIO_HIGH);
		DIO_setPinValue(DIO_PINB4,DIO_LOW);
		RecevedData = SPI_sendReceiveData(5);
		_delay_ms(1000);
		
		if (RecevedData=='1')
		{
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
		}
		else if (RecevedData=='f')
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
		}
	}
	return 0;
}