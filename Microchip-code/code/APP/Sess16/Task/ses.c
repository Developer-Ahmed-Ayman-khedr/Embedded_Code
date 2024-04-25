/*
 *Sess-16(4-8)
 * ses.c
 *
 * Created: 4/9/2024 2:19:51 AM
 *  Author: Ahmed
 

#include "Sess16/Task/ses.h"

int test_code()
{
	u8 counter = 0;
	//counter button
	DIO_setPinDir(DIO_PINA2,DIO_INPUT);
	DIO_setPullUp(DIO_PINA2);
	//reset button
	DIO_setPinDir(DIO_PINB6,DIO_INPUT);
	DIO_setPullUp(DIO_PINB6);
	//7-seg_set
	SS_init();
	while (1)
	{
		//When the counter button is pressed
		u8 counter_state = DIO_readPinValue(DIO_PINA2);
		if (counter_state==DIO_LOW)
		{
			counter++;
			while (DIO_readPinValue(DIO_PINA2)==DIO_LOW);
		}
		//When the reset button is pressed
		u8 reset_state = DIO_readPinValue(DIO_PINB6);
		if (reset_state==DIO_LOW)
		{
			counter=0;
		}
		switch(counter){
			case 0:
				//SS_writeNum();
				break;
			case 1:
				//SS_writeNum();
				break;
			case 2:
				//SS_writeNum();
				break;
			case 3:
				//SS_writeNum();
				break;
			case 4:
				//SS_writeNum();
				break;
			case 5:
				//SS_writeNum();
				break;
			case 6:
				//SS_writeNum();
				break;
			case 7:
				//SS_writeNum();
				break;
			case 8:
				//SS_writeNum();
				break;
			case 9:
				//SS_writeNum();
				break;
			case 10:
				//SS_writeNum();
				break;
			case 11:
				//SS_writeNum();
				break;
			case 12:
				//SS_writeNum();
				break;
			case 13:
				//SS_writeNum();
				break;
			case 14:
				//SS_writeNum();
				break;
			case 15:
				//SS_writeNum();
				break;
			default:
				break;
			}
	}
	return 0;
}
*/