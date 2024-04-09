/*
 * Sess 15 (4-3)
  *ses.h
 *
 * Created: 4/4/2024 12:46:32 PM
 *  Author: ahmed
 */ 


#ifndef SES_H_
#define SES_H_


#include "BIT_MATH.h"
#include "STD_TYPES.h"
#define F_CPU 16000000UL
#include<util/delay.h>

int main(void)
{
	u8* ptrDDRC = (u8*)0x34;
	u8* ptrPORTC = (u8*)0x35;
	SET_BIT(*ptrDDRC,7);
	while (1)
	{
		SET_BIT(*ptrPORTC,7);
		_delay_ms(2000);
		CLEAR_BIT(*ptrPORTC,7);
		_delay_ms(2000);
	}
}



#endif /* SES_H_ */