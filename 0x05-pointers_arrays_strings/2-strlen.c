#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: char parameter to count
 * Return: returns number of strings
 */
int _strlen(char *s)
{
	int i;
	int sum = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum += i;
	}
	_putchar('0' + sum);

	return (0);
}
