// Write a programme to convert temperature from derees celsius to fahrenheit.

#include<stdio.h>
#include<conio.h>

void main(){

float F,C;
clrscr();
printf("Enter temperature in Derees Celsius is : ",C);
scanf("%f",&C);
F= (C*9/5)+32;
printf("The temperature in Fahrenheit is : %f ",F);

getch();
}