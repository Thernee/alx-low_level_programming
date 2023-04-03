#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: pointer to the destination array
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, m;
	m = n;

	for (i = 0; i < m; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
