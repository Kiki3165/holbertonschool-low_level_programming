#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 *@s: change stringd
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
int i = 0;
while (*(s + i))
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
*(s + i) -= 'a' - 'A';
i++;
}
return (s);
}
