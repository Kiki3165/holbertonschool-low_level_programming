#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 *
 *@s: search a string
 *
 *@accept: search a string for any of set of bytes
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j])
return (s + i);
}
return (0);
}
