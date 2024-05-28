/*
 * LCD_INT.h
 *
 * Created: 17/04/2024 06:12:51 PM
 *  Author: AMIT
 */ 


#ifndef LCD_INT_H_
#define LCD_INT_H_

#include "STD_TYPES.h"
#include "DIO_INT.h"

//config
#define LCD_D4	DIO_PINA4
#define LCD_D5	DIO_PINA5
#define LCD_D6	DIO_PINA6
#define LCD_D7	DIO_PINA7

#define LCD_E	DIO_PINB3
#define LCD_RS	DIO_PINB1
#define LCD_RW	DIO_PINB2
//////////////////////////////////////

#define LCD_CLEAR_DIS	0b
#define LCD_SHIFT_DIS	0b

void LCD_init();
void LCD_sendData(u8 data);
void LCD_sendCmd(u8 cmd);
void LCD_clearDis();
void LCD_pulse();
void LCD_sendStr(u8* str);
void LCD_sendNum(s32 num);
void LCD_sendFloatNum (f32 num);
void LCD_createNewChar(const u8* Arr, u8 CharLocation);
void LCD_sendNewChar(u8 CharLocation);

#endif /* LCD_INT_H_ */