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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
