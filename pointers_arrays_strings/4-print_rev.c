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
int i = 0, int x = 0, int j;

while (s[i] != '\0')
{
i++;
}
x = i;
for (j = 0; j != i ; j++)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
