#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given number
 *
 * @n: Argument passed to the print_last_digit method
 * Return: Returns the last digit if successful, 1 otherwise
 */
int print_last_digit(int n)
{
	int digit;

	digit = (n % 10);
	if (n < 0)
		digit = -digit;
	_putchar('0' + digit);
	return (digit);

}
