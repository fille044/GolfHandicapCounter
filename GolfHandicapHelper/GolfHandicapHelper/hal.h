/* ------------------------------------------------------------------------- */
/*
  hal.h
 
  Created: 21/09/2017 18:50:40
  Author: fille
 */ 
/* ------------------------------------------------------------------------- */

/* Header files */
#include <avr/io.h>
#include <stdint.h>       // needed for uint8_t
#include <string.h>

/* Public header files */

/* Defines */
#define F_CPU 1000000UL

#define TRUE 1
#define FALSE 0

#define PB0_ON (PORTB |= (1<<PB0))
#define PB0_OFF (PORTB &=~ (1<<PB0))
#define PB1_ON (PORTB |= (1<<PB1))
#define PB1_OFF (PORTB &=~ (1<<PB1))
#define PB2_ON (PORTB |= (1<<PB2))
#define PB2_OFF (PORTB &=~ (1<<PB2))
#define PB3_ON (PORTB |= (1<<PB3))
#define PB3_OFF (PORTB &=~ (1<<PB3))
#define PB4_ON (PORTB |= (1<<PB4))
#define PB4_OFF (PORTB &=~ (1<<PB4))
#define PB5_ON (PORTB |= (1<<PB5))
#define PB5_OFF (PORTB &=~ (1<<PB5))
#define PB6_ON (PORTB |= (1<<PB6))
#define PB6_OFF (PORTB &=~ (1<<PB6))
#define PB7_ON (PORTB |= (1<<PB7))
#define PB7_OFF (PORTB &=~ (1<<PB7))

#define PC0_ON (PORTC |= (1<<PC0))
#define PC0_OFF (PORTC &=~ (1<<PC0))
#define PC1_ON (PORTC |= (1<<PC1))
#define PC1_OFF (PORTC &=~ (1<<PC1))
#define PC2_ON (PORTC |= (1<<PC2))
#define PC2_OFF (PORTC &=~ (1<<PC2))
#define PC3_ON (PORTC |= (1<<PC3))
#define PC3_OFF (PORTC &=~ (1<<PC3))
#define PC4_ON (PORTC |= (1<<PC4))
#define PC4_OFF (PORTC &=~ (1<<PC4))
#define PC5_ON (PORTC |= (1<<PC5))
#define PC5_OFF (PORTC &=~ (1<<PC5))
#define PC6_ON (PORTC |= (1<<PC6))
#define PC6_OFF (PORTC &=~ (1<<PC6))
#define PC7_ON (PORTC |= (1<<PC7))
#define PC7_OFF (PORTC &=~ (1<<PC7))

#define PD0_ON (PORTD |= (1<<PD0))
#define PD0_OFF (PORTD &=~ (1<<PD0))
#define PD1_ON (PORTD |= (1<<PD1))
#define PD1_OFF (PORTD &=~ (1<<PD1))
#define PD2_ON (PORTD |= (1<<PD2))
#define PD2_OFF (PORTD &=~ (1<<PD2))
#define PD3_ON (PORTD |= (1<<PD3))
#define PD3_OFF (PORTD &=~ (1<<PD3))
#define PD4_ON (PORTD |= (1<<PD4))
#define PD4_OFF (PORTD &=~ (1<<PD4))
#define PD5_ON (PORTD |= (1<<PD5))
#define PD5_OFF (PORTD &=~ (1<<PD5))
#define PD6_ON (PORTD |= (1<<PD6))
#define PD6_OFF (PORTD &=~ (1<<PD6))
#define PD7_ON (PORTD |= (1<<PD7))
#define PD7_OFF (PORTD &=~ (1<<PD7))


/* Public functions */
void initSystem(void);

int isButtonNoPressed_C(int No);

void turnOnNo_B(int No);
void turnOnNo_C(int No);
void turnOnNo_D(int No);

void turnOffNo_B(int No);
void turnOffNo_C(int No);
void turnOffNo_D(int No);
