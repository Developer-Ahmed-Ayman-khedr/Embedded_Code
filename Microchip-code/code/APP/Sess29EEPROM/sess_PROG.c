/*
 * sess_PROG.c
 *
 * Created: 5/29/2024 6:43:56 PM
 *  Author: ahmed
 */ 

#include "Sess29EEPROM/sess_INT.h"

int source_code()
{
	I2C_init(MASTER);
	//u8 RecevedData;
	while (1)
	{
		I2C_sendByte(1,0x5);
		_delay_ms(1000);
		I2C_sendByte(0,0x5);
		_delay_ms(1000);
		/*I2C_receiveByteACK(&RecevedData,0x1);
		
		if (RecevedData=='1')
		{
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
		}
		else if (RecevedData=='f')
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
		}*/
	}
	return 0;
}