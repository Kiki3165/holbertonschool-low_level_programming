#include <stdio.h>
/**
 * main - print lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
int num;
char i;
for (num = 0; num % 10; num++)
for (i = '0'; i <= '9'; i++)
putchar(i);
putchar('\n');
return (0);
}
