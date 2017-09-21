/*
 * lcd.c
 *
 * Created: 21/09/2017 20:22:17
 *  Author: fille
 */ 


/*	RS PB1
	E  PB2
	D0 PD0
	D1 PD1
	D2 PD2
	D3 PD3
	D4 PD4
	D5 PD5
	D6 PD6
	D7 PD7
*/

#include "hal.h"
#include <util/delay.h>

#define F_CPU 1000000UL


/* ------------------------------------------------------------------------- */
/*
	Performs the actions needed to send data 
*/
/* ------------------------------------------------------------------------- */
void send_it(void) 
{
	ENABLE;
	_delay_us(500);
	DISABLE;
	_delay_us(500);
}


/* ------------------------------------------------------------------------- */
/*
	Prints the characters given from input to function
*/
/* ------------------------------------------------------------------------- */
void printLcd(char *input) 
{
	RS_SIGN;	
	int a = strlen(input); 
	for (int ix = 0; ix < a; ix++){
		PORTD = input[ix];
		send_it();
	}
}


/* ------------------------------------------------------------------------- */
/*
	Sets the cursor to x, y for next character
*/
/* ------------------------------------------------------------------------- */
void set_cursorLcd(int a, int b) 
{
	RS_INSTR;
	if (a==1){
		PORTD = 0x80 + b;
		send_it();
	}
	else if (a==2){
		PORTD = 0xC0 + b;
		send_it();
	}
}


/* ------------------------------------------------------------------------- */
/*
	Clears screen
*/
/* ------------------------------------------------------------------------- */
void clearLcd(void) 
{
	RS_INSTR;
	//Clear screen
	PORTD = 0x01;
	send_it();
}


/* ------------------------------------------------------------------------- */
/*
	Initiates communication with LCD
*/
/* ------------------------------------------------------------------------- */
void initLcd(void) 
{
	_delay_ms(50);
	RS_INSTR;
	DISABLE;
	_delay_us(500);
	// Set 2 rows
	PORTD = 0b00111100;
	send_it();
	// Turn on screen
	PORTD = 0x0C;
	send_it();
	//Clear screen
	clearLcd();
	set_cursorLcd(1,1);
}