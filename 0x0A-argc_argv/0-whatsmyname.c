#include <stdio.h>

/**
 * main - prints the name of the current program
 * @argc: the number of arguments passed to the programs
 * @argv: The arguments passed to the program
 * Return: should return the name of the program
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s", *argv);
	printf("\n");
	return (0);
}
