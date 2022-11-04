#include <stdio.h>
#include "main.h"

/**
 * print_name - Entry point
 *
 *
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (f)
{
void (*d)(name);
d = f;
}
_putchar(f);
_putchar('\n');
}
