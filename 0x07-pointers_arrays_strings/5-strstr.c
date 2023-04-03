#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: String to be searched
 * @needle: Substring to be saerched
 * Return: Returns pointer to the beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
	}
	return (NULL);
}
