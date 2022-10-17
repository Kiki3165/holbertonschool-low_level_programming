#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 *
 *@x:return value
 *@y: return value to
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y < 0)
return (_pow_recursion(x, y + 1) / x);
return (_pow_recursion(-1) * x);
}
