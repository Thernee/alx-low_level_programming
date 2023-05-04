#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from one number to another
 * @n: current number
 * @m: desired number
 * Return: number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	while ((n ^ m) > 0)
	{
		count += (n ^ m) & 1;
		n ^= m;
		n >>= 1;
	}
	return (count);
}
