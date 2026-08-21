#include <stdio.h>
void main ()
{
int a,b,c;
printf("Enter the value of first number:");
scanf("%d",&a);
printf("Enter the value of second number:");
scanf("%d",&b);
printf("Enter the value of third number:");
scanf("%d",&c);
if(a>b)
{if(a>c)
printf("The Highest value is %d",a);
else
printf("The Highest value is %d",c);}
else
{if(b>c)
printf("The Highest value is %d",b);
else
printf("The Highest value is %d",c);}
}
