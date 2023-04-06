#include "main.h"


/**
 * sqrt_H - Helper function for _sqrt_recursion
 * @x: given number
 * @y: used for iteration
 * Return: returns Operated number
 */
int sqrt_H(int x, int y)
{
	int sqr;

	sqr = y * y;
	if (sqr == x)
		return (y);
	else if (sqr > x)
		return (-1);

	return (sqrt_H(x, y + 1));
}

/**
 * _sqrt_recursion - calculates sqrt using recursion
 *
 * @n: Number to be worked on
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_H(n, 1));
}
