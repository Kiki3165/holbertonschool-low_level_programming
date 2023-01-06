#include "search_algos.h"

/**
 *linear_search-linear_search
 *@array:array
 *@size:size
 *@value:value
*/

int linear_search(int *array, size_t size, int value)
{
  if (size == 0) {
    return -1;
  }
  if (array[size - 1] == value) {
    return size - 1;
  } else {
    return linearSearch(array, size - 1, value);
  }
}
