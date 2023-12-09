/*
 * STEPPER_interface.h
 *
 *  Created on: Oct 14, 2023
 *      Author: hp
 */

#ifndef MINE_HAL_STEPPER_MOTOR_STEPPER_INTERFACE_H_
#define MINE_HAL_STEPPER_MOTOR_STEPPER_INTERFACE_H_

#define STEPPER_FULL_STEP  0
#define STEPPER_HALF_STEP  1


#define STEPPER_CLOCK_WISE 0
#define STEPPER_COUNTER_CLOCK_WISE 1


void STEPPER_voidInit(void);
void STEPPER_voidOff(void);
void STEPPER_voidOn();




#endif /* MINE_HAL_STEPPER_MOTOR_STEPPER_INTERFACE_H_ */
