#include <stdio.h>
#include "main.h"

/**
 *array_iterator - Entry point
 *@array: array
 *@size: size
 *@action: action
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array == NULL || action == NULL)
for (i = 0; i < size; i++)
(action(array[i]);
}
