/*
 * LCD_PROG.c
 *
 * Created: 17/04/2024 06:13:07 PM
 *  Author: AMIT
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_INT.h"
#include "LCD_INT.h"

#define F_CPU 16000000UL
#include <util/delay.h>

void LCD_init()
{
	DIO_setPinDir(LCD_D4, DIO_OUTPUT);
	DIO_setPinDir(LCD_D5, DIO_OUTPUT);
	DIO_setPinDir(LCD_D6, DIO_OUTPUT);
	DIO_setPinDir(LCD_D7, DIO_OUTPUT);
	
	DIO_setPinDir(LCD_RS, DIO_OUTPUT);
	DIO_setPinDir(LCD_RW, DIO_OUTPUT);
	DIO_setPinDir(LCD_E, DIO_OUTPUT);	
	
	_delay_ms(30);
	LCD_sendCmd(0b00000010);
	LCD_sendCmd(0b00101000);
	_delay_ms(1);
	LCD_sendCmd(0b00001111);
	_delay_ms(1);
	LCD_sendCmd(0b00000001);
	_delay_ms(2);
	LCD_sendCmd(0b00000110);
}

void LCD_sendData(u8 data)
{
	DIO_setPinValue(LCD_RW, DIO_LOW);
	DIO_setPinValue(LCD_RS,DIO_HIGH);
	
	DIO_setPinValue(LCD_D4, GET_BIT(data,4));
	DIO_setPinValue(LCD_D5, GET_BIT(data,5));
	DIO_setPinValue(LCD_D6, GET_BIT(data,6));
	DIO_setPinValue(LCD_D7, GET_BIT(data,7));
	
	LCD_pulse();
	////////////
	DIO_setPinValue(LCD_D4, GET_BIT(data,0));
	DIO_setPinValue(LCD_D5, GET_BIT(data,1));
	DIO_setPinValue(LCD_D6, GET_BIT(data,2));
	DIO_setPinValue(LCD_D7, GET_BIT(data,3));
	
	LCD_pulse();
	

}

void LCD_sendCmd(u8 cmd)
{
	DIO_setPinValue(LCD_RW, DIO_LOW);
	DIO_setPinValue(LCD_RS,DIO_LOW);
	
	DIO_setPinValue(LCD_D4, GET_BIT(cmd,4));
	DIO_setPinValue(LCD_D5, GET_BIT(cmd,5));
	DIO_setPinValue(LCD_D6, GET_BIT(cmd,6));
	DIO_setPinValue(LCD_D7, GET_BIT(cmd,7));
	
	LCD_pulse();
	////////////
	DIO_setPinValue(LCD_D4, GET_BIT(cmd,0));
	DIO_setPinValue(LCD_D5, GET_BIT(cmd,1));
	DIO_setPinValue(LCD_D6, GET_BIT(cmd,2));
	DIO_setPinValue(LCD_D7, GET_BIT(cmd,3));
	
	LCD_pulse();
}

void LCD_clearDis()
{
	LCD_sendCmd(0b00000001);
}

void LCD_pulse()
{
	DIO_setPinValue(LCD_E, DIO_HIGH);
	_delay_ms(1);
	DIO_setPinValue(LCD_E, DIO_LOW);
}


void LCD_sendStr(u8* str)
{
	u8 i=0;
	while(str[i]!='\0')
	{
		LCD_sendData(str[i]);
		i++;
	}
}

void LCD_sendNum(s32 num)
{
	if(num == 0)
	{
		LCD_sendData('0');
		return;
	}
	//for negative numbers
	if(num < 0)
	{
		LCD_sendData('-');
		num = num * -1;
	}
	
	u8 i =0;
	u8 arr[16];
	//caculate the number of digits and put every digit in a an array
	while(num != 0)
	{
		//48 used as the ascii of zero start from 48
		arr[i] = (num%10) + 48;
		i++;
		num = num/10;
	}

	//write all digits
	s8 k;
	for(k=i-1; k>=0; k--)
	{
		LCD_sendData(arr[k]);
	}
}

void LCD_sendFloatNum (f32 num)
{
	LCD_sendNum((s32)num);
	
	LCD_sendData('.');
	
	f32 no = num - (s32) num;
	
	no = no * 1000;
	
	LCD_sendNum((s32)no);
}



void LCD_goto(u8 x, u8 y)
{
	if(y == 0)
	{
		//line 1
		LCD_sendCmd(0b10000000 + x);
	}
	else if( y == 1)
	{
		//line 2
		LCD_sendCmd(0b10000000 + 0x40 +  x );
	}
	
}

void LCD_createNewChar(const u8* Arr, u8 CharLocation)
{
	//<8 as you can not store more than 8 new char
	if(CharLocation<8)
	{
		//0x40 from the datasheet
		//*8 as each char take 8 bytes(from datasheet)
		LCD_sendCmd(0x40 + (CharLocation*8));

		for(u8 i=0; i<8; i++)
		{
			LCD_sendData(Arr[i]);
		}
		LCD_goto(0,0);//must set location to any place after make a custom character
	}

}

void LCD_sendNewChar(u8 CharLocation)
{
	LCD_sendData(CharLocation);
}