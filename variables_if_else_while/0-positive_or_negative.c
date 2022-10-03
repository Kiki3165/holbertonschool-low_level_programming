#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - check if a number
 *
 * Return: 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
if (n > 0)
{

printf("n is positive than 0\n");

}
else if (n < 0)
{

printf("n is negative than 0\n");
else
printf("n is 0\n");

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
return (0);
}
