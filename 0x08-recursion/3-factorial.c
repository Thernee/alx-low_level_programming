#include "main.h"

/**
 * factorial - Returns the factirial of a given number
 *
 * @n: Number to find the factorial of
 *
 * Return: Returns the factorial if n > 0, -1 if n < 0, 1 if n == 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
