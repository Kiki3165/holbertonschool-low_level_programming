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
_puts_recursion(s);
_putchar(s);
_putchar('\n');
}
