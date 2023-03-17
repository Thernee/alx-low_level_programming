#include <stdio.h>

/**
 * main - prints all possible combination of 3 digits
 *
 * Return: Returns 0 always
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n < 8; n++)
	{
		for (m = (n + 1); m < 9; m++)
		{
			for (o = (m + 1); o < 10; o++)
			{

				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + o);

				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
