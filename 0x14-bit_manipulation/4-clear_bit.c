#include "main.h"

/**
 * clear_bit - sets a bit at given index to 0
 *
 * @n: pointer to the bit
 * @index: given index
 * Return: i
 * 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((1 << index) & *n)
		*n ^= (1 << index);

	return (1);
}
