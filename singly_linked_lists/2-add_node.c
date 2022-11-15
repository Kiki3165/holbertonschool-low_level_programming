#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *node;
node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->str = strdup(str);
node->len = strlen(str);
node->next = *head;
*head = node;
return (*head);
}
