#include <stdio.h>
void main()

{
int s[5];
for (int i=0;i<5;i++)
{
printf("Enter the value of %d:",i);
scanf("%d",&s[i]);
}
for (int j=0;j<5;j++)
{
printf("You entered %d value %d\n",j+1,s[j]);
}
}
