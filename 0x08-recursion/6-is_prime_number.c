#include "main.h"

/**
 * is_prime_H - helper function for is_prime_number
 *
 * @x: Given number
 * @y: Number used to iterate
 * Return: Returns 1 for prime and 0 otherwise
 */
int is_prime_H(int x, int y)
{
	if (y <= 1)
		return (1);

	if (x % y == 0)
		return (0);

	return (is_prime_H(x, y - 1));
}

/**
 * is_prime_number - returns 1 if prime and 0 otherwise
 *
 * @n: integer input
 * Return: returns if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_H(n, n / 2));
}

