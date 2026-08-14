#include<stdio.h>
void main()
{
int Rs,$,Pounds,pence;
printf("Amount in Dollars =");
scanf("%d",&$);
Rs=$*48;
Pounds=Rs/70;
pence=Rs%70;
printf("The amount will be %d Pounds and %d pence",Pounds,pence);
}
