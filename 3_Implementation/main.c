#include "Ebill.h"
#include<stdio.h>

#include<stdlib.h>
#include<string.h>
void details();
void Bill();
void display();
int main()
{ 
    int y;
	printf("\t\t\t**** CESC Electricity Bill****\n");
	printf(" \t\t\tCESC Electricity Board Helpline: 19123  \n");
	details();
	
    Bill();
    display();
	printf("press 1 to to exit \n");
    scanf("%d", &y);
    return 0;
}