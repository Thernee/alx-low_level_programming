#include "main.h"

/**
 * _strdup - returns a pointer to copy of given string
 *
 * @str: Given string
 * Return: pointer to copy of string on succes, NULL otherwise
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(str));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
