#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 *
 *@dest:copy too
 *@src: copy to
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int i;
for ( i = 0; src[i] != '\0'; i++)
{
src[i] = dest[i];
_putchar(dest[i]);
}
_putchar('\n');
return (dest);
}
