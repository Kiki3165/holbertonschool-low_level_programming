#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 *@n: n
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
int i;
if (n == 0)
{
return (0);
}
while (i <= n)
i++;
return (n);
}
