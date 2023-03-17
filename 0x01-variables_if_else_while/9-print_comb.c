#include <stdio.h>

/**
 * main - All the code will be in this function
 *
 * Return: Returns 0 always
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 9; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}
	putchar('0' + n);
	return (0);
}
