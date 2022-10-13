#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 *
 *@dest:concatenate
 *@src: concatenate to
 *@n: null
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
for (j = 0; dest[j] != '\0'; j++)
{
}
for (i = 0; src[i] < n; i++)
{
dest[j + 1 + i] = src[i];
}
return (dest);
}
