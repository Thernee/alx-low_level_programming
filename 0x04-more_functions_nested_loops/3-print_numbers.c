#include "main.h"

/**
 * print_numbers - prints integers 0 - 9
 *
 * Return: success always
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
