#include "main.h"

/**
 * _strspn - Gets the length of particular bytes from a string
 *
 * @s: String to search through
 * @accept: characters to search for
 * Return: Returns total number of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *ptr;

	for (; *s; s++)
	{
		for (ptr = accept; *ptr && *ptr != *s; ptr++)
		{
		}
		if (!*ptr)
		{
			break;
		}
		count++;
	}
	return (count);
}
