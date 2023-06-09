#include "main.h"
#include <stdlib.h>

#include "main.h"

/**
 * error - prints error
 *
 * Return: exit 98
 */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * _atoi - converts string to integers
 *
 * @str: string to be converted
 * Return: converted string
 */
int _atoi(const char *str)
{
	int sign = 1, result = 0, i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		i++;
	}

	if (str[i] == '+')
	{
		i++;
	} else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/**
 * main - multiplies 2 positive integers
 *
 * @argc: Number of arguments
 * @argv: The arguments
 * Return: Result of multiplication
 */
int main(int argc, char **argv)
{
	int mul = 1;
	int num1, num2;

	if (argc != 3)
	{
		error();
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	if (num1 < 0 || num2 < 0)
	{
		error();
	}
	else
	{
		mul = num1 * num2;
		_putchar('0' + mul);
		_putchar('\n');
	}

	return (0);
}


