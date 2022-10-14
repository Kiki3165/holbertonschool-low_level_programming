#include "main.h"
#include <stdio.h>

/**
 * leet - check the code for
 *@n: encode
 *
 *
 *
 *
 * Return: Always 0.
 */

char *leet(char *n)
{
int i;
int x;
char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char b[] = {'4', '3', '0', '7', '1'};
for (i = 0; n[i] != '\0'; i++)
{
for (x = 0; x < 10; x++)
{
if (n[i] == a[x])
{
n[i] = b[x / 2];
break;
}
}
}
return (n);
}
