#include <stdio.h>

/**
 * main - Program starts here
 *
 * Return: Returns 0 always
 */
int main(void)
{
	char c = 'a';
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
