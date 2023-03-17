#include <stdio.h>

/**
 * main - The program starts here
 *
 * Return: Returns 0 always
 */
int main(void)
{
	char c = 'a';
	char b = 'A';
	char s = '\n';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar(s);
	return (0);

}

