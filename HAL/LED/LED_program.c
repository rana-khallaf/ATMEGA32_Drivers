/*
 * LED_program.c
 *
 *  Created on: Oct 6, 2023
 *      Author: hp
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "LED_config.h"
#include "LED_interface.h"
#include "LED_private.h"
#include "DIO_interface.h"



void LED_voidInit(LED_TYPE Copy_LED_CONFIGURATION)
{
	DIO_voidSetPinDirection(Copy_LED_CONFIGURATION.port,Copy_LED_CONFIGURATION.pin,PIN_DIR_OUTPUT);
	}








void LED_voidLedOn(LED_TYPE Copy_LED_CONFIGURATION)
{
	if(Copy_LED_CONFIGURATION.ACTIVE_STATE==ACTIVE_HIGH)
	{
		DIO_voidSetPinValue(Copy_LED_CONFIGURATION.port,Copy_LED_CONFIGURATION.pin,PIN_VAL_HIGH);


	}
	else if(Copy_LED_CONFIGURATION.ACTIVE_STATE==ACTIVE_LOW)
	{
		DIO_voidSetPinValue(Copy_LED_CONFIGURATION.port,Copy_LED_CONFIGURATION.pin,PIN_VAL_LOW);

	}


}







void LED_voidLedOff(LED_TYPE Copy_LED_CONFIGURATION)
{
	if(Copy_LED_CONFIGURATION.ACTIVE_STATE==ACTIVE_HIGH)
		{
			DIO_voidSetPinValue(Copy_LED_CONFIGURATION.port,Copy_LED_CONFIGURATION.pin,PIN_VAL_LOW);


		}
		else if(Copy_LED_CONFIGURATION.ACTIVE_STATE==ACTIVE_LOW)
		{
			DIO_voidSetPinValue(Copy_LED_CONFIGURATION.port,Copy_LED_CONFIGURATION.pin,PIN_VAL_HIGH);

		}


}





void LED_voidLedToggle(LED_TYPE Copy_LED_CONFIGURATION)
{

  DIO_voidTogglePinValue(Copy_LED_CONFIGURATION.port,Copy_LED_CONFIGURATION.pin);

}
