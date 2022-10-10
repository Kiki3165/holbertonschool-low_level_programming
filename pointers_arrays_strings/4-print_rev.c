#include "main.h"
#include <stdio.h>
/**
 * print_rev - check the code
 *
 *@s: print reverse
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 0;
for (; s[i] != 0; i++)
{
i = i - 1;
for (; s[i] != 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
}
