#include "main.h"

/**
 * argstostr - concatenates all arguments passed to the function
 *
 * @ac: the number of arguments
 * @av: The arguments passed
 * Return: Concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int count = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
	}

	ptr = malloc(sizeof(char) * (count + ac + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';

	return (ptr);
}
