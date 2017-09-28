/* ------------------------------------------------------------------------- */
/*
  GolfHandicapHelper.c
 
  Created: 20/09/2017 16:03:01
  Author : fille
 */ 
/* ------------------------------------------------------------------------- */

#include "lcd.h"
#include "hal.h"
#include <util/delay.h>
#define F_CPU 1000000UL



int main(void)
{
	initSystem();
	initLcd();
	
	while (1) {
		printLcdInt(1234, 1);
		printLcdChar("Filip", 2);
		_delay_ms(5000);
		clearLcd();
	}
	return 0;
}

