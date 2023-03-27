#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: String to be printed
 * Return: Returns nothing
 */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
