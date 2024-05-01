/*
 * EXT_INT.h
 *
 * Created: 4/29/2024 12:14:23 AM
 *  Author: ahmed
 */ 


#ifndef EXT_INT_H_
#define EXT_INT_H_

#include "DIO_INT.h"

//Configuration

//PINS for Interrupt 0 and 2
#define MCUCR (*(volatile u8*)0x55)

//Interrupt 0
#define ISC00 0
#define ISC01 1

//Interrupt 1
#define ISC10 2
#define ISC11 3

////PINS for Interrupt 2
#define MCUCSR  (*(volatile u8*)0x54)

//Interrupt 2
#define ISC2 6

//Enable PINs
#define GICR (*(volatile u8*)0x5B)
#define INT0 6
#define INT1 7
#define INT2 5





 

#endif /* EXT_INT_H_ */