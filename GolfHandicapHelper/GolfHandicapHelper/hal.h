/*
 * hal.h
 *
 * Created: 21/09/2017 18:50:40
 *  Author: fille
 */ 

#include <avr/io.h>
#include <stdint.h>       // needed for uint8_t
#include <string.h>

#include "io.h"
#include "lcd.h"
#define F_CPU 1000000UL 

#define TRUE 1
#define FALSE 0


int isButtonNoPressed_C(int No);


void turnOnNo_B(int No);
void turnOnNo_C(int No);
void turnOnNo_D(int No);

void turnOffNo_B(int No);
void turnOffNo_C(int No);
void turnOffNo_D(int No);