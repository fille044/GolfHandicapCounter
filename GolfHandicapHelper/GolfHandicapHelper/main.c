/*
 * GolfHandicapHelper.c
 *
 * Created: 20/09/2017 16:03:01
 * Author : fille
 */ 

#include "hal.h"
#include <util/delay.h>
#define F_CPU 1000000UL


int main(void)
{
	DDRD = 0xFF;
	DDRB = 0xFF;
	_delay_ms(50);
	initLcd();
	char bacon[] = "Bacon is good";
	char Ebba[] = "Ebba";
	while (1)
	{
		set_cursorLcd(1,1);
		printLcd(bacon);
		set_cursorLcd(2,1);
		printLcd(Ebba);
		_delay_ms(5000);
		clearLcd();
		//control();
		if (isButtonNoPressed_C(5) == TRUE) {
			turnOnNo_B(0);
		}
		else {
			turnOffNo_B(0);
		}
	}
	return 0;
}

