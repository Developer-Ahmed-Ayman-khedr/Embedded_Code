/*
 *Sess-16(4-8)
 * ses.c
 *
 * Created: 4/9/2024 2:19:51 AM
 *  Author: ahmed
 */ 

#include "Sess16/Task/ses.h"

int test_code()
{
	u8 counter = 0;
	//7-segment
	DIO_setPinDir(DIO_PINC1,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC3,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC4,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC5,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC6,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC7,DIO_OUTPUT);
	//counter button
	DIO_setPinDir(DIO_PINA2,DIO_INPUT);
	DIO_setPullUp(DIO_PINA2);
	//reset button
	DIO_setPinDir(DIO_PINB6,DIO_INPUT);
	DIO_setPullUp(DIO_PINB6);
	while (1)
	{
		//counter button is pressed
		if (DIO_readPinValue(DIO_PINA2)==DIO_LOW)
		{
			counter++;
			_delay_ms(300);
		}
		//reset button is pressed
		if (DIO_readPinValue(DIO_PINB6)==DIO_LOW)
		{
			counter=0;
		}
		switch(counter){
			case 0:
				DIO_setPinValue(DIO_PINC1,DIO_LOW);
				DIO_setPinValue(DIO_PINC2,DIO_LOW);
				DIO_setPinValue(DIO_PINC3,DIO_LOW);
				DIO_setPinValue(DIO_PINC4,DIO_LOW);
				DIO_setPinValue(DIO_PINC5,DIO_LOW);
				DIO_setPinValue(DIO_PINC6,DIO_LOW);
				DIO_setPinValue(DIO_PINC7,DIO_LOW);
				break;
			case 1:
				DIO_setPinValue(DIO_PINC1,DIO_LOW);
				DIO_setPinValue(DIO_PINC2,DIO_HIGH);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_LOW);
				DIO_setPinValue(DIO_PINC5,DIO_LOW);
				DIO_setPinValue(DIO_PINC6,DIO_LOW);
				DIO_setPinValue(DIO_PINC7,DIO_LOW);
				break;
			case 2:
				DIO_setPinValue(DIO_PINC1,DIO_HIGH);
				DIO_setPinValue(DIO_PINC2,DIO_HIGH);
				DIO_setPinValue(DIO_PINC3,DIO_LOW);
				DIO_setPinValue(DIO_PINC4,DIO_HIGH);
				DIO_setPinValue(DIO_PINC5,DIO_HIGH);
				DIO_setPinValue(DIO_PINC6,DIO_LOW);
				DIO_setPinValue(DIO_PINC7,DIO_HIGH);
				break;
			case 3:
				DIO_setPinValue(DIO_PINC1,DIO_HIGH);
				DIO_setPinValue(DIO_PINC2,DIO_HIGH);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_HIGH);
				DIO_setPinValue(DIO_PINC5,DIO_LOW);
				DIO_setPinValue(DIO_PINC6,DIO_LOW);
				DIO_setPinValue(DIO_PINC7,DIO_HIGH);
				break;
			case 4:
				DIO_setPinValue(DIO_PINC1,DIO_LOW);
				DIO_setPinValue(DIO_PINC2,DIO_HIGH);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_LOW);
				DIO_setPinValue(DIO_PINC5,DIO_LOW);
				DIO_setPinValue(DIO_PINC6,DIO_HIGH);
				DIO_setPinValue(DIO_PINC7,DIO_HIGH);
				break;
			case 5:
				DIO_setPinValue(DIO_PINC1,DIO_HIGH);
				DIO_setPinValue(DIO_PINC2,DIO_LOW);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_HIGH);
				DIO_setPinValue(DIO_PINC5,DIO_LOW);
				DIO_setPinValue(DIO_PINC6,DIO_HIGH);
				DIO_setPinValue(DIO_PINC7,DIO_HIGH);
				break;
			case 6:
				DIO_setPinValue(DIO_PINC1,DIO_HIGH);
				DIO_setPinValue(DIO_PINC2,DIO_LOW);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_HIGH);
				DIO_setPinValue(DIO_PINC5,DIO_HIGH);
				DIO_setPinValue(DIO_PINC6,DIO_HIGH);
				DIO_setPinValue(DIO_PINC7,DIO_HIGH);
				break;
			case 7:
				DIO_setPinValue(DIO_PINC1,DIO_HIGH);
				DIO_setPinValue(DIO_PINC2,DIO_HIGH);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_LOW);
				DIO_setPinValue(DIO_PINC5,DIO_LOW);
				DIO_setPinValue(DIO_PINC6,DIO_LOW);
				DIO_setPinValue(DIO_PINC7,DIO_LOW);
				break;
			case 8:
				DIO_setPinValue(DIO_PINC1,DIO_HIGH);
				DIO_setPinValue(DIO_PINC2,DIO_HIGH);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_HIGH);
				DIO_setPinValue(DIO_PINC5,DIO_HIGH);
				DIO_setPinValue(DIO_PINC6,DIO_HIGH);
				DIO_setPinValue(DIO_PINC7,DIO_HIGH);
				break;
			case 9:
				DIO_setPinValue(DIO_PINC1,DIO_HIGH);
				DIO_setPinValue(DIO_PINC2,DIO_HIGH);
				DIO_setPinValue(DIO_PINC3,DIO_HIGH);
				DIO_setPinValue(DIO_PINC4,DIO_HIGH);
				DIO_setPinValue(DIO_PINC5,DIO_LOW);
				DIO_setPinValue(DIO_PINC6,DIO_HIGH);
				DIO_setPinValue(DIO_PINC7,DIO_HIGH);
				break;
			default:
				break;
			}
	}
	return 0;
}
