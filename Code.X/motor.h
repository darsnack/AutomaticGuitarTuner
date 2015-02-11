/* 
 * File:   motor.h
 * Author: Kyle Daruwalla and Allison Pluger
 *
 * Created on February 11, 2015, 3:24 PM
 *
 * A complementary header file for motor.c
 */

#ifndef MOTOR_H
#define	MOTOR_H

#define COIL1 RA0
#define COIL2 RA1
#define COIL3 RA2
#define COIL4 RA3

void pulse(int coil);
void rotate(unsigned char direction, int steps);

#endif	/* MOTOR_H */

