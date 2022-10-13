#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i = 0, t;
n = n - 1;
while (i < n)
{
t = *(a + i);
*(a + i) = *(a + n);
*(a + n) = t;
i++;
n--;
}
}
