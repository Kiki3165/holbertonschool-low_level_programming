#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 *@h: h
 * Return: Always 0.
 */

void free_list(list_t *head)
{
while (head != NULL)
{
node* temp = head;
head = head->next;
free(temp);
}
}
