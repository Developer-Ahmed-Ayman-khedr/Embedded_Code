/*
 * SPI_PROG.c
 *
 * Created: 22/05/2024 04:02:07 PM
 *  Author: AMIT
 */ 

#include "SPI_INT.h"
#include "DIO_INT.h"

void SPI_init(SPI_MODE mode)
{
	//select master or slave with #if
	if(mode == SPI_MASTER)
	{
		//if master
		//select master
		SET_BIT(SPCR,MSTR);
		
		//MOSI -> B5 -> OUTPUT
		DIO_setPinDir(DIO_PINB5, DIO_OUTPUT);
		//CLK -> B7 -> OUTPUT
		DIO_setPinDir(DIO_PINB7, DIO_OUTPUT);
		//MISO -> B6 -> INPUT
		DIO_setPinDir(DIO_PINB6, DIO_INPUT);
		//SS -> B4 -> OUTPUT
		DIO_setPinDir(DIO_PINB4, DIO_OUTPUT);
		
		//clk:
		SET_BIT(SPCR,SPR0);
		SET_BIT(SPCR,SPR1);
	}
	else if(mode == SPI_SLAVE)
	{
		//if slave
		//select slave
		CLEAR_BIT(SPCR,MSTR);
		
		//MOSI -> B5 -> INPUT
		DIO_setPinDir(DIO_PINB5, DIO_INPUT);
		//CLK -> B7 -> INPUT
		DIO_setPinDir(DIO_PINB7, DIO_INPUT);
		//MISO -> B6 -> OUTPUT
		DIO_setPinDir(DIO_PINB6, DIO_OUTPUT);
		//SS -> B4 -> INPUT
		DIO_setPinDir(DIO_PINB4, DIO_INPUT);
		
	}
	
	//enable SPI
	SET_BIT(SPCR,SPE);
}

u8 SPI_sendReceiveData(u8 data)
{		
	//write data to the register
	SPDR = data;
	//wait flag until send
	while((GET_BIT(SPSR,SPIF)) == 0);
	
	//return the register data
	return SPDR;
}