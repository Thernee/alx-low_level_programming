#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: parameter passed to the function
 * Return: Always 0
 */
void print_times_table(int n)
{
	int x;
	int y;
	int mult;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			mult  = x * y;
			if ((n > 15) || (n < 0))
			{
				break;
			}
			else
			{
				_putchar('0' + mult);
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
