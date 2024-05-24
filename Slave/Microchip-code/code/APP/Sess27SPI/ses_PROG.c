/*
 * ses_PROG.c
 *
 * Created: 5/22/2024 8:08:15 PM
 *  Author: ahmed
 */ 

#include "Sess27SPI/sess_INT.h"

int source_code()
{
	SPI_init(SPI_SLAVE);
	while (1)
	{		
		SPI_sendReceiveData(1);
		_delay_ms(1000);
	}
	return 0;
}