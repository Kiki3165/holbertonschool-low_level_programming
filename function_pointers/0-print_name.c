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
int (*f)(char,char);
f = print_name;
printf("%s\n", name);
}
