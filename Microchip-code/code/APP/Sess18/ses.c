/*
 *Sess-16(4-8)
 * ses.c
 *
 * Created: 4/9/2024 2:19:51 AM
 *  Author: Ahmed
 

#include "Sess19\ses.h"

int source_code()
{
	//Increment button
	//DIO_setPinDir(DIO_PIND2,DIO_INPUT);
	//u8 increment_button;
	
	//u8 counter = 0;
	LCD_int();
	u8 place=0;
	//LCD_sendData(3);
	//LCD_sendNum(12);
	//LCD_sendFloatNum(123.123);
	while (1)
	{
		
		LCD_GoTo(place,1);
		LCD_sendData('A');
		place++;
		_delay_ms(500);
		LCD_clearDis();
		if (place==16)
		{
			place=0;
		}
		increment_button = DIO_readPinValue(DIO_PIND2);
		if (increment_button==DIO_HIGH)
		{
			LCD_clearDis();
			counter++;
			while (DIO_readPinValue(DIO_PIND2)==DIO_HIGH);
			LCD_sendNum(counter);
		}
	}
	return 0;
}*/
