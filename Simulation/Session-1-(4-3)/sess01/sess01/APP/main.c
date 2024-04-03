/*
 * sess01.c
 *
 * Created: 4/3/2024 8:50:30 PM
 * Author : ahmed
 */ 
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
		_delay_ms(5000);
		CLEAR_BIT(*ptrPORTC,7);
		_delay_ms(5000);
    }
}

