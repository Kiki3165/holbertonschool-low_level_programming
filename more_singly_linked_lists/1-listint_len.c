#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 *@h: h
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
