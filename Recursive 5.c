#include <stdio.h>
void binary(int n)
{
if(n>1)
binary(n/2);
printf("%d", n % 2);
}
int main()
{
int n;
printf("Enter a decimal number: ");
scanf("%d", &n);
printf("Binary number = ");
binary(n);
return 0;
}
