#include "main.h"

/**
 * _length - Computes the length of a string recursively
 *
 * @s: char pointer to given string
 * Return: length of given string
 */
int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _length(s + 1));
}

/**
 * _palindrome_helper - Returns 1 if a string is a palindrome and 0 if not
 *
 * @s: char pointer to string
 * @first: integer representing the start of the current substring
 * @last: integer representing the end of the current substring
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _palindrome_helper(char *s, int first, int last)
{
	if (first >= last)
	{
		return (1);
	}

	else if (s[first] != s[last])
	{
		return (0);
	}

	return (_palindrome_helper(s, first + 1, last - 1));
}

/**
 * is_palindrome - Wrapper function that calls _is_palindrome_recursive
 *
 * @s: pointer to string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{

	return (_palindrome_helper(s, 0, _length(s) - 1));
}

