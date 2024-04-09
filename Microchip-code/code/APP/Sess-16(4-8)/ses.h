/*
 * ses.h
 *
 * Created: 4/4/2024 12:46:32 PM
 *  Author: ahmed
 */ 


#ifndef SES_H_
#define SES_H_


#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_INT.h"
#define F_CPU 16000000UL
#include<util/delay.h>

int main(void)
{
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINB2,DIO_INPUT);
	DIO_setPullUp(DIO_PINB2);
	while (1)
	{
		/*DIO_setPinValue(DIO_PINC2,DIO_HIGH);
		_delay_ms(500);
		DIO_setPinValue(DIO_PINC2,DIO_LOW);
		_delay_ms(500);*/
		//u8 state = DIO_readPinValue(DIO_PINB2);
	//	if (state== DIO_HIGH)
		//{
			
			//DIO_togglePinValue(DIO_PINB2);
		//}
		 if (DIO_readPinValue(DIO_PINB2) == DIO_LOW)
		 {
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
			//DIO_togglePinValue(DIO_PINB2);
			_delay_ms(500);
		}
		DIO_setPinValue(DIO_PINC2,DIO_LOW);
	}
}

#endif /* SES_H_ */