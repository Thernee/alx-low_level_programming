#include "main.h"

/**
 * str_concat - concatenates 2 strings using malloc
 *
 * @s1: First string
 * @s2: Second string
 * Return: pointer to concatenated string, or NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}

