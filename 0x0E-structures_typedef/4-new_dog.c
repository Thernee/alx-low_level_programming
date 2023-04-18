#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog struct
 *
 * @name: name of dog
 * @age: Age of dog
 * @owner: name of owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecpy;
	char *ownercpy;
	dog_t *dogcpy;

	dogcpy = malloc(sizeof(dog_t));
	if (dogcpy == NULL)
		return (NULL);

	namecpy = malloc(sizeof(dogcpy->name) + 1);
	if (namecpy == NULL)
	{
		free(namecpy);
		free(dogcpy);
		return (NULL);
	}

	ownercpy = malloc(sizeof(dogcpy->owner) + 1);
	if (ownercpy == NULL)
	{
		free(ownercpy);
		free(namecpy);
		free(dogcpy);
		return (NULL);
	}
	dogcpy->name = name;
	dogcpy->age = age;
	dogcpy->owner = owner;
	namecpy = dogcpy->name;
	ownercpy = dogcpy->owner;

	return (dogcpy);
}
