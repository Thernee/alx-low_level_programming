#include "main.h"

/**
 * string_toupper - chnages all lowercase letters to uppercase
 *@s: string to be opearated on
 * Return: Returns uppercase string
 */
char *string_toupper(char *s)
{
	int i;
	char x = 'A';
	char y;
	char temp[500];

	for (i = 0; i <= 26; i++)
	{
		while (x <= 'Z')
		{
			temp[i] = x;
			x++;
		}
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			if (s[i] == y)
			{
				s[i] = temp[i];
			}
		}
	}
	return (s);
}
