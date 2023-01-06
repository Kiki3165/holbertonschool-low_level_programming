#include "search_algos.h"

/**
 *binary_search-binary_search
 *@arr:arr
 *@size:size
 *@value:value
 *
*/

int binary_search(int *arr, size_t size, int value)
{
	int j;

	if (arr == NULL)
		return (-1);
	j = binarySearch(arr, 0, size - 1, value);

	return (j);
}

/**
 *binarySearch-binarySearch
 *@arr:arr
 *@j:j
 *@r:r
 *@x:x
 *Return:0
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
			printf("%d", arr[l]);
		else
			printf("%d, ", arr[l]);
	}
	printf("\n");
	if (x == arr[mid])
		return (mid);

	else if (x < arr[mid])
	{
		return (binarySearch(arr, j, mid - 1, x));
	}
	else
	{
		return (binarySearch(arr, mid + 1, r, x));
	}
}
