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
int i;
while (*(s + i))
i++;
i = i - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
