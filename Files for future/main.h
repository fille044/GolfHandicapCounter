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


table.HoleNo = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
table.IndexNo = {4,5,13,1,7,17,11,9,2,15,3,8,12,18,6,10,12,14,16};
table.Par = {4,4,4,5,4,5,4,3,4,3,4,5,3,5,3,4,3,5};