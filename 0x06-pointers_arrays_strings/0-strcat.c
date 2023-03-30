#include "main.h"

/**
 * _strcat - Concatenates 2 strings
 *
 * @src: source to be concatenated from
 * @dest: To be concatenated to
 * Return: Returns concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length_of_dest = 0;
	int length_of_src = 0;

	for (i = 0; src[i] != '\0'; i++)
		length_of_src++;
	for (i = 0; dest[i] != '\0'; i++)
		length_of_dest++;
	for (i = 0; i < length_of_src; i++)
	{
		dest[length_of_dest + 1] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
