/*
 *Sess-16(4-8)
 * ses.c
 *
 * Created: 4/9/2024 2:19:51 AM
 *  Author: Ahmed
 */

#include "Sess18\ses.h"

int source_code()
{
	u8 counter = 0, flage=0;
	
	u32 timer = 0;
	
	u8 stop_state, reset_state;
	
	
	//7-seg_set
	SS_init();
	
	//stop button
	DIO_setPinDir(DIO_PINB0,DIO_INPUT);
	
	//reset button
	DIO_setPinDir(DIO_PIND2,DIO_INPUT);
		
	while (1)
	{
		/* test
		//When the stop button is pressed
		stop_state = DIO_readPinValue(DIO_PINB0);
		if (stop_state==DIO_HIGH)
		{
			while (DIO_readPinValue(DIO_PINB0)==DIO_HIGH);
			counter++;
		}
		SS_writeNum(counter);*/
		
		SS_writeNum(counter);
		
		//timer delay without stopping the 7 seg
		timer++;
		if (timer==500 && flage==0)
		{
			counter++;
			timer = 0;
		}
		
		//When the stop button is pressed
		stop_state = DIO_readPinValue(DIO_PINB0);
		if (stop_state==DIO_HIGH)
		{
			flage = 1;
			while (DIO_readPinValue(DIO_PINB0)==DIO_HIGH);
		}
		
		//When the reset button is pressed
		reset_state = DIO_readPinValue(DIO_PIND2);
		if (reset_state==DIO_HIGH)
		{
			flage = 0;
			timer=0;
			counter = 0;
			while (DIO_readPinValue(DIO_PIND2)==DIO_HIGH);
		}
	}
	return 0;
}
