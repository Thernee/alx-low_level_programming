#include "main.h"

/**
 * cap_string - capitalizes all word beginnings
 *
 * @s: Given string
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	int new_word = 1;
	char special_chars[] = {' ', '\t', '\n', ',', '.', '!', '?', ';', ':'};
	int special_chars_size = sizeof(special_chars) / sizeof(char);

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; j < special_chars_size; j++)
		{
			if (s[i] == special_chars[j])
			{
				new_word = 1;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			if (new_word)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 'a' + 'A';
				}
				new_word = 0;
			}
		}
	}

	return (s);
}

