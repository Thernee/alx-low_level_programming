#include "search_algos.h"

/**
 * linear_search - searches an array using linear search
 *
 * @array: The array to search
 * @value: Value to be saerched
 * @size: size of the array
 * Return: Index where value is found, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
