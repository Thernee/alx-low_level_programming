#include "main.h"

/**
 * _isupper - Checks for the uppercase character
 *
 * @c: The parameter passed to _isupper
 * Return: returns an uppercase char if successful, 1 if not
 */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);

		}
		else
		{
			return (0);
		}

	return (0);
}
