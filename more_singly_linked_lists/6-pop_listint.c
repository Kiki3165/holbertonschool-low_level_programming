#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 *@head: head
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	node = *head;
	node = node->next,
	n = (*head)->n;
	free(node);
	*head = node;
	return (n);
}
