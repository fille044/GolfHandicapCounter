/* ------------------------------------------------------------------------- */
/*
  hal.c
 
  Created: 21/09/2017 18:50:24
   Author: fille
 */ 
/* ------------------------------------------------------------------------- */

#include <avr/io.h>

#include "hal.h"
#include "lcd.h"

#include <util/delay.h>
#define F_CPU 1000000UL


/* ------------------------------------------------------------------------- */
/*
	Initiates sytem
*/
/* ------------------------------------------------------------------------- */
void initSystem(void)
{
	DDRD = 0xFF;
	DDRB = 0xFF;
	_delay_ms(50);

}


/* ------------------------------------------------------------------------- */
/*
	Checks if button is pressed.
	\returns TRUE or FALSE
*/
/* ------------------------------------------------------------------------- */
int isButtonNoPressed_C(int No)
{
	switch (No) {
		case 0: 
			if ((PINC & (1<<PC0)) == 0) {
				return TRUE;
			}
			else {
				return FALSE;
			}
			break;
			
		case 1:
			if ((PINC & (1<<PC1)) == 0) {
				return TRUE;
			}
			else {
				return FALSE;
			}
			break;
			
		case 2:
			if ((PINC & (1<<PC2)) == 0) {
				return TRUE;
			}
			else {
				return FALSE;
			}
			break;
			
		case 3:
			if ((PINC & (1<<PC3)) == 0) {
				return TRUE;
			}
			else {
				return FALSE;
			}
			break;
			
		case 4:
		if ((PINC & (1<<PC4)) == 0) {
			return TRUE;
		}
		else {
			return FALSE;
		}
		break;
		
		case 5:
		if ((PINC & (1<<PC5)) == 0) {
			return TRUE;
		}
		else {
			return FALSE;
		}
		break;
		
		case 6:
		if ((PINC & (1<<PC6)) == 0) {
			return TRUE;
		}
		else {
			return FALSE;
		}
		break;

		default:
			return FALSE;
	}
}


/* ------------------------------------------------------------------------- */
/*
	Turns on PBX, where X is the input given to function
*/
/* ------------------------------------------------------------------------- */
void turnOnNo_B(int No)
{
	switch (No) {
		case 0:
			PB0_ON;
		case 1: 
			PB1_ON;
		case 2: 
			PB2_ON;
		case 3:
			PB3_ON;
		case 4:
			PB4_ON;
		case 5:
			PB5_ON;
		case 6:
			PB6_ON;
		case 7:
			PB7_ON;
	}
}


/* ------------------------------------------------------------------------- */
/*
	Turns off PBX, where X is the input given to function
*/
/* ------------------------------------------------------------------------- */
void turnOffNo_B(int No)
{
	switch (No) {
		case 0:
			PB0_OFF;
		case 1:
			PB1_OFF;
		case 2:
			PB2_OFF;
		case 3:
			PB3_OFF;
		case 4:
			PB4_OFF;
		case 5:
			PB5_OFF;
		case 6:
			PB6_OFF;
		case 7:
			PB7_OFF;
	}
}