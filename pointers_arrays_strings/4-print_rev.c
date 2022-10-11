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
int x =  -1;
for (; s[i] != '\0'; i++)
{
for (; s[x] >= '\0'; x--)
{
_putchar(s[i]);
}
}
_putchar('\n');
}
