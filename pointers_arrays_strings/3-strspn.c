#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 *
 *@s:gets the lenght
 *
 *@accept: got the lenght
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
