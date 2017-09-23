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
	while (1)
	{
		set_cursorLcd(1,0);
		printLcdChar("person[1].name");
		set_cursorLcd(2,3);
		printLcdChar("Filip");
		_delay_ms(5000);
		clearLcd();
	}
	return 0;
}

