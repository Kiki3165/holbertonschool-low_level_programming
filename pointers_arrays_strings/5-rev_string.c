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
int x = 0;
while (s[i] != '\0')
{
i++;
}
x = i - 1;
for (x = 0; x != i; x++)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
