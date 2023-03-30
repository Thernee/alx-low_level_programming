#include "main.h"

/**
 * _strncpy - copies n number of strings
 *
 * @src: source to copy from
 * @dest: Destination to copy to
 * @n: Number of strings to be copied
 * Return: Returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
