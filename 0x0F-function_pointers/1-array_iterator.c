#include "function_pointers.h"

/**
 * array_iterator - executes given function on each element of an array
 *
 * @array: The given array
 * @size: size of the array
 * @action: the given function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
