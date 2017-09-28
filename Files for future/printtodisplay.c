#include "printtodisplay.h"
#include "calc.h"


void printIndexNo(int i)
{
    // Prints the index on hole i
    printLcdInt(table[i].IndexNo, 2);
}

void printHoleNo(int i)
{
    // Prints the number of the hole i
    printLcdInt(table[i].HoleNo, 2);
}

void printPar(int i)
{
    // Prints the par to reach on hole i
    printLcdInt(table[i].Par, 2);
}

void printActualStrikes(int i)
{
    // Prints the amount of strikes on hole i
    printLcdInt(table[i].ActualStrikes, 2);
}

void printMaxStrikes(int i)
{
    // Prints the maximum number of strikes to still get points
    printLcdInt(table[i].MaxStrikes, 2);
}

void printPoints(int i)
{
    // Prints the calculated number of points given on hole i
    printLcdInt(table[i].Points, 2);
}

void printTotalPoints(void)
{
    printLcdInt(getTotalPoints(), 2);
}
