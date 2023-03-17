#include <stdio.h>

/**
 * main - This function starts the program
 *
 * Return: Returns 0 always
 */
int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');
	return (0);
}
