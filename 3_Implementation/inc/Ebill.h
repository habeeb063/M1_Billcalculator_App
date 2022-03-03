#ifndef __Ebill_H__
#define __Ebill_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Bill
{
	char name[20];
	int meternumber;
        int unitsconsumed;
	char email[20];
	int phonenumber[11];
};
struct Amount
{
	int amount ;
};

struct Amount A;
struct Bill B;

void details();
void Bill();
void display ();

#endif
