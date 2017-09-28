/*
 * main.h
 *
 * Created: 2017-09-28 15:34:42
 *  Author: Filip
 */ 


#ifndef MAIN_H_
#define MAIN_H_

/*
 * main.h
 *
 * Created: 28/09/2017 14:39:35
 *  Author: fille
 */ 



#define TABLESIZE 18

int hcp;

typedef struct {
	int HoleNo;
	int IndexNo;
	int Par;
	int ActualStrikes;
	int MaxStrikes;
	int Points;
}index;

index table[18];


#endif /* MAIN_H_ */