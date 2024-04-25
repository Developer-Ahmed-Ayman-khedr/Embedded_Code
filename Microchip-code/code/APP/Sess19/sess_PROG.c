/*
 * sess_PROG.c
 *
 * Created: 4/22/2024 7:11:58 PM
 *  Author: ahmed
 

#include "Sess19/sess_INT.h"

int source_code()
{
	KPD_init();
	LCD_init();
	
	u8 key;
	while (1)
	{
		key = KPD_read();
		if (key!=KPD_UNPRESSED)
		{
			while(KPD_read()!=KPD_UNPRESSED);
			LCD_sendData(key);
		}
		if (key=='c')
		{
			LCD_clearDis();
		}
	}
	return 0;
}
*/