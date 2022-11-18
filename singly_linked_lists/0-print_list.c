#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 *@h: h
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[o] (nil)\n");
i++;
h = h->next;
}
printf("[%d] %s\n", h->len, h->str);
i++;
h = h->next;
}
return(i);
}
