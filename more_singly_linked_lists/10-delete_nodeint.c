#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 *@head:head
 *@index:index
 * 
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head;
	listint_t *p = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = p->next;
		free(p);
	}
	else
	{
		i = p;
		p = p->next;
		while (index != 1)
		{
			if (p == NULL || p->next == NULL)
				return (-1);
			i = p;
			p = p->next;
			index--;
		}
		i->next = p->next;
		free(p);
	}
	return (1);
}
