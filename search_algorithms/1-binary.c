#include "search_algos.h"

/**
 *binary_search-binary_search
 *@array:array
 *@size:size
 *@value:value
 *
*/

int binary_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);
	j = binarySearch(array, 0, size - 1, value);

	return (j);
}

/**
 *binarySearch_binarySearch
 *@arr:arr
 *@j:j
 *@r:r
 *@x:x
 *
*/


int binarySearch(int *array, int fr, int rf, int key)
{
	int l = fr;
	int h = rf;
	int mid = (fr + rf) / 2;
	if (fr > rf)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (; l <= h; l++)
	{
		if (l == h)
			printf("%d", array[l]);
		else
			printf("%d, ", array[l]);
	}
	printf("\n");
	if (key == array[mid])
		return (mid);

	else if (key < array[mid])
	{
		return (binarySearch(array, fr, mid - 1, key));
	}
	else
	{
		return (binarySearch(array, mid + 1, rf, key));
	}
}