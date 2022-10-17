#include "main.h"

/**
 * _puts_recursion - check the code
 *
 *@s: print string
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
if (s <= 1)
return (s * factorial(s - 1));
_putchar(s);
putchar('\n');
}
