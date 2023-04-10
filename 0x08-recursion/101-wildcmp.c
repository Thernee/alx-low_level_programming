#include "main.h"

/**
 * wildcmp - compares 2 given strings
 *
 * @s1: The first string
 * @s2: The seconds string
 * Return: Returns 1 if identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
	}
	return ((*s1 == *s2) && (*s1 ? wildcmp(s1 + 1, s2 + 1) : 1));
}

