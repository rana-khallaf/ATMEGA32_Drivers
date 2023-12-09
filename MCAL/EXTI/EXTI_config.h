/*
  * EXIT_config.h
 *
 *  Created on: Oct 13, 2023
 *      Author: hp
 */

#ifndef MINE_MCAL_EXTI_EXTI_CONFIG_H_
#define MINE_MCAL_EXTI_EXTI_CONFIG_H_


/*INT OPTIONS
 *EXTI_LINE0
 *EXTI_LINE1
 *EXTI_LINE2
 * */

#define EXTI_LINE EXTI_LINE0

/*trigger options
 * EXTI_FALLING_EDGE
 * EXTI_RISING_EDGE
 * EXTI_LOW_LEVEL
 * EXTI_ON-CHANGE
 *
 * */

#define EXTI_SENSE_MODE  EXTI_FALLING_EDGE

#endif /* MINE_MCAL_EXTI_EXTI_CONFIG_H_ */
