#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 numbers
 *
 * @argc: Total number of arguments passed to the function
 * @argv: Arguments passed to the strint
 * Return: Returns result of multiplication of 2 numbers
 */
int main(int argc, char **argv)
{
	int x = 0, y = 0;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if  (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		printf("%d\n", (x * y));
	}
	return (0);
}
