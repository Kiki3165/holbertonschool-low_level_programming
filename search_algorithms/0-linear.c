#include "search_algos.h"

/**
 *linear_search-linear_search
 *@array:array
 *@size:size
 *@value:value
*/

int linear_search(int *array, size_t size, int value)
{
    long unsigned int i;
    for (i = 0; i < size; i++)
    if (array[i] == value)
    return (i);
    return (-1);
}
