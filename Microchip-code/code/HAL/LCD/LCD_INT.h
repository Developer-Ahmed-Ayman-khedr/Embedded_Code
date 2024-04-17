/*
 * LCD_INT.h
 *
 * Created: 4/17/2024 6:14:47 PM
 *  Author: ahmed
 */ 


#ifndef LCD_INT_H_
#define LCD_INT_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_INT.h"
#include "SS_INT.h"

//configuration
#define LCD_D0 DIO_PIN
#define LCD_D1 DIO_PIN
#define LCD_D2 DIO_PIN
#define LCD_D3 DIO_PIN

#define LCD_D4 DIO_PINA4
#define LCD_D5 DIO_PINA5
#define LCD_D6 DIO_PINA6
#define LCD_D7 DIO_PINA7

#define LCD_E  DIO_PINB3
#define LCD_RS DIO_PINB1
#define LCD_RW DIO_PINB2
//end configuration

#define LCD_CLEAR_DIS 0b
#define LCD_SHIFT_DIS 0b

void LCD_int();

void LCD_sendData(u8 data);

void LCD_sendCmd(u8 cmd);

void LCD_clearDis();

void LCD_pulse();

void LCD_sendStr(u8* str);

void LCD_sendNum(s32 num);

void LCD_sendFloatNum(f32 num);

void LCD_GoTo(u8 x, u8 y );

#endif /* LCD_INT_H_ */