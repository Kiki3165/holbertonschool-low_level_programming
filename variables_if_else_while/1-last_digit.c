#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
{
printf("Enter the digit: ");
scanf("%d")

digit = n % 10;

if (n 10 % > 5)
{
printf("%d and is greater than\n", n % 10);
}
else if (n % 10 < 5)
{
printf("%d and is 0\n", n % 10);
}
else
{
printf("%d and is less than 6 and not 0\n", n % 10);
}
{
printf("Last digit of %d is: %d", n, digit);
}
return (0);
}
