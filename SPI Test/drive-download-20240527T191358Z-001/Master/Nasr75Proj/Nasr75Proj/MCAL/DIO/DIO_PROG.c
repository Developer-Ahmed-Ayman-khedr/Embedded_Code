/*
 * DIO_PROG.c
 *
 * Created: 08/04/2024 09:09:41 PM
 *  Author: AMIT
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_INT.h"


void DIO_setPinDir(u8 pinNum, u8 dir)
{
	//PORTA
	if(pinNum>=0 && pinNum<=7)
	{
		if(dir == DIO_INPUT)
		{
			CLEAR_BIT(DDRA, pinNum);
		}
		else if(dir == DIO_OUTPUT)
		{
			SET_BIT(DDRA, pinNum);
		}
	}
	//PORTB
	else if(pinNum>=8 && pinNum<=15)
	{
		pinNum = pinNum -8;
		if(dir == DIO_INPUT)
		{
			CLEAR_BIT(DDRB, pinNum);
		}
		else if(dir == DIO_OUTPUT)
		{
			SET_BIT(DDRB, pinNum);
		}
	}
	//PORTC
	else if(pinNum>=16 && pinNum<=23)
	{
		pinNum = pinNum -16;
		if(dir == DIO_INPUT)
		{
			CLEAR_BIT(DDRC, pinNum);
		}
		else if(dir == DIO_OUTPUT)
		{
			SET_BIT(DDRC, pinNum);
		}
	}
	//PORTD
	else if(pinNum>=24 && pinNum<=31)
	{
		pinNum = pinNum -24;
		if(dir == DIO_INPUT)
		{
			CLEAR_BIT(DDRD, pinNum);
		}
		else if(dir == DIO_OUTPUT)
		{
			SET_BIT(DDRD, pinNum);
		}
	}
}

void DIO_setPinValue(u8 pinNum, u8 level)
{
	//PORTA
	if(pinNum>=0 && pinNum<=7)
	{
		if(level == DIO_LOW)
		{
			CLEAR_BIT(PORTA, pinNum);
		}
		else if(level == DIO_HIGH)
		{
			SET_BIT(PORTA, pinNum);
		}
	}
	//PORTB
	else if(pinNum>=8 && pinNum<=15)
	{
		pinNum = pinNum -8;
		if(level == DIO_LOW)
		{
			CLEAR_BIT(PORTB, pinNum);
		}
		else if(level == DIO_HIGH)
		{
			SET_BIT(PORTB, pinNum);
		}
	}
	//PORTC
	else if(pinNum>=16 && pinNum<=23)
	{
		pinNum = pinNum -16;
		if(level == DIO_LOW)
		{
			CLEAR_BIT(PORTC, pinNum);
		}
		else if(level == DIO_HIGH)
		{
			SET_BIT(PORTC, pinNum);
		}
	}
	//PORTD
	else if(pinNum>=24 && pinNum<=31)
	{
		pinNum = pinNum -24;
		if(level == DIO_LOW)
		{
			CLEAR_BIT(PORTD, pinNum);
		}
		else if(level == DIO_HIGH)
		{
			SET_BIT(PORTD, pinNum);
		}
	}

}

u8 DIO_readPinValue(u8 pinNum)
{
	if(pinNum>=0 && pinNum<=7)
	{
		return GET_BIT(PINA, pinNum);
	}
	else if(pinNum>=8 && pinNum<=15)
	{
		pinNum = pinNum-8;
		return GET_BIT(PINB, pinNum);
	}
	else if(pinNum>=16 && pinNum<=23)
	{
		pinNum = pinNum-16;
		return GET_BIT(PINC, pinNum);
	}
	else if(pinNum>=24 && pinNum<=31)
	{
		pinNum = pinNum-24;
		return GET_BIT(PIND, pinNum);
	}
}


void DIO_setPullUp(u8 pinNum)
{
	DIO_setPinValue(pinNum, DIO_HIGH);
}

void DIO_togglePinValue(u8 pinNum)
{
	DIO_setPinValue(pinNum, !DIO_readPinValue(pinNum) );

}