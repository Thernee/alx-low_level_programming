#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and separator using variadic function
 *
 * @separator: symbols that separate the numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arg = 0;
	va_list arg_list;

	va_start(arg_list, n);
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		arg = va_arg(arg_list, int);
			printf("%d", arg);
		if (i < n -1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
}
