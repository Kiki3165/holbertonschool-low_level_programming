#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code
 *@h: h
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
int c = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
return (c);
}
