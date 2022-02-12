#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"Ebill.h"




void details()
{
   
	printf("Enter your  name:\n");
	scanf("%s", B.name);
	printf("Enter your Meter Number:\n");
	scanf("%d", &B.meternumber);
    printf("Enter units consumed:\n");
	scanf("%d", &B.unitsconsumed);
    printf("Enter email ID :\n");
    scanf("%s", B.email);
    printf("Enter the phone number : \n");
    scanf("%d", B.phonenumber);
}


void Bill()
{
   
    A.amount;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        A.amount = B.unitsconsumed * 3.25;
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        A.amount = B.unitsconsumed * 4.70;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        A.amount = B.unitsconsumed * 6.25;
    }
    else 
    {
        A.amount = B.unitsconsumed * 7.30;
    }


    printf("****CESE Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf(" Your electricity bill is: %d\n", A.amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}

void display ()
{
 char csname[20],ncsname[20],cha,c;
   int i,j,qx,y;
   char * px;
   FILE *info;
   info=fopen("record.txt","a+");
  
   fprintf(info,"Comsumer  Name :%s\n",px=B.name);
   fprintf(info,"Consumer Email:%s\n",px=B.email); 
   fprintf(info,"Units Consumed:%d\n",qx=B.unitsconsumed);
   fprintf(info,"Bill:%d\n",qx=A.amount);
   for(i=0;i<=50;i++)
   fprintf(info,"%c",'_');
   fprintf(info,"\n");
   fclose(info);
   printf("Press '1' to see the previous details \n");
   scanf("%d", &y);
   
   if(y==1){
   info=fopen("record.txt","r");
   do{
       putchar(c=getc(info));
       }while(c!=EOF);}

}
