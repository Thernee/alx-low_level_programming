#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String to be reversed
 * Return: Returns nothing
 */
void rev_string(char *s)
{
	int i;
	int counter;

	for (i = 0; i != '\0'; i++)
	{
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
