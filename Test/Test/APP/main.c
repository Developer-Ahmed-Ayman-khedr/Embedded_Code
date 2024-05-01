/*
 * Test.c
 *
 * Created: 4/28/2024 8:25:45 PM
 * Author : ahmed
 */ 

#include "DIO_INT.h"
#include "KPD_INT.h"
#include "LCD_INT.h"

int main(void)
{
	LCD_init();
	KPD_INIT();
	u8 state;
    /* Replace with your application code */
    while (1) 
    {
		state = KPD_read();
		if (state!=KPD_UNPRESSED)
		{
			LCD_sendData(state);
			while(KPD_read()!=KPD_UNPRESSED);
		}
    }
}

