#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 *@s: fills memory
 *@b: fills memory to
 *@n: fill memory too
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
