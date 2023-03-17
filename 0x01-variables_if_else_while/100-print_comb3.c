#include <stdio.h>

/**
 * main - The program starts with this function
 *
 * Return: Returns 0 always
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = (n + 1); m < 10; m++)
		{
			putchar('0' + n);
			putchar('0' + m);

			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
