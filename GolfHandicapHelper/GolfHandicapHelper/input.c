/*
 * input.c
 *
 * Created: 2017-09-28 15:37:07
 *  Author: Filip
 */ 

#include "input.h"
#include "main.h"
#include "hal.h"

/*---------------------------------------------------------------------------*/
/*!
    Moves through all 18 holes and fills the arrays with values,
    enter to proceed to next hole
*/
/*---------------------------------------------------------------------------*/
void getInput(void)
{
    static int ix = 0;
    if (isButtonNoPressed_C(1) != FALSE) {
        table[ix].ActualStrikes++;
    }
    if (isButtonNoPressed_C(2) != FALSE) {
        table[ix].ActualStrikes--;
    }
    if (isButtonNoPressed_C(3) != FALSE) {
        ix++;
    }
}


/*---------------------------------------------------------------------------*/
/*!
    When all arrays have been filled this function returns TRUE
    \return TRUE or FALSE
*/
/*---------------------------------------------------------------------------*/
int getInputDone(int ix)
{
    if (ix > 17) {
        return TRUE;
        if (isButtonNoPressed_C(3)) {
            ix = 0;
        }
    }
    else {
        return FALSE;
    }
}
