#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of combination of coins for given value
 * @argc: Total number of arguments passed to function
 * @argv: The string arguments passed to the function
 * Return: Returns 0 for success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int value, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value <= 0)
	{
		printf("0\n");
		return (1);
	}

	for (cents = 0; value > 0; cents++)
	{
		if (value >= 25)
		{
			value -= 25;
		} else if (value >= 10)
		{
			value -= 10;
		} else if (value >= 5)
		{
			value -= 5;
		} else if (value >= 2)
		{
			value -= 2;
		} else
		{
			value--;
		}
	}

	printf("%d\n", cents);
	return (0);
}

