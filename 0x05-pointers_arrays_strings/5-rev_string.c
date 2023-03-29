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
	int counter = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		temp = s[i];
		s[i] = s[counter];
		s[counter] = temp;
	}
}
