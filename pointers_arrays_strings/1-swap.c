#include <stdio.h>
#include "main.h"
/**
 * swap_int - check the code
 *
 *@a :swipe b
 *@b :swipe a .
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
