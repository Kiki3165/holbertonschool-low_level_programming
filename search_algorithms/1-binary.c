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
	int i;

	if (array == NULL)
		return (-1);
	i = binarySearch(array, 0, size - 1, value);

	return (i);
}

/**
 *binarySearch_binarySearch
 *@arr:arr
 *@l:l
 *@r:r
 *@x:x
 *
*/

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
