#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: Array to be printed
 * @n: number of elements of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[n - 1]);
	printf("\n");
}
