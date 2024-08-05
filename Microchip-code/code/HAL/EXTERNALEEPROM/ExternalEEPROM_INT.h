/*
 * EXTERNALEEPROM_INT.h
 *
 * Created: 5/29/2024 7:13:30 PM
 *  Author: ahmed
 */ 


#ifndef EXTERNALEEPROM_INT_h
#define EXTERNALEEPROM_INT_h

/******************************************
  INCLUDES
*******************************************/

#include "DIO_INT.h"

#include "I2C_INT.h"

/******************************************
  Global Data TYPES AND STRUCTURES
*******************************************/


/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/

//Enable ENTERNALEEPROM
/*if ENTERNALEEPROM == 0x0 then it is disabled.*/

/*if ENTERNALEEPROM == 0x1 then it is enabled.*/
#define ENTERNALEEPROM 0x1

/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


/******************************************
  GLOBAL FUNCTIONS Prototypes
*******************************************/

#if (EXTERNALEEPROM==0x1)

void ENTERNALEEPROM_Init();

void ENTERNALEEPROM_SendByte(u8 byte,u16 location);

void ENTERNALEEPROM_ReadByteNACK(u8* byte,u16 location);

#endif

#endif /* EXTERNALEEPROM_INT_h */