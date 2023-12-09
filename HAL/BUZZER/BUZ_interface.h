/*
 * BUZ_interface.h
 *
 *  Created on: Oct 6, 2023
 *      Author: hp
 */

#ifndef MINE_HAL_BUZZER_BUZ_INTERFACE_H_
#define MINE_HAL_BUZZER_BUZ_INTERFACE_H_


#define ACTIVE_HIGH  1
#define ACTIVE_LOW   0


typedef struct
{
	u8 port;

	u8 pin;

	u8 ACTIVE_STATE ;


}BUZ_TYPE;


void BUZ_voidInit(BUZ_TYPE Copy__BUZ_CONFIGURATION);
void BUZ_voidBuzOn(BUZ_TYPE Copy_BUZ_CONFIGURATION);
void BUZ_voidBuzOff(BUZ_TYPE Copy_BUZ_CONFIGURATION);
void BUZ_voidBuzToggle(BUZ_TYPE Copy_BUZ_CONFIGURATION);




#endif /* MINE_HAL_BUZZER_BUZ_INTERFACE_H_ */
