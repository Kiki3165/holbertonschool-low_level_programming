#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - function
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, size = 0, a = 0, b = 0, c = 0;
char *p = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; j < n; j++)
;
size = i + j + 6;
p = malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
for (a = 0; a < i; a++, m++)
p[c] = s1[a];
for (b = 0; b < j; b++, m++)
p[c] = s2[b];
p[c] = '\0';
return (p);
}
