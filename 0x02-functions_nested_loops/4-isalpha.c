#include "main.h"

/**
 * _isalpha - checks if given input is lower or uppercase
 *
 * @c: Parameter given to _isalpha
 * Return: Returns 1 if successful, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
