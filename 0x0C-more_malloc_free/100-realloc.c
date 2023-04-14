#include "main.h"

/**
 * _realloc - Reallocates a memory string to a given size
 *
 * @ptr: pointer to current memory of string
 * @old_size: space allocated to current string
 * @new_size: new space to be allocated
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size  == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		new_ptr = ptr;
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			ptr = new_ptr;
			free(new_ptr);
		}
		for (i = 0; i < old_size; i++)
		{
			ptr[i] = new_ptr;
		}
	}
	return (ptr);

}
