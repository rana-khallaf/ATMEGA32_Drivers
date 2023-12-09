/*
1 * EXIT_private.h
 *
 *  Created on: Oct 13, 2023
 *      Author: hp
 */

#ifndef MINE_MCAL_EXTI_EXTI_PRIVATE_H_
#define MINE_MCAL_EXTI_EXTI_PRIVATE_H_

/*THE TRIGGER REG OF INT0 & INT1 2BITS OF EACH INT WHICH GIVES 4 OPTIONS FOR EACH ONE*/
#define MCUCR_REG    *((volatile u8*)0x55)
#define MCUCR_REG_ISC00   0
#define MCUCR_REG_ISC01   1
#define MCUCR_REG_ISC10   2
#define MCUCR_REG_ISC11   3

/*THE TRIGGER REG OF INT2 1 BIT GIVES 2 OPTIONS */
#define MCUCSR_RED   *((volatile u8*)0x54)
#define MCUCSR_RED_ISC2    6

/* PREPRAL / GENERAL INTERRUPT CONTROL REGSTER */
#define GICR_RED     *((volatile u8*)0x5B)

#define GICR_INT1   7
#define GICR_INT0   6
#define GICR_INT2   5
/*GENERAL INTERRUPT FLAG  REGSTER*/
#define GIFR_RED     *((volatile u8*)0x5A)

#define NULL          0


#endif /* MINE_MCAL_EXTI_EXTI_PRIVATE_H_ */
