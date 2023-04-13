#include "main.h"

/**
 * string_nconcat - concatenates 2 strings with n bytes
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer to newly aloocated space with string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, *ptr;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (n >= len2)
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			ptr[len1 + j] = s2[j];
		}
		ptr[len1 + len2] = '\0';
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			ptr[len1 + j] = s2[j];
		}
		ptr[len1 + n] = '\0';
	}
	return (ptr);
}
