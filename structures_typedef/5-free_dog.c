#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 *
 * 
 * 
 * 
 */

void free_dog(dog_t *d)
{
if ( d != NULL)
free(d->name);
free(d->owner);
free(d);
}
