#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes
 *
 * @s: String to be searched
 * @accept: characters to be searched
 * Return: returns pointer bytes found or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (NULL);
}
