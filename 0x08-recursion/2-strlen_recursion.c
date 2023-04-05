#include "main.h"

/**
 * _strlen_recursion - returns lemgth of a string using recursion
 *
 * @s: string to be counted
 * Return: returns length of  given string
 */
int _strlen_recursion(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
