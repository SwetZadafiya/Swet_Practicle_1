// Write a programme to find gross salary by adding % of HRA,DA and TA of user choice.

#include<stdio.h>
#include<conio.h>

void main()
{

int HRA,DA,TA,X/*Base salary*/,Y/*Gross salary*/;

clrscr();

printf("Enter the value of base salary : ",X);
scanf("%d",&X);
printf("Enter the value of HRA : ",HRA);
scanf("%d",&HRA);
HRA=(X*HRA)/100;
printf("Enter the value of DA : ",DA);
scanf("%d",&DA);
DA=(X*DA)/100;
printf("Enter the value of TA : ",TA);
scanf("%d",&TA);
TA=(X*TA)/100;

Y  =HRA+DA+TA+X;

printf("Gross salary in Rupees is : %d ",Y);

getch();
}