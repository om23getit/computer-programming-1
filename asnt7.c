#include<stdio.h>
void main()
{
int min,hr,rem;
printf("No. of minutes =");
scanf("%d",&min);
hr=min/60;
rem=min%60;
printf("No. of hours and minutes will be %d hours and %d minutes",hr,rem);
}
