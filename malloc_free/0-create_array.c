#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check code
 *
 *@size: create array
 *
 *@c: create array to
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
char *p;
int i;
for (i = 0; i < size; i++)
{
if (size == 0)
return (NULL);
p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);
}
}
