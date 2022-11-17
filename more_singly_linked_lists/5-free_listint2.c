#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 *@head: head
 * Return: Always 0.
 */

void free_listint2(listint_t **head);
{
listint_t *node = *head;
listint_t *next;
if (head == NULL)
return;
while (node)
{
next = node->next;
free(node);
node = next;
}
*head = NULL;
}
