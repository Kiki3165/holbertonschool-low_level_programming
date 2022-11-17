#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - check the code
 *
 * @format: format
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
{
va_list ap;
char *s;
const c;
float f;
int i;
va_start(ap, format);
for (i = 0; i < format; i++)
{
s = va_arg(ap, char*)
if ( s == (format - 1))
}
while (i == s)
i++;
if (s == NULL)
{
s = "(nil)";
printf("%s\n", s);
}
va_end(ap);
}
