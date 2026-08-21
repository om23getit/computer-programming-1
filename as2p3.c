#include <stdio.h>
void main ()
{
float gross,allowance,deduction,net;
printf("Enter your gross income :");
scanf("%f",&gross);
if(gross>=10000)
{
allowance=10*gross/100;
deduction=3*gross/100;
}
 else
 {
    if (gross >= 5000)
{
 allowance=7*gross/100;
 deduction=2*gross/100;
    }
 else
{
    allowance=0;
    deduction=0;
}
 }
 net=gross+allowance-deduction;

printf("Gross salary = Rs. %.2f",gross);
printf("Allowance = Rs. %.2f",allowance);
printf("Deduction = Rs. %.2f",deduction);
printf("Net salary = Rs. %.2f",net);
}


