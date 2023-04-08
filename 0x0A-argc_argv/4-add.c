#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers together
 *
 * @argc: The argument count
 * @argv: the argument vector
 * Return: returns 1 if there is and error Added numbers if successful
 */

int main(int argc, char **argv)
{
	int i = 1;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (argv[i] != NULL)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		add += atoi(argv[i]);
		i++;
	}

	printf("%d\n", add);

	return (0);
}


