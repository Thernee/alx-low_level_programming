#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: String integer given to the function
 * Return: Returns number of strings
 */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	return (sum);
}
