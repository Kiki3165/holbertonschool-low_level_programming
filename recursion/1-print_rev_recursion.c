#include "main.h"

/**
 * _print_rev_recursion - check the code
 *
 *@s: print rev
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
_putchar(s[0]);
_print_rev_recursion(s - 1);
}
else
_putchar('\n');
}
