#include "search_algos.h"

/**
 *linear_search-linear_search
 *@array:array
 *@size:size
 *@value:value
*/

int linear_search(int *array, size_t size, int value)
{
    int i;
    if (array == NULL)
    return (-1);
  for (int i = 0; i < size; i++)
  {
    printf("Value checked array[%ld]\n", i, array[i]);
    if (array[i] == value)
    return (i);
  }
  return (-1);
}
