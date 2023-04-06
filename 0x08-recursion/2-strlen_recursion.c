#include "main.h"

/**
 * _strlen_H - serves as a helper to _strlen_recursion
 *
 * @count: Takes the count of characters
 * @s: string to be counted
 * Return: returns length of  given string
 */
int _strlen_H(char *s, int count)
{
	if (*s == '\0')
	{
		return (count);
	}
	else
	{
		return (_strlen_H(s + 1, count + 1));
	}
}

/**
 * _strlen_recursion - returns lemgth of a string using recursion
 *
 * @s: Strint to be counted
 *
 * Return: returns number of strings
 */


int _strlen_recursion(char *s)
{
	return (_strlen_H(s, 0));
}
