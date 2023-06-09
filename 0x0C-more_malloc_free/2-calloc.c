#include "main.h"

/**
 * _calloc - Allocates memory of nmemb of size bytes each
 * @nmemb: members to be allocated
 * @size: Size of the members in bytes
 * Return: pointer to allocated block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);

}
