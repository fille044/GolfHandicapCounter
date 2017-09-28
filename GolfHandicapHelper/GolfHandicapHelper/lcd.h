/* ------------------------------------------------------------------------- */
/*
  lcd.h
 
  Created: 21/09/2017 20:22:30
  Author: fille
 */ 
/* ------------------------------------------------------------------------- */

#include "hal.h"

/* Defines for lcd.c */
#define ENABLE PB2_ON
#define DISABLE PB2_OFF
#define RS_SIGN PB1_ON
#define RS_INSTR PB1_OFF


void send_it(void);
void printLcdChar(char *input, int cursor);
void printLcdInt(int input, int cursor);
void clearLcd(void);
void initLcd(void);
void set_cursorLcd(int a, int b);

