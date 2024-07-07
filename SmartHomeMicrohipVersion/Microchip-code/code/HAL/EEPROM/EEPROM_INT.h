/*
 * EEPROM_INT.h
 *
 * Created: 5/29/2024 7:13:30 PM
 *  Author: ahmed
 */ 


#ifndef EEPROM_INT_H_
#define EEPROM_INT_H_

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

/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


/******************************************
  GLOBAL FUNCTIONS Prototypes
*******************************************/

void EEPROM_Init();

void EEPROM_SendByte(u8 byte,u16 location);

void EEPROM_ReadByteNACK(u8* byte,u16 location);

#endif /* EEPROM_INT_H_ */