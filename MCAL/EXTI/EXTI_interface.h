/*
 * EXIT_interface.h
 *
 *  Created on: Oct 13, 2023
 *      Author: hp
 */

#ifndef MINE_MCAL_EXTI_EXTI_INTERFACE_H_
#define MINE_MCAL_EXTI_EXTI_INTERFACE_H_


#define EXTI_LINE0  6
#define EXTI_LINE1  7
#define EXTI_LINE2  5

#define EXTI_FALLING_EDGE  0
#define EXTI_RISING_EDGE   1
#define EXTI_LOW_LEVEL     2
#define EXTI_ON_CHANGE     3



void EXTI_voidInit(void);

void EXTI_voidSeySignalLatch(u8 Copy_u8EXTI_SENSE_MODE,u8 Copy_u8EXTI_LINE);

void EXTI_voidEnable(u8 Copy_u8EXTI_LINE);
void EXTI_voidDisable(u8 Copy_u8EXTI_LINE);
void EXTI_voidClearFlag(u8 Copy_u8EXTI_LINE);
u8 EXTI_voidGetFlag(u8 Copy_u8EXTI_LINE);

void EXTI_voidSetCallBack(void(*Copy_voidCallBack)(void),u8 Copy_u8EXTI_LINE);




#endif /* MINE_MCAL_EXTI_EXTI_INTERFACE_H_ */
