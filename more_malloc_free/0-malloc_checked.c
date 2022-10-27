#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check code
 *
 *@b: allocate memory
 *
 *
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
int *p;
p = (int *) malloc(b * sizeof(int));
if (p == NULL)
exit (malloc_checked);
return (malloc_checked);
}
