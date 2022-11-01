#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Entry point
 * @name: name
 * @age: age
 * @owner: owner
 * return:
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *c;
int j, k, l;
c = malloc(sizeof(dog_t));
if (c == NULL)
return (NULL);
j = strlen(name) + 1;
k = strlen(owner) + 1;
c->name = malloc(sizeof(char) * j);
if ((*c).name == NULL)
{
free(c);
return (NULL);
}
for (l = 0; l < j; l++)
{
c->name[l] = name[l];
}
c->age = age;
c->owner = malloc(sizeof(char) * k);
if ((*c).owner == NULL)
{
free(c->name);
free(c);
return (NULL);
}
for (l = 0; l < k; l++)
{
c->owner[l] = owner[l];
}
return (c);
}
