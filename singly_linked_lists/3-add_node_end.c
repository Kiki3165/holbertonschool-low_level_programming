#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 *@h: h
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp = head;
list_t *node;
node = malloc(sizeof(list_t));
if (!node)
{
free(node;
return (NULL);
}
node->str = strdup(str);
node->len = strlen(str);
node->next = NULL;
if (!*head)
{
*head = node;
return (node);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = node;
return (node);
}
