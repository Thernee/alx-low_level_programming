#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: A C String
 * @c: character to be located
 * Return: Returns a pointer to the first occurence of c or null otherwise
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
