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
dest[i] = src[i];
}
return (dest);
 
