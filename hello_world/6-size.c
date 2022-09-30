#include <stdio.h>

/**
 * size - print the size of data type
 *
 * Return: 0
 */

int main()
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return 0;
}
