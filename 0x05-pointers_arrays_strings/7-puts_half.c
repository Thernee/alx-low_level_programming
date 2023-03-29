#include "main.h"

/**
 * puts_half - Prints the second half of a string
 *
 * @str: String to be operated on
 * Return: Returns nothing
 */
void puts_half(char *str)
{
	int i;
	int end;
	int counter;

	counter = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		end  = counter / 2;

		for (i = end; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (counter % 2 != 0)
	{
		end = (counter - 1) / 2;
		for (i = end + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
