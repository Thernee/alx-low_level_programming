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
	int i, j, count;

	count = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
		}
	}
	return (count);
}
