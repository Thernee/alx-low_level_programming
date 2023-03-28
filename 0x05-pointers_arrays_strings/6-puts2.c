#include "main.h"

/**
 * puts2 - prints even numbers from 0-9 including 0
 *
 * @str: String to be printed from
 * Return: Returns nothing
 */
void puts2(char *str)
{
	int i;

	for (i  = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar('0' + str[i]);
		}
	}
	_putchar('\n');
}
