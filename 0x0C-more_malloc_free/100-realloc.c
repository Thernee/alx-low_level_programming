#include "main.h"

/**
 * blockcpy - copies content of one memblock to another
 *
 * @new_ptr: pointer to new memory
 * @ptr: pointer to old memory
 * @new_size: size of new block
 * Return: pointer to new memory
 */
char *blockcpy(char *new_ptr, char *ptr, unsigned int new_size)
{
	unsigned int i;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < new_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	ptr = new_ptr;
	return (ptr);
}

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
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
		free(ptr);
		ptr = new_ptr;
	}
	else
	{
		new_ptr = malloc(new_size);
		blockcpy(new_ptr, ptr, new_size);
	}
	return (ptr);

}
