#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - nested loops
 *
 *@c: Number to pass to _isdigit function
 *
 * Return: 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <=57)
{
return (1);
}
return (0);
}
