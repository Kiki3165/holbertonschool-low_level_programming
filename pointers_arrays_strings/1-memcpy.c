#include <stdio.h>
#include "main.h"
/**
 * _memcpy - check the code
 *
 *@dest:cpy
 *@src:cpy memo
 *@n: cpy memories
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int n;
for (int i = 0; i != 32; i++)
{
dest[i] = src[i + 32];
}
return (dest);
}
