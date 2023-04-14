#include "main.h"

/**
 * array_range - creates and array of a given range
 *
 * @min: start value
 * @max: end value
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int diff = max - min;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * (diff + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
