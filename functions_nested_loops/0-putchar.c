#include <stdio.h>
#include <unistd.h>
/**
 * main - nested loops
 *
 * Return: 0
 */
int main(void)
{
char c;
while ((c = getchar()) != EOF)
putchar(c);
putchar('\n');
return (write(1, &c, 1));
}
