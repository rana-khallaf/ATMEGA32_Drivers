/*
 * SW_interface.h
 *
 *  Created on: Oct 12, 2023
 *      Author: hp
 */

#ifndef MINE_HAL_SWITCH_SW_INTERFACE_H_
#define MINE_HAL_SWITCH_SW_INTERFACE_H_

#define SW_NOT_PRESSED 0
#define SW_PRESSED     1

//options of states
#define SW_INT_PULL_UP  0
#define SW_EXT_PULL_UP  1
#define SW_EXT_PULL_DOWN  2
#define SW_FLOATING     3

typedef struct
{
 u8  port;
 u8  pin;
 u8  state;


}SW_Type;

void SW_voidInit(SW_Type SW_Config);
u8 SW_u8GetPressed(SW_Type SW_Config);


#endif /* MINE_HAL_SWITCH_SW_INTERFACE_H_ */
