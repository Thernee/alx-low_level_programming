#include "dog.h"

/**
 * copy_string -copies string from src to dest
 *
 * @dest:destination
 * @src: source
 * Return: nothing
 */
void copy_string(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

/**
 * new_dog - creates a new dog struct
 *
 * @name: name of the dog
 * @age: Age of dog
 * @owner: name of owner
 * Return: copy of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcpy = malloc(sizeof(dog_t));
	int namecount = 0;
	size_t ownercount = 0;
	char *namecpy;
	char *ownercpy;

	if (dogcpy == NULL)
	{
		return (NULL);
	}

	while (name[namecount] != '\0')
	{
		namecount++;
	}
	while (owner[ownercount] != '\0')
	{
		ownercount++;
	}
	namecpy = malloc(namecount + 1);
	ownercpy = malloc(ownercount + 1);
	if (namecpy == NULL || ownercpy == NULL)
	{
		free(dogcpy);
		free(namecpy);
		free(ownercpy);
		return (NULL);
	}

	copy_string(namecpy, name);
	copy_string(ownercpy, owner);

	dogcpy->name = namecpy;
	dogcpy->age = age;
	dogcpy->owner = ownercpy;

	return (dogcpy);
}

