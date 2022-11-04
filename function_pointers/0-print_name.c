#include <stdio.h>
#include "main.h"

/**
 * print_name - Entry point
 *
 *@name: name
 *@f: fonction pointeur
 *
 */

void print_name(char *name, void (*f)(char *))
{
if ( f == NULL)
return;
f(name);
}
