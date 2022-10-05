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
int last;
for (n = 0; n <= n % 10; n++)
_putchar(n % 10);
_putchar('\n');
return (0);
}
