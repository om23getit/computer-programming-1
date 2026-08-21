#include <stdio.h>
void main ()
{
int gross,discount,net;

printf("Enter the gross sales:");
scanf("%d",&gross);

if (gross>=20000)
{
discount=15*gross/100;
}

else {
if (gross>=10000)
{discount=10*gross/100;
}
else
{discount=5*gross/100;
}
}
net=gross-discount;

printf("Gross Sales = %d\n",gross);
printf("Discount = %d\n",discount);
printf("Net Sales = %d\n", net);
}
