#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code
 *@head: head
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
listint_t *node;
while (head)
{
node = head;
head = head->next;
free(node);
}
}
