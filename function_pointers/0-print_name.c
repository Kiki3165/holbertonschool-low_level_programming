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
  void (*c)(char *);
  c = print_name;
  c();
}
