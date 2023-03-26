#include "main.h"

/**
 * more_numbers - prints integers 1 to 14, 10 times
 *
 * Return: Void function, null return
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m / 10 > 0)

				_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
		}
		_putchar('\n');
	}
}
