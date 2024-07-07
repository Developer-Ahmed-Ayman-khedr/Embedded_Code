/*
 * SPI_PROG.c
 *
 * Created: 5/22/2024 8:12:18 PM
 *  Author: ahmed
 */ 

#include "SPI_INT.h"

void SPI_init(SPI_MODE mode)
{
	
	//if master
	if (mode==SPI_MASTER){
	//select master
	SET_BIT(SPCR,MSTR);
	
	//MOSI -> B5 -> OUTPUT
	DIO_setPinDir(DIO_PINB5,DIO_OUTPUT);
	//CLK -> B7 -> OUTPUT
	DIO_setPinDir(DIO_PINB7,DIO_OUTPUT);
	//MISO -> B6 -> INPUT
	DIO_setPinDir(DIO_PINB6,DIO_INPUT);
	//SS -> B4 -> OUTPUT
	DIO_setPinDir(DIO_PINB4,DIO_OUTPUT);
	}
	else //if slave
	if (mode==SPI_SLAVE){
	
	
	//select slave
	CLEAR_BIT(SPCR,MSTR);
	//MOSI -> B5 -> INPUT
	DIO_setPinDir(DIO_PINB5,DIO_INPUT);
	//CLK -> B7 -> INPUT
	DIO_setPinDir(DIO_PINB7,DIO_INPUT);
	//MISO -> B6 -> OUTPUT
	DIO_setPinDir(DIO_PINB6,DIO_OUTPUT);
	//SS -> B4 -> INPUT
	DIO_setPinDir(DIO_PINB4,DIO_INPUT);
	}
	
	//enable SPI
	SET_BIT(SPCR,SPE);
	
}

u8 SPI_sendReceiveData(u8 data)
{
	//refresh slave select
	//B4 -> HIGH
	//B4 -> LOW
	DIO_setPinValue(DIO_PINB4,DIO_HIGH);
	DIO_setPinValue(DIO_PINB4,DIO_LOW);
	
	//write data to the register
	SPDR = data;
	
	//wait flag until send
	while (GET_BIT(SPSR,SPIF)==DIO_LOW);
	
	//return the register data
	return SPDR;
}