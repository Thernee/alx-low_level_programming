#include <stdio.h>

/**
 * main - Prints all the received arguments
 *
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: Returns arguments per line
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
