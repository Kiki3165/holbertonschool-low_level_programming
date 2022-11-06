#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - check the code
 *
 *@separator: separator
 *@n: n
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list al;
va_start(al, separator);
while (n > 0)
{
separator = va_arg(al, char *)
--n;
}
while (separator != NULL)
{
printf("%s ", separator);
separator = var_arg(al, char *);
}
va_end(al);
}
