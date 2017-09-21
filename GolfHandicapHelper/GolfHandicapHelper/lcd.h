/*
 * lcd.h
 *
 * Created: 21/09/2017 20:22:30
 *  Author: fille
 */ 


#define ENABLE (PORTB |= (1<<PB2))
#define DISABLE (PORTB &=~(1<<PB2))
#define RS_SIGN (PORTB |= (1<<PB1))
#define RS_INSTR (PORTB &= ~(1<<PB1))


void send_it(void);
void printLcd(char *input);
void clearLcd(void);
void initLcd(void);
void set_cursorLcd(int a, int b);
