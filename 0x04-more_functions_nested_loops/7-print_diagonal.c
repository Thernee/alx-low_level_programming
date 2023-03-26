#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 *
 * @n: The number of times the character would be printed
 * Return: Void function
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');

		}
	}
}
