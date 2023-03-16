#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Should return 0 always
 */
int main(void)
{
	long long i;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(i));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
