#include "main.h"
/**
 * times_tables - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, x, result;
for (i = 0; i <= 9; i++)
{
for (x = 0; <= 9; x++)
{
result = i * x;
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
