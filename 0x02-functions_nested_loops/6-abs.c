#include "main.h"

/**
 * _abs - Calculates the absolut value of an integer
 *
 * @n: parameter given to _abs
 * Return: Returns 0 if successful, 1 otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
