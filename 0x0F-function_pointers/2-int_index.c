#include "function_pointers.h"

/**
 * int_index - prints index for when function doesnt return 0
 *
 * @array: Array to be searched
 * @size: size of the array
 * @cmp: function to compare values of array
 * Return: index when cmp doesnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int checker = 0;
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			checker = cmp(array[i]);
			if (checker != 0)
			{
				return (i);
			}
		}
	}
	return (i);
}
