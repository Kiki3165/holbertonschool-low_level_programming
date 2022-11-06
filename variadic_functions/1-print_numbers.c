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
unsigned int i = 0;
va_list al;
va_start(al, n);
while (i < n)
{
printf("%d", va_arg(al, int));
i++;
if (s != n && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(al);
}
