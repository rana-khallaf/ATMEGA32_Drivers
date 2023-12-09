/*
 * LED_interface.h
 *
 *  Created on: Oct 6, 2023
 *      Author: hp
 */

#ifndef MINE_HAL_LED_LED_INTERFACE_H_
#define MINE_HAL_LED_LED_INTERFACE_H_

#define ACTIVE_HIGH  1
#define ACTIVE_LOW   0


typedef struct
{
	u8 port;

	u8 pin;

	u8 ACTIVE_STATE ;


}LED_TYPE;


void LED_voidInit(LED_TYPE Copy_LED_CONFIGURATION);
void LED_voidLedOn(LED_TYPE Copy_LED_CONFIGURATION);
void LED_voidLedOff(LED_TYPE Copy_LED_CONFIGURATION);
void LED_voidLedToggle(LED_TYPE Copy_LED_CONFIGURATION);




#endif /* MINE_HAL_LED_LED_INTERFACE_H_ */
