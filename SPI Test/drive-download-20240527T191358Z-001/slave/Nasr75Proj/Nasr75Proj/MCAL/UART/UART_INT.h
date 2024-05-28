/*
 * UART_INT_.h
 *
 * Created: 20/05/2024 07:27:31 PM
 *  Author: AMIT
 */ 


#ifndef UART_INTH_
#define UART_INTH_


#include "STD_TYPES.h"
#include "BIT_MATH.h"


/*UART Registers*/
#define UDR  	*((volatile u8*)(0x2C))

#define UCSRA  	*((volatile u8*)(0x2B))
#define RXC	    7
#define TXC	    6
#define UDRE	5
#define FE	    4
#define DOR	    3
#define PE	    2
#define U2X	    1
#define MPCM	0

#define UCSRB  				*((volatile u8*)(0x2A))
#define RXCIE	7
#define TXCIE	6
#define UDRIE	5
#define RXEN	4
#define TXEN	3
#define UCSZ2	2
#define RXB8	1
#define TXB8	0

#define UCSRC_UBRRH  		*((volatile u8*)(0x40)) //two reg. in a same address
#define URSEL		7		//set to 1 to use as UCSRC and 0 to use as UBRRH
#define UMSEL		6
#define UPM1		5
#define UPM0		4
#define USBS		3
#define UCSZ1		2
#define UCSZ0		1
#define UCPOL		0

#define UBRRL  	*((volatile u8*)(0x29))


#define UART_NOT_RECEIVE	'x'

void UART_init();
void UART_sendData(u8 data);
u8 UART_receiveData();


#endif /* UART_INT__H_ */