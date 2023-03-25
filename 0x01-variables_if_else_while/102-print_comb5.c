#include <stdio.h>

/**
 * main - prints all the combination of pairs of 2-digit numbers
 *
 * Return: Returns 0 always
 */
int main(void)
{
	int i;
	int j;
	int n;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (n = 0; n < 10; n++)
			{
				for (m = 1; m < 10; m++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + n);
					putchar('0' + m);

					if (i != 9 && j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
