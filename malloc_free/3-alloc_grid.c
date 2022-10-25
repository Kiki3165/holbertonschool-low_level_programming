#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check code
 *
 *@width: return ptr
 *
 *@height: return ptr to
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
int **array;
int i;
array = malloc(height *sizeof(int *));
for (i = 0; i < height; i++)
{
array[i] = malloc(width *sizeof(int));
if (width == 0)
return (NULL);
if (height == 0)
return (NULL);
}
}
