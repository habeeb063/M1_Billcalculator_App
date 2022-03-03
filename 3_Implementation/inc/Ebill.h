#ifndef __Ebill_H__
#define __Ebill_H__
/**
 * @file Ebill.h
 * @author K MOHAMMAD HABEEB (habeebmohammed@6666gmail.com)
 * @brief Calculation of Electricity Bill
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief Structure of Amount 
 * 
 */
struct Amount
{
	int amount ;
};

struct Amount A;
/**
 * @brief Structure of Bill
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
 * @brief Records the details of user
 * 
 */
void details();
/**
 * @brief Calculates the bill 
 * 
 */
void Bill();
/**
 * @brief Displays the bill and other dtails of user
 * 
 */
void display ();

#endif