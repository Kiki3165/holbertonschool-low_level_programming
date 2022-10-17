#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 *
 *@s: return length
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (s[0] != '\0')
{
_strlen_recursion(s);
s++;
i++;
}
return (0);
}
