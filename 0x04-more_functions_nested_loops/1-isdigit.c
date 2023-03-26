#include "main.h"

/**
 * _isdigit - checks for digit in 0 to 9 range
 *
 * @c: Digit parameter passed to the function
 * Return: returns 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
