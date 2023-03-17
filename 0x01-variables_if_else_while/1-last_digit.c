#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program starts with this function
 *
 * Return: Should always return 0
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = (n % 10);
	if (digit < 6 && digit != 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", digit);
	} else if (n >= 6)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is 0 and is 0\n", digit);
	}
	return (0);
}
