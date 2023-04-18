#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: dog struct
 * return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
