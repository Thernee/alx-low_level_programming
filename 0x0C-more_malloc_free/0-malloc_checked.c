#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: memory size
 * Return: pointer to alocated memory, or exit status value 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
