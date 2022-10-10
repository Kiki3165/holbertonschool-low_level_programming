#include <stdio.h>
#include "main.h"
/**
 * _puts - check the code
 *
 *@str : print string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
int i = 0;
for (; str[i] != 0; i++)
{
_putchar(str[i]);
_putchar('\n');
}
}
