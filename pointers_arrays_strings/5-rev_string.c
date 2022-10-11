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
int j;
while (s[i] != '\0')
{
i++;
}
for (x = i -1; x >= (i / 2); x--)
{
j = s[x];
s[x] = s[i - x - 1];
s[i - x - 1] = j;
}
}
