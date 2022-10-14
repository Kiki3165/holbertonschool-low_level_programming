#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 *
 *
 * Return: Always 0.
 */

char *string_toupper(char *)
{
int i = 0, t;
int a = 0;
int n;
n = n - 1;
while (i < n)
{
t = *(a + i);
*(a + i) = *(a + n);
*(a + n) = t;
i++;
n--;
}
}
