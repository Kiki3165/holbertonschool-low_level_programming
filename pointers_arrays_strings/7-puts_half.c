#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
int j, i = 0;
while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
