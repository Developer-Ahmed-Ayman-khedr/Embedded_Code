/*
 * sess_PROG.c
 *
 * Created: 5/22/2024 5:48:59 PM
 *  Author: ahmed
 */ 

#include "Sess27SPI/sess_INT.h"

int source_code()
{
	UART_init();
	
	LCD_init();
	
	KPD_init();
	
	u8 UART_RecevedData, KPD_RecevedData, Saved_Pass[4] = {'1','2','3','4'}, Entered_Pass[4], i=0, flage=0;
	while (1)
	{
		UART_RecevedData = UART_receiveData();
		KPD_RecevedData = KPD_read();
		if (UART_RecevedData!=UART_NOT_RECEIVE || KPD_RecevedData!=KPD_UNPRESSED)
		{
			while(KPD_read()!=KPD_UNPRESSED);
			if (KPD_RecevedData!=KPD_UNPRESSED)
			{
				LCD_sendNum(KPD_RecevedData-48);
				Entered_Pass[i] = KPD_RecevedData;
			}
			else if (UART_RecevedData!=UART_NOT_RECEIVE)
			{
				LCD_sendNum(UART_RecevedData-48);
				Entered_Pass[i] = UART_RecevedData;
			}
			i++;
		}
		if (i==4)
		{
			u8 i2;
			for (i2=0; i2<4; i2++)
			{
				if (Entered_Pass[i2]==Saved_Pass[i2])
				{
					flage = 1;
					
				}
				else
				{
					flage = 0;
				}
			}
			if (flage==1)
			{
				LCD_clearDis();
				LCD_sendStr("Welcome");
				UART_sendStr("Welcome");
			}
			else
			{
				LCD_clearDis();
				LCD_sendStr("Wrong Password");
				UART_sendStr("Wrong Password");
			}
			i = 0;
		}
		
	}
	return 0;
}