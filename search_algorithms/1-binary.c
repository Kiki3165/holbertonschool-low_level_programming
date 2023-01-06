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


int binarySearch(int *arr, int j, int r, int x)
{
	int l = j;
	int h = r;
	int mid = (j + r) / 2;
if (j > r)
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
	if (x == array[mid])
		return (mid);

	else if (x < array[mid])
	{
		return (binarySearch(array, j, mid - 1, x));
	}
	else
	{
		return (binarySearch(array, mid + 1, r, x));
	}
}
