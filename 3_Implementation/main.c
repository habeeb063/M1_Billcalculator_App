#include "Ebill.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void details();
void Bill();
void display();
int main()
{ 
    
	printf("\t\t\t**** CESC Electricity Bill****\n");
	printf(" \t\t\tCESC Electricity Board Helpline: 19123  \n");
	details();
	system("cls");
    Bill();
    display();
	getch();
    return 0;
}