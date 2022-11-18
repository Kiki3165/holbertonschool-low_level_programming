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
	listint_t *tmp;
	int d;

	if (*head == NULL)
		return (0);

	tmp = *head;
	tmp = tmp->next;
	d = (*head)->n;
	free(*head);
	*head = tmp;
	return  (d);
}
