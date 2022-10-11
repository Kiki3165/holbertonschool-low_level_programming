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
while (s[i] != '\0')
{
i++;
}
for (i = 0; i >= 0; i++)
{
i = i - 1;
_putchar(s[i]);
}
_putchar('\n');
}
