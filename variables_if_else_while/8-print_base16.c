#include <stdio.h>
/**
 * main - check if a number
 *
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (num = 'a'; num <= 'f'; num++)
putchar('\n');
return (0);
}
