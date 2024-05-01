/*
 * KPD_INT.h
 *
 * Created: 4/28/2024 8:39:13 PM
 *  Author: ahmed
 */ 


#ifndef KPD_INT_H_
#define KPD_INT_H_

#include "DIO_INT.h"

//PIN Configuration

//Rows
#define KPD_ROW0 DIO_PINB4
#define KPD_ROW1 DIO_PINB5
#define KPD_ROW2 DIO_PINB6
#define KPD_ROW3 DIO_PINB7

//Columns
#define KPD_COL0 DIO_PINC3
#define KPD_COL1 DIO_PINC4
#define KPD_COL2 DIO_PINC5
#define KPD_COL3 DIO_PINC6

//Buttons
//Row 0
#define KPD_ROW0_COL0 '7'
#define KPD_ROW0_COL1 '8'
#define KPD_ROW0_COL2 '9'
#define KPD_ROW0_COL3 '/'

//Row 1
#define KPD_ROW1_COL0 '4'
#define KPD_ROW1_COL1 '5'
#define KPD_ROW1_COL2 '6'
#define KPD_ROW1_COL3 '*'

//Row 2
#define KPD_ROW2_COL0 '1'
#define KPD_ROW2_COL1 '2'
#define KPD_ROW2_COL2 '3'
#define KPD_ROW2_COL3 '-'

//Row 3
#define KPD_ROW3_COL0 'c'
#define KPD_ROW3_COL1 '0'
#define KPD_ROW3_COL2 '='
#define KPD_ROW3_COL3 '+'

//Unpressed
#define KPD_UNPRESSED 'x'

//END Configuration

//Function Prototyping

void KPD_INIT();

u8 KPD_read();

#endif /* KPD_INT_H_ */