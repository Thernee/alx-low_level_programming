#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};

#include <stdlib.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
