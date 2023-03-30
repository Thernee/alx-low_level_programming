#include "main.h"

/**
 * _strncat - concatenates n bytes of two strings
 *
 * @src: source to be concatenated
 * @dest: Destination to be concatenated
 * @n: Number of bytes to be concatenated
 * Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
