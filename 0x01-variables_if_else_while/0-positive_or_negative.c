#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - The code starts here
 *
 * Return: It should always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Here goes my code */
	if (n < 0)
	{
		printf("%d is negative\n", n);

	} else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is positive\n", n);
	}

	return (0);
}
