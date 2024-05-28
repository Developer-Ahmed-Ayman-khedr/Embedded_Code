/*
 * SS_INT.h
 *
 * Created: 15/04/2024 07:39:26 PM
 *  Author: AMIT
 */ 


#ifndef SS_INT_H_
#define SS_INT_H_

#include "STD_TYPES.h"

//Config
#define SS_S0	DIO_PINA4 
#define SS_S1	DIO_PINA5 
#define SS_S2	DIO_PINA6 
#define SS_S3	DIO_PINA7
#define SS_ENABLE1	DIO_PINB1
#define SS_ENABLE2	DIO_PINB2


void SS_init();
void SS_writeNum(u8 num);


#endif /* SS_INT_H_ */