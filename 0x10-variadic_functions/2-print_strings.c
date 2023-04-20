#include "variadic_functions.h"

/**
 * print_strings - prints strings using variadic function
 *
 * @separator: symbols to be printed btw strings
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_list;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(str_list, char *) == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(str_list, char *));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str_list);
}
