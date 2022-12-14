#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - check the code
 *
 *@separator: separator
 *@n: n
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *x;
if (n == 0)
{
printf("\n");
return;
}
va_start(ap, n);
for (i = 0; i < n; i++)
{
x = va_arg(ap, char*);
if (i == (n - 1))
{
if (x == NULL)
{
x = "(nil)";
printf("%s\n", x);
}
else
printf("%s\n", x);
}
else if (separator == NULL)
printf("%s", x);
else if (x == NULL)
{
x = "(nil)";
printf("%s%s", x, separator);
}
else
printf("%s%s", x, separator);
}
va_end(ap);
}
