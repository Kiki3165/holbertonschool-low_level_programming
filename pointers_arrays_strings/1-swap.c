#include <stdio.h>
#include "main.h"
/**
 * swap_int - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
a = 98;
b = 42;
char temp;
temp = a;
a = b;
b = temp;
_putchar(a);
_putchar(b);
}
