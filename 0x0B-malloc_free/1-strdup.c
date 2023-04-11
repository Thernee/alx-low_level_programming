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
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{

	}
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
