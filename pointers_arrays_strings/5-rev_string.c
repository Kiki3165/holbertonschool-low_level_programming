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
int j;
int x = 0;
while (s[i] != '\0')
{
i++;
}
x = i - 1;
for (j = 0; j != i; j++)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
