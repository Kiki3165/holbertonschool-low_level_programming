#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 *
 *@s: print rev
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
int i = 0;
for (i = 0; i != '\0' ; i++)
{
for (i = 0; i != 0 ; i--)
{
_putchar(s[i]);
}
}
_putchar('\n');
}
