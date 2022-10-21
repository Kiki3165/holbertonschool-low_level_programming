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
  int i = 1;
  int n = argc - 1;

  (void)argv;
  if (i == argc)
    printf("0\n");
  else
    printf("%d\n", n);
  return (0);
}
