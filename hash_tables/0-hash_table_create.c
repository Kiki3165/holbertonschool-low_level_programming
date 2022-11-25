#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 *@size:size
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *t;
t = malloc (sizeof(hash_table_t));
if (t == NULL)
{
return (NULL);
}
t->size = size;
t->array = malloc(size * sizeof(hash_node_t *));
return (t);
}
