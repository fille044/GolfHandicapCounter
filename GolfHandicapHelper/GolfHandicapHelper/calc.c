/*
 * calc.c
 *
 * Created: 2017-09-28 15:39:49
 *  Author: Filip
 */ 

/* Included files */
#include "main.h"
#include "lcd.h"
#include "calc.h"
#include "hal.h"


/* Static functions within this file */

/*---------------------------------------------------------------------------*/
/*!
    Resets all calculated data
    \return TRUE or FALSE
*/
/*---------------------------------------------------------------------------*/
int resetStats(void)
{
    // Erase all data collected from run
    hcp = 0;
    for (int i = 0; i < TABLESIZE; i++) {
        table[i].MaxStrikes = 0;
        table[i].ActualStrikes = 0;
        table[i].Points = 0;
		if (i == TABLESIZE - 1) {
			return TRUE;
		}
    }
    return FALSE;
}


/*---------------------------------------------------------------------------*/
/*!
    Calculates the maximum amount of strikes allowed to still gain points.
*/
/*---------------------------------------------------------------------------*/
void calculateMaxStrikes(void)
{
	int increase = 0;
	int sub = 0;
	int rest = 0;
	
    if (hcp > 0 && hcp <= 18) {      // hcp 0-18
        increase = 1;
        sub = 0;
        rest = 0;
    }
    else if (hcp > 18 && hcp <= 36) {    // hcp 19-36
        increase  = 2;
        sub = 18;
        rest = 1;
    }
    else if (hcp > 36 && hcp <= 54) {    // hcp 37-54
        increase = 3;
        sub = 36;
        rest = 2;
    }
    else {
        printLcdChar("Error", 1);
    }
	
	int totalindex = 0;
	
    totalindex = hcp - sub; // 30-18 = 12, 46-36 = 10, 8-0 = 8

    for (int i = 0; i < TABLESIZE; i++) {
        if (table[i].IndexNo < totalindex) {
            table[i].MaxStrikes = table[i].Par + rest + increase;
        }
        else {
            table[i].MaxStrikes = table[i].Par + rest;
        }
        calculatePoints(i);
    }
}


/*---------------------------------------------------------------------------*/
/*!
    Returns the index that belongs to argument hole
*/
/*---------------------------------------------------------------------------*/
int getIndex(int hole)
{
    for (int ix = 0; ix < TABLESIZE; ix++) {
        if (table[ix].IndexNo == hole) {
            return ix;
        }
    }
}


/*---------------------------------------------------------------------------*/
/*!
    Calculate the amount of points received.
*/
/*---------------------------------------------------------------------------*/
void calculatePoints(int i)
{
    table[i].Points = table[i].MaxStrikes - table[i].ActualStrikes;
}


/*---------------------------------------------------------------------------*/
/*!
    Goes through all calculated points and adds them to a variable,
    which is then returned.
*/
/*---------------------------------------------------------------------------*/
int getTotalPoints(void)
{
    int TotalPoints = 0;
    for (int i = 0; i < TABLESIZE; i++) {
        TotalPoints += table[i].MaxStrikes - table[i].ActualStrikes;
    }
    return TotalPoints;
}


/*---------------------------------------------------------------------------*/
/*!
   Goes through all calculated MaxStrikes and adds them to a variable,
   which is then returned.
*/
/*---------------------------------------------------------------------------*/
int getMaxStrikes(void)
{
   int TotalMaxStrikes = 0;
    for (int i = 0; i < TABLESIZE; i++) {
        TotalMaxStrikes += table[i].MaxStrikes;
    }
    return TotalMaxStrikes;
}
