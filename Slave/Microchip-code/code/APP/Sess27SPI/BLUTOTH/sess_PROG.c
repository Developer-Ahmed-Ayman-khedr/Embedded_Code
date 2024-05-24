/*
 * sess_PROG.c
 *
 * Created: 5/22/2024 5:48:59 PM
 *  Author: ahmed
 

#include "Sess27SPI/BLUTOTH/sess_INT.h"

int source_code()
{
	UART_init();
	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	
	u8 RecevedData;
	while (1)
	{
		UART_sendData('B');
		_delay_ms(1000);
		
		RecevedData = UART_receiveData();;
		
		if (RecevedData=='n')
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
*/