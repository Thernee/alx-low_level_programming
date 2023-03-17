#include <stdio.h>

/**
 * main - This where the program starts
 *
 * Return: Should always return 0
 */
int main(void)
{
	char l = 'a';
	char s = '\n';

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	putchar(s);
	return (0);
}
