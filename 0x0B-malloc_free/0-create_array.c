#include "main.h"

/**
 * create_array - creates an array of char using malloc
 *
 * @size: size of array
 * @c: Array content
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i, m;

	m = size;
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *)malloc(m * sizeof(char));
		for (i = 0; i < m; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
