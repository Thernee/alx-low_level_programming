#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of square matrix
 *
 * @a: The square matrix
 * @size: Size of the matrix
 * Return: Sum of the 2 diagonals
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i][i];
		diag2 += a[i][size - i - 1];
	}
	printf("%d, %d\n", diag1, diag2);
}
