#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 *
 *@dest: concatenate
 *
 *@src: concatenate to
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
for (; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
