/*
 * GIT_INT.h
 *
 * Created: 4/24/2024 7:49:02 PM
 *  Author: ahmed
 */ 


#ifndef GI_INT_H_
#define GI_INT_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_INT.h"

#define SREG (*(volatile u8*)0x5F)
#define I 7

void GI_enable();

void GI_desable();

#endif /* GI_INT_H_ */