#include <stdio.h>
#include "main.h"
/**
 * more_numbers - check the code
 *
 *@count:number print
 *@num:number count
 * Return: Always 0.
 */
void more_numbers(void)
{
int num, count;
for (count = 0; count < 10; count++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
