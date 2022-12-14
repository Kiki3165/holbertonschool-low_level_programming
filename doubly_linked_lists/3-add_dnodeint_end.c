#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 *@head:head
 *@n:n
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp = *head;

	node = malloc(sizeof(dlistint_t));
	tmp = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (*head == NULL)
	{
		node->n = n;
		node->next = NULL;
		node->prev =  NULL;
		*head = node;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			tmp = *head;
			(*head) = (*head)->next;
			(*head)->prev = tmp;
		}

		tmp = *head;
		node->n = n;
		tmp->next = node;
		node->next = NULL;
		node->prev = tmp;
		*head = node;
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
	}
	return (node);
}
