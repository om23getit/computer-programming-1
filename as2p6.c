#include <stdio.h>
void main ()
{
int a,b,c,total;
float avg;
 printf("Enter the marks of first subject:");
 scanf("%d",&a);
 printf("Enter the marks of second subject:");
 scanf("%d",&b);
 printf("Enter the marks of third subject:");
 scanf("%d",&c);

 total=a+b+c;
 avg=total/3.0;

 printf("Total = %d\n", total);
 printf("Average = %.2f\n", avg);

 if (avg>=70)
 printf("Distinction");
 else if(avg>=60)
 printf("First");
 else if (avg>=50)
 printf("Second");
 else if (avg>=35)
 printf("Third");
 else
 printf("Fail");
}
