#include "main.h"
/**
 * print_last_digit - check the code
 *
 *@n: The number to be treated
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int r = n % 10;
if (r < 0)
r = r * -1;
_putchar(r + '0');
return (0);
}
