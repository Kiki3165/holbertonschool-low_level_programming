#include "main.h"
/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i = 0, n;
for (n = 0; i <= 23; i++)
{
for (; n <= 59; n++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar('\n');
}
}
}
