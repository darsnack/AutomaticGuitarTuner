/* 
 * File:   tuner.h
 * Author: Kyle Daruwalla and Allison Pluger
 *
 * Created on February 11, 2015, 2:53 PM
 *
 * A complementary header file for tuner.c.
 */

#ifndef TUNER_H
#define	TUNER_H

#include <xc.h>

#define PULSE_WIDTH 12500 // service output-capture every 50ms
#define FOSC 8
#define PRESCALER 8

#define LOW_E_LOW 12100 // in us
#define LOW_E_HIGH 12200 // in us
#define A_LOW 9040 // in us
#define A_HIGH 9140 // in us
#define D_LOW 6760 // in us
#define D_HIGH 6860 // in us
#define G_LOW 5052 // in us
#define G_HIGH 5152 // in us
#define B_LOW 3999 // in us
#define B_HIGH 4149 // in us
#define HIGH_E_LOW 2983 // in us
#define HIGH_E_HIGH 3083 // in us

void setupCapture();
void setupTuner();
void serviceCapture();
int serviceTuner();

#endif	/* TUNER_H */

