/*
 * sess_PROG.c
 *
 * Created: 6/10/2024 6:17:36 PM
 *  Author: ahmed
 

#include "Sess32/TTL/sess_INT.h"

int source_code()
{
	UART_init();
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	while (1)
	{
		UART_sendData('e');
		_delay_ms(1000);
		
		u8 receivedData = UART_receiveData();
		if(receivedData == 'n')
		{
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
		}
		else if(receivedData == 'f')
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
		}
	}
	return 0;
}
*/ 