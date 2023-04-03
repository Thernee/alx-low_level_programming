#include "main.h"

/**
 * _memset - fills memory with constant bytes
 *
 * @s: Pointer to block of memory to fill
 * @b: bytes to use in filling memory
 * @n: number of positions to be filled
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int m  = n;

	for (i = 0; i < m; i++)
	{
		s[i] = b;
	}
	return (s);
}
