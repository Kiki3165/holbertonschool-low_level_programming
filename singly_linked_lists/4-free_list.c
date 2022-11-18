#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 *@head: head
 * Return: Always 0.
 */

void free_list(list_t *head)
{
   struct node* tmp;

   while (head != NULL)
    {
       list_t tmp = *head;
       head = head->next;
       free(head);
    }

}