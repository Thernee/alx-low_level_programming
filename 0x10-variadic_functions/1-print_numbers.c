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
	unsigned int i;
	va_list arg_list;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(arg_list);
}
