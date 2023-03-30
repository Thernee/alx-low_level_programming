#include "main.h"

/**
 * reverse_array - Reverses contents of an array (int)
 *
 * @a: Array
 * @n: Number of array element
 * Return: Returns nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
