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
int j = 0;
for (j = 0; dest[j] != '\0'; j++)
{
}
for (n = 0; src[n] != 1; n++)
{
dest[n + j + 1] = src[n + 1];
}
return (dest);
}
