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
const list_t *p;
while (p != NULL)
{
if (p->str == NULL)
{
printf("[o] (nil)\n");
i++;
p = p->next;
}
printf("[%d] %s\n", p->len, p->str);
i++;
p = p->next;
}
return(i);
}
