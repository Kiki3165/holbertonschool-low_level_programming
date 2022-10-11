#include "main.h"

/**
 * print_array - check the code for
 *
 *@a: print of array
 *
 *@n: help print array
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}
