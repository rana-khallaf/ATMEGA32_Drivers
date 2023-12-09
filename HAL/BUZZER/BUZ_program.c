/*
 * BUZ_program.c
 *
 *  Created on: Oct 6, 2023
 *      Author: hp
 */



#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "BUZ_config.h"
#include "BUZ_interface.h"
#include "BUZ_private.h"
#include "DIO_interface.h"



void BUZ_voidInit(BUZ_TYPE Copy_BUZ_CONFIGURATION)
{
	DIO_voidSetPinDirection(Copy_BUZ_CONFIGURATION.port,Copy_BUZ_CONFIGURATION.pin,PIN_DIR_OUTPUT);
	}








void BUZ_voidBuzOn(BUZ_TYPE Copy_BUZ_CONFIGURATION)
{
	if(Copy_BUZ_CONFIGURATION.ACTIVE_STATE==ACTIVE_HIGH)
	{
		DIO_voidSetPinValue(Copy_BUZ_CONFIGURATION.port,Copy_BUZ_CONFIGURATION.pin,PIN_VAL_HIGH);


	}
	else if(Copy_BUZ_CONFIGURATION.ACTIVE_STATE==ACTIVE_LOW)
	{
		DIO_voidSetPinValue(Copy_BUZ_CONFIGURATION.port,Copy_BUZ_CONFIGURATION.pin,PIN_VAL_LOW);

	}


}







void BUZ_voidBuzOff(BUZ_TYPE Copy_BUZ_CONFIGURATION)
{
	if(Copy_BUZ_CONFIGURATION.ACTIVE_STATE==ACTIVE_HIGH)
		{
			DIO_voidSetPinValue(Copy_BUZ_CONFIGURATION.port,Copy_BUZ_CONFIGURATION.pin,PIN_VAL_LOW);


		}
		else if(Copy_BUZ_CONFIGURATION.ACTIVE_STATE==ACTIVE_LOW)
		{
			DIO_voidSetPinValue(Copy_BUZ_CONFIGURATION.port,Copy_BUZ_CONFIGURATION.pin,PIN_VAL_HIGH);

		}


}





void BUZ_voidBuzToggle(BUZ_TYPE Copy_BUZ_CONFIGURATION)
{

  DIO_voidTogglePinValue(Copy_BUZ_CONFIGURATION.port,Copy_BUZ_CONFIGURATION.pin);

}
