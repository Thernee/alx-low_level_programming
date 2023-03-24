#include "main.h"

/**
 * _islower - checks for lowercase characters from given input
 *
 * @c: Parameter given to _islower
 * Return: To return success always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}

