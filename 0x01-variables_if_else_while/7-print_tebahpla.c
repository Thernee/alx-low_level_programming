#include <stdio.h>

/**
 * main - The program starts from this function
 *
 * Return: Returns zero for success
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
