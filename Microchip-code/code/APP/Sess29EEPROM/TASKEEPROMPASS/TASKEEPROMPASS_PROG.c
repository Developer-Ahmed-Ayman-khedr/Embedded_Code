/*
 * TASKEEPROMPASS_PROG.c
 *
 * Created: 5/29/2024 9:38:40 PM
 *  Author: ahmed
 

#include "Sess29EEPROM/TASKEEPROMPASS/TASKEEPROMPASS_INT.h"

int source_code()
{
	UART_init();
	
	LCD_init();
	
	KPD_init();
	
	EEPROM_Init();
	
	BOOL flage=FALSE,EEPROM_flage = FALSE,Save_flage = FALSE;
	u8 UART_RecevedData, KPD_RecevedData, Entered_Pass[4], i = 0, i2 = 0, EEPROMRecevedData;
	
	while (1)
	{
		while (i2<4)
		{
			_delay_ms(1000);
			EEPROM_ReadByteNACK(&EEPROMRecevedData,i2);
			if (EEPROMRecevedData!=255)
			{
				EEPROM_flage = TRUE;
			}
			else
			{
				EEPROM_flage = FALSE;
			}
			i2++;
		}
		
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
			if (EEPROM_flage==FALSE)
			{
				i2 = 0;
				while (i2<4)
				{
					_delay_ms(1000);
					EEPROM_SendByte(Entered_Pass[i2],i2);
					i2++;
				}
				Save_flage = TRUE;
			}
			if (EEPROM_flage==TRUE){
				i2 = 0;
				while ( i2<4)
				{
					_delay_ms(1000);
					EEPROM_ReadByteNACK(&EEPROMRecevedData,i2);
					if (Entered_Pass[i2]==EEPROMRecevedData)
					{
						flage = TRUE;
					}
					else
					{
						flage = FALSE;
					}
					i2++;
				}
			}
			
			if (Save_flage==FALSE)
			{
				if (flage==TRUE)
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
			}
			i = 0;
		}
	}
	return 0;
}
*/ 