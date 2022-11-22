#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 *@h:h
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
const dlistint_t *p = h;
while (p != NULL)
{
if (p->prev == NULL)
{
printf("[o] (nil)\n");
i++;
p = p->next;
}
printf("[%d] %s\n", p->n, p->prev);
i++;
p = p->next;
}
return (i);
}
