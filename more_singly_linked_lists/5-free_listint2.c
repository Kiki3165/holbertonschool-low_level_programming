#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 *@head: head
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
listint_t *node;

if (head == NULL)
return;
node = *head;
while (*head != NULL)
{
node = node->next;
free(*head);
*head = node;
}
*head = NULL;
}
