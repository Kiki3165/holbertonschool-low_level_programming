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
int k;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[k] < n; j++)
{
k = i + 1;
k++;
dest[i] = src[k];
}
return (dest);
}
