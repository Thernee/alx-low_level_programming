#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print complete struct of dog
 *
 * @d: The structure
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else if (d->age < 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
