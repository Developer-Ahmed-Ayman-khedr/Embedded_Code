/*
 * WDT_INT.h
 *
 * Created: 15/05/2024 07:26:44 PM
 *  Author: AMIT
 */ 


#ifndef WDT_INT_H_
#define WDT_INT_H_

#include "STD_TYPES.h"

#define WDTCR *(volatile u8*)0x41
#define WDP0		0
#define WDP1		1
#define WDP2		2
#define WDE			3
#define WDTOE		4


#define WDT_TIME0	0
#define WDT_TIME1	1
#define WDT_TIME2	2
#define WDT_TIME3	3
#define WDT_TIME4	4
#define WDT_TIME5	5
#define WDT_TIME6	6
#define WDT_TIME7	7

void WDT_start(u8 time);

void WDT_stop();




#endif /* WDT_INT_H_ */