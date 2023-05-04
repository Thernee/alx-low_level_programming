#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from one number to another
 * @n: current number
 * @m: desired number
 * Return: number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int holder;

	holder = n ^ m;

	while (holder > 0)
	{
		count += (holder & 1);
		holder >>= 1;
	}

	return (count);
}
