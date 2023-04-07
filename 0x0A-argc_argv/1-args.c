#include <stdio.h>

/**
 * main - prints the number of arguments oassed to it
 *
 * @argc: Number of arguments
 * @argv: The passed arguments
 * Return: returns the number of arguments passed
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		argc--;
		printf("%d\n", argc);
	}

	return (0);
}
