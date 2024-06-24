/*
 * _7SEG_INT.h
 *
 * Created: 4/12/2024 8:30:38 PM
 *  Author: Ahmed
 */ 


#ifndef SS_INT_H_
#define SS_INT_H_

/******************************************
  INCLUDES
*******************************************/

#include "DIO_INT.h"

/******************************************
  Global Data TYPES AND STRUCTURES
*******************************************/


/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/

#define SS_S0 DIO_PINA4
#define SS_S1 DIO_PINA5
#define SS_S2 DIO_PINA6
#define SS_S3 DIO_PINA7

#define SS_ENABLE1 DIO_PINB2
#define SS_ENABLE2 DIO_PINB1

/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


/******************************************
  GLOBAL FUNCTIONS Prototypes
*******************************************/
//Initialize
void SS_init();

//Deinitialize
void SS_deinit();

//Send
void SS_writeNum(u8 num);

#endif /* SEVEN_SEG_INT_H_ */