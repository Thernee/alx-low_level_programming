#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: Returns value of comparison (int)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
