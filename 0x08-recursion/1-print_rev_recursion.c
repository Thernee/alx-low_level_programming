#include "main.h"
#include <stddef.h>

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: String to be printed
 * Return: returns nothing
 */
void _print_rev_recursion(char *s)
{
	if (s == NULL)
	{
		return;
	}
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

