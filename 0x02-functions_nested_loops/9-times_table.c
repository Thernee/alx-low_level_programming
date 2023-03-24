#include "main.h"

/**
 * times_table - prints the 9x table
 *
 * Return: no return statement to be specified
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar('0' + x * y);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
