#include <stdio.h>
/**
 * main - print lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
for (i = 'A'; i <= 'Z'; i++)
putchar('\n');
return (0);
}
