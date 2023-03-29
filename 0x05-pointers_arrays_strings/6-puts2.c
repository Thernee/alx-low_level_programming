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
	int counter = 0;

	for (i  = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i < counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
