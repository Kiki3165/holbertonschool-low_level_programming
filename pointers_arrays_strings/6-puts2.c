#include "main.h"
#include <stdio.h>
/**
 * puts2 - check the code
 *
 *@str: print numbers
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
