#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes var of type struct dog
 *
 * @name: name of dogs
 * @age: age of dog
 * @owner: owner of dog
 * @d: represent the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
