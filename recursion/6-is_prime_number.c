#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the code
 *
 *@n: prime number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (is_prime_number(2, n));
}
