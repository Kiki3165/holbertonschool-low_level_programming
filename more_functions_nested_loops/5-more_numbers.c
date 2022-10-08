#include <stdio.h>
#include "main.h"
/**
 * more_numbers - check the code
 *
 *@i:number print
 *@c:number count
 * Return: Always 0.
 */
void more_numbers(void)
{
int i , c;
for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (num > 9)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
