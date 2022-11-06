#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 *@n: n
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list ap;
if (n == 0)
return (0);
va_start(ap, n);
for (i = n; i >= n; i++)
i = va_arg(ap, int);
va_end(ap);
return (i);
}
