#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the structure
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
