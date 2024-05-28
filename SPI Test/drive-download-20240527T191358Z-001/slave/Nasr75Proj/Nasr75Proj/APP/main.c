/*
 * Nasr75Proj.c
 *
 * Created: 03/04/2024 08:50:20 PM
 * Author : AMIT
 */ 

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#define F_CPU 16000000UL
#include <util/delay.h>

#include "DIO_INT.h"
#include "SS_INT.h"

#include "LCD_INT.h"

#include "KPD_INT.h"

#include "EXT_INT.h"
#include "GI_INT.h"
#include "TIMER0_INT.h"
#include "TIMER1_INT.h"
#include "WDT_INT.h"
#include "TIMER1_INT.h"

#include "UART_INT.h"

#include "SPI_INT.h"

int main(void)
{
	//init SPI and select master/slave
	SPI_init(SPI_SLAVE);
	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	u8 data = 0;
	while (1)
	{	
		//send data
		u8 rData = SPI_sendReceiveData(data);
		data = ~data ;//0->0xFF and 0xFF->0
		DIO_togglePinValue(DIO_PINC2);
		
			
	}
}

