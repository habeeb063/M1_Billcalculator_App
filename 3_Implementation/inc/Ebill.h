
/**
 * @file Ebill.h
 * @author K Mohammad Habeeb (habeebmohammed6666@gmail.com)
 * @brief Calculates the Electricity Bill
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #ifndef __Ebill_H__
#define __Ebill_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief Stores the amount
 * 
 */
struct Amount
{
	int amount ;
};

/**
 * @brief Stores the amount
 * 
 */

struct Amount A;
/**
 * @brief Stores the amount
 * 
 */

struct Bill
{
	char name[20];
	int meternumber;
        int unitsconsumed;
	char email[20];
	int phonenumber[11];
};

struct Bill B;
/**
 * @brief Stores the amount
 * 
 */
void details();
/**
 * @brief Stores the amount
 * 
 */

void Bill();
/**
 * @brief Stores the amount
 * 
 */
void display ();

#endif
