/*
 * LM35_interface.h
 *
 *  Created on: Nov 1, 2023
 *      Author: hp
 */

#ifndef MINE_HAL_LM35_LM35_INTERFACE_H_
#define MINE_HAL_LM35_LM35_INTERFACE_H_


typedef struct
{
	u8 Copy_u8LM35Channel;
	u8 Copy_u8ADCVoltageRefrence;


}LM35_CONFIG;

u8 LM35_voidGetTemp(LM35_CONFIG *LM35,u8 * Copy_TempValue);

#endif /* MINE_HAL_LM35_LM35_INTERFACE_H_ */
