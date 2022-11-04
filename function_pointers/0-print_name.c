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
  void (*c)(char *name);
  c = print_name;
  c(0);
}
