#include <stdio.h>

/**
 * main - The program starts here
 *
 * Return: Returns 0 always
 */
int main(void)
{
	char c = 'a';
	char s = '\n';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar(s);
	return (0);
}
