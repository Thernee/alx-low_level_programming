#include <stdio.h>

/**
 * main - Lists natural numbers below 1024
 *
 * Return: Returns natural numbers that are multiples of 5 or 3
 */
int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
