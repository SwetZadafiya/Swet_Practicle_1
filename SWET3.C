// Write a programme to find the third angle of triangle if two other angles are given.

#include<stdio.h>
#include<conio.h>

void main()
{

int a,b,c;

clrscr();
printf("Enter value of first angle : ",a);
scanf("%d",&a);
printf("Enter value of second angle : ",b);
scanf("%d",&b);
c=180-a-b;
printf("The value of third angle is : %d ",c);

getch();
}