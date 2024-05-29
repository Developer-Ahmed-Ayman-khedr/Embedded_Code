/*
 * sess_PROG.c
 *
 * Created: 5/29/2024 6:43:56 PM
 *  Author: ahmed
 

#include "Sess29EEPROM/sess_INT.h"

int source_code()
{
	EEPROM_Init();
	DIO_setPinDir(DIO_PINC6,DIO_OUTPUT);
	u8 RecevedData = 0;
	EEPROM_SendByte(1,0x1);
	while (1)
	{
		_delay_ms(1000);
		EEPROM_ReadByteNACK(&RecevedData,0x1);
		_delay_ms(1000);
		if (RecevedData==1)
		{
			DIO_togglePinValue(DIO_PINC6);
		}
	}
	return 0;
}
*/ 