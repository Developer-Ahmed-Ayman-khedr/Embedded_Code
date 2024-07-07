/*
 * SPI_INT.h
 *
 * Created: 5/22/2024 8:11:46 PM
 *  Author: ahmed
 */ 


#ifndef SPI_INT_H_
#define SPI_INT_H_

/******************************************
  INCLUDES
*******************************************/

#include "DIO_INT.h"

/******************************************
  Global Data TYPES AND STRUCTURES
*******************************************/


/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/

/*SPI Registers*/
//SPI Control Register
#define SPCR   			(*((volatile u8 *)0x2D))
#define SPE  	6  //SPI Enable
#define MSTR	4 //Master & Slave Select

//SPI Status Register
#define SPSR   (*((volatile u8 *)0x2E))
#define SPIF	  7  //this Flag is set when receiving data

//SPI Data Register
#define SPDR  (*((volatile u8 *)0x2F))


//MASTER or Slave
typedef enum spi_mode{SPI_SLAVE,SPI_MASTER}SPI_MODE;

/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


/******************************************
  GLOBAL FUNCTIONS Prototypes
*******************************************/

void SPI_init(SPI_MODE mode);

u8 SPI_sendReceiveData(u8 data);

#endif /* SPI_INT_H_ */