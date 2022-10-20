#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - check the code
 *
 *@argc: print string
 *@argv:  print too
 * Return: Always 0.
 */

int main(int argc, char *argv)
{
int i;
printf("%d\n", argc);
for (i = 0; i != argc; i++)
{
printf("%d\n", argv[i]);
}
return (0);
}
