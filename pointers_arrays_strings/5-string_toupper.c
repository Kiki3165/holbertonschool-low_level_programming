#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 *@s: string to upper
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] =(int)s[i] - 32;
}
return (s);
}
