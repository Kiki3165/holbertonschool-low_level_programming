#ifndef LIST_H
#define LIST_H

typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif