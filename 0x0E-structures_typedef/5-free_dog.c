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
	free(d->name);
	free(d->owner);
	free(d);
}
