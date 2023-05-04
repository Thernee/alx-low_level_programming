#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: the given bit
 * @index: the index
 * Return: value of bit at index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (((1 << index) & n) == 0)
		return (0);

	else
		return (1);
}
