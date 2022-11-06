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
int i;
va_list ap;
if (n == 0)
return (0);
va_start(ap, n);
for (i = n; i >= 0; i = va_arg (ap, int))
va_end(ap);
return (ap);
}
