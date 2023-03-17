#include <stdio.h>

/**
 * main - All the code will be in this function
 *
 * Return: Returns 0 always
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);

		if (n != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
