#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 *@n: n
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i >>= 1)
        printf("%u", !!(n & i));
}