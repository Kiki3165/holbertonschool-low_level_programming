#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
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
