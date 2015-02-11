/* 
 * File:   main.h
 * Author: Kyle Daruwalla and Allison Pluger
 *
 * Created on February 11, 2015, 2:49 PM
 *
 * A complementary header file for main.c.
 */

#ifndef MAIN_H
#define	MAIN_H

#define FLAT_LED RA4
#define IN_TUNE_LED RA5
#define SHARP_LED RE0
#define LOW_E_LED RA7
#define A_LED RA6
#define D_LED RC0
#define G_LED RC2
#define B_LED RC5
#define HIGH_E_LED RC6

void interrupt serviceInterrupts();

#endif	/* MAIN_H */

