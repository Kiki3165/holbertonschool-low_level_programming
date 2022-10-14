#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *
 *@s:capitalize
 *
 * Return: Always 0.
 */

char *cap_string(char *l)
{
int i = 0, j;
char a[] = " \t\n,;.!?\"(){}";
while (l(s + i))
{
if (l(s + i) >= 'a' && l(s + i) <= 'z')
{
if (i == 0)
l(s + i) -= 'a' - 'A';
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == l(s + i - 1))
l(s + i) -= 'a' - 'A';
}
}
}
i++;
}
return (s);
}
