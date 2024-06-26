/*
 * KPD_INT.h
 *
 * Created: 22/04/2024 06:45:15 PM
 *  Author: AMIT
 */ 


#ifndef KPD_INT_H_
#define KPD_INT_H_

#include "STD_TYPES.h"
#include "DIO_INT.h"

#define KPD_ROW0	DIO_PINB4
#define KPD_ROW1	DIO_PINB5
#define KPD_ROW2	DIO_PINB6
#define KPD_ROW3	DIO_PINB7

#define KPD_COL0	DIO_PINC3
#define KPD_COL1	DIO_PINC4
#define KPD_COL2	DIO_PINC5
#define KPD_COL3	DIO_PINC6


#define KPD_ROW0_COL0	'7'
#define KPD_ROW0_COL1	'8'
#define KPD_ROW0_COL2	'9'
#define KPD_ROW0_COL3	'/'

#define KPD_ROW1_COL0	'4'
#define KPD_ROW1_COL1	'5'
#define KPD_ROW1_COL2	'6'
#define KPD_ROW1_COL3	'*'

#define KPD_ROW2_COL0	'1'
#define KPD_ROW2_COL1	'2'
#define KPD_ROW2_COL2	'3'
#define KPD_ROW2_COL3	'-'


#define KPD_ROW3_COL0	'c'
#define KPD_ROW3_COL1	'0'
#define KPD_ROW3_COL2	'='
#define KPD_ROW3_COL3	'+'

#define KPD_UNPRESSED	'x'



void KPD_init();
u8 KPD_read();



#endif /* KPD_INT_H_ */