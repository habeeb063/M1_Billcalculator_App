#ifndef __Ebill_H__
#define __Ebill_H__
/**
 * @file Ebill.h
 * @author K Mohammad Habeeb (habeebmohammed6666@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Amount
{
	int amount ;
};

struct Amount A;

struct Bill
{
	char name[20];
	int meternumber;
        int unitsconsumed;
	char email[20];
	int phonenumber[11];
};

struct Bill B;

void details();

void Bill();

void display ();

#endif
