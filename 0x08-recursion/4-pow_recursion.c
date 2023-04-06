#include "main.h"

/**
 * _pow_recursion - returns the power of a given integer
 *
 * @x: The value
 * @y: the power
 *
 * Return: Returns -1 if y < 0, 1 if y==0 and the y to power of y otherwise
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x *= _pow_recursion(x, y - 1));
}
