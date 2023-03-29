#include "main.h"

/**
 * *_strcpy - copies string pointed by SRC to buffer pointed by DEST
 *
 * @src: points to string to be copied
 * @dest: points to destination buffer
 * Return: Returns pointer to DEST
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
