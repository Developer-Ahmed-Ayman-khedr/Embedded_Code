/*
 * SPI_INT.c
 *
 * Created: 22/05/2024 04:02:07 PM
 *  Author: AMIT
 */ 

#ifndef SPI_INT_H_
#define SPI_INT_H_

#include "BIT_MATH.h"
#include "STD_TYPES.h"


/*SPI Registers*/
//SPI Control Register
#define SPCR   			(*((volatile u8 *)0x2D))
#define SPE  	6  //SPI Enable
#define MSTR	4	//master/slave select
#define SPR0 0
#define SPR1 1

//SPI Status Register
#define SPSR   (*((volatile u8 *)0x2E))
#define SPIF	  7  //this Flag is set when receiving data 

//SPI Data Register
#define SPDR  (*((volatile u8 *)0x2F))


typedef enum spi_mode
{
	SPI_SLAVE,
	SPI_MASTER	
}SPI_MODE;


void SPI_init(SPI_MODE mode);

u8 SPI_sendReceiveData(u8 data);





#endif /* SPI_INT_H_ */