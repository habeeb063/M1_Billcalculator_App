#ifndef __Ebill_H__
#define __Ebill_H__
/**
 * @file Ebill.h
 * @author K MOHAMMAD HABEEB (habeebmohammed6666@gmail.com)
 * @brief Calculates the Electricity bill based on user input
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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
struct Amount A;

/**
 * @brief Stores the Bill
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
 * @brief Stores the details of the user
 * 
 */

void details();
/**
 * @brief Calculates the Bill based on Units
 * 
 */

void Bill();
/**
 * @brief Displays the user information
 * 
 */
void display ();

#endif
