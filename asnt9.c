#include<stdio.h>
void main()
{
int Rs,$,cents;
printf("Amount in Rupees =");
scanf("%d",&Rs);
$=Rs/48;
cents=Rs%48;
printf("The amount will be %d Dollars and %d cents",$,cents);
}
