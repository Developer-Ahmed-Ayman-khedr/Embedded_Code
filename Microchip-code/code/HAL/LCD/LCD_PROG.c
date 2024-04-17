/*
 * LCD_PROG.c
 *
 * Created: 4/17/2024 6:15:02 PM
 *  Author: ahmed
 */ 

#include "LCD_INT.h"

void LCD_int(){
	DIO_setPinDir(LCD_D4,DIO_OUTPUT);
	DIO_setPinDir(LCD_D5,DIO_OUTPUT);
	DIO_setPinDir(LCD_D6,DIO_OUTPUT);
	DIO_setPinDir(LCD_D7,DIO_OUTPUT);
	
	DIO_setPinDir(LCD_E,DIO_OUTPUT);
	DIO_setPinDir(LCD_RW,DIO_OUTPUT);
	DIO_setPinDir(LCD_RS,DIO_OUTPUT);
	
	LCD_sendCmd(0b00000010);
	_delay_ms(30);
	LCD_sendCmd(0b00101000);
	
	_delay_ms(1);
	LCD_sendCmd(0b00001111);
	
	_delay_ms(1);
	LCD_sendCmd(0b000000001);
	
	_delay_ms(2);
	LCD_sendCmd(0b00000110);
}

void LCD_sendData(u8 data){
	//RS = high -> data 
	//RW = low -> write
	DIO_setPinValue(LCD_RW,DIO_LOW);
	DIO_setPinValue(LCD_RS,DIO_HIGH);
	
	//High bits
	DIO_setPinValue(LCD_D4,GET_BIT(data,4));
	DIO_setPinValue(LCD_D5,GET_BIT(data,5));
	DIO_setPinValue(LCD_D6,GET_BIT(data,6));
	DIO_setPinValue(LCD_D7,GET_BIT(data,7));
	
	LCD_pulse();
	
	//Low bits
	DIO_setPinValue(LCD_D4,GET_BIT(data,0));
	DIO_setPinValue(LCD_D5,GET_BIT(data,1));
	DIO_setPinValue(LCD_D6,GET_BIT(data,2));
	DIO_setPinValue(LCD_D7,GET_BIT(data,3));
	
	LCD_pulse();
	
}

void LCD_sendCmd(u8 cmd){
	//RS and RW
	DIO_setPinValue(LCD_RW,DIO_LOW);
	DIO_setPinValue(LCD_RS,DIO_LOW);
	
	//High bits
	DIO_setPinValue(LCD_D4,GET_BIT(cmd,4));
	DIO_setPinValue(LCD_D5,GET_BIT(cmd,5));
	DIO_setPinValue(LCD_D6,GET_BIT(cmd,6));
	DIO_setPinValue(LCD_D7,GET_BIT(cmd,7));
	
	LCD_pulse();
	
	//Low bits
	DIO_setPinValue(LCD_D4,GET_BIT(cmd,0));
	DIO_setPinValue(LCD_D5,GET_BIT(cmd,1));
	DIO_setPinValue(LCD_D6,GET_BIT(cmd,2));
	DIO_setPinValue(LCD_D7,GET_BIT(cmd,3));
	
	LCD_pulse();
}

void LCD_clearDis(){
	LCD_sendCmd(0b00000001);
}


void LCD_pulse(){
	DIO_setPinValue(LCD_E,DIO_HIGH);
	_delay_ms(1);
	DIO_setPinValue(LCD_E,DIO_LOW);
}

void LCD_sendStr(u8* str){
	u8 i=0;
	while (str[i]!='\0')
	{
		LCD_sendData(str[i]);
		i++;
	}
	
}


void LCD_sendNum(s32 num){
	u8 arr_numbers[10] ;
	s8 i=0;
	//u32 remainder=0;
	
	if(num==0){
		LCD_sendData('0');
		return;
	}
	else if (num<0)
	{
		LCD_sendData('-');
	}
	else 
	
	while (num>0)
	{
		arr_numbers[i]=(num%10)+48;
		
		num=num/10;
		i++;
	}
	i--;
	while (i>=0)
	{
		LCD_sendData(arr_numbers[i]);
		i--;
	}
}

void LCD_sendFloatNum(f32 num){
	LCD_sendNum((s32)num);
	
	LCD_sendData('.');
	
	num = num - (u32) num;
	num = num * 1000;
	
	LCD_sendNum((u32)num);
}

void LCD_GoTo(u8 x, u8 line ){
	if (line==0)
	{
		LCD_sendCmd(0b10000000+x);
	}
	else if (line==1)
	{
		LCD_sendCmd(0b11000000+x);
	}
}
