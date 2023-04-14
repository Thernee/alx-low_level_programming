#include "main.h"

/**
 * str_length -returns length of a string
 *
 * @s: the string
 * Return: length of string
 */
unsigned int str_length(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * string_nconcat - concatenates 2 string with n bytes
 *
 * @s1: First string
 * @s2: second string
 * @n: bytes to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = str_length(s1);
	unsigned int len2 = str_length(s2);
	unsigned int i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n > len2)
	{
		n = len2;
	}
	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (; i < (len1 + n); i++)
	{
		result[i] = s2[i - len1];
	}
	result[i] = '\0';
return (result);
}
