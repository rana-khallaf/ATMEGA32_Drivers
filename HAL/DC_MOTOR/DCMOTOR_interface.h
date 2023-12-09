/*
 * DCMOTOR_interface.h
 *
 *  Created on: Oct 14, 2023
 *      Author: hp
 */

#ifndef MINE_HAL_DC_MOTOR_DCMOTOR_INTERFACE_H_
#define MINE_HAL_DC_MOTOR_DCMOTOR_INTERFACE_H_

//state options
#define DCMOTOR_CW 0
#define DCMOTOR_CCW 1
#define DCMOTOR_STOP 2


typedef struct{

	u8 Copy_u8DcMotorPort;
	u8 Copy_u8DcMotorPinA;
	u8 Copy_u8DcMotorPinB;


}DCMOTOR_CONFIFG;


void DCMOTOR_u8Control(DCMOTOR_CONFIFG Copy_structDcMotor,u8 Copy_u8State);

#endif /* MINE_HAL_DC_MOTOR_DCMOTOR_INTERFACE_H_ */
