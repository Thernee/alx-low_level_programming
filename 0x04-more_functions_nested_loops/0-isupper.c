#include "main.h"

/**
 * _isupper - Checks for the uppercase character
 *
 * @c: The parameter passed to _isupper
 * Return: returns an uppercase char if successful, 1 if not
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c >= 'A' && c <= 'Z')
		{
			_putchar(c);
			_putchar(':');
			_putchar(' ');
			return (1);
		}
		else if (c = '32'; c <= '126'; c++)
		{
			_putchar(c);
			_putchar(':');
			_putchar(' ');
			return (0);
		}
		_putchar('\n');
	}
	return (0);
}
