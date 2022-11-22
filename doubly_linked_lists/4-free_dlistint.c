#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 *@head:
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *trash;

	while (head != NULL)
	{
		trash = head;
		head = head->next;
		free(trash);
	}
}
