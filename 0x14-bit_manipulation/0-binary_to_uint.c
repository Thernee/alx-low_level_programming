#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: string containing binary
 * Return: conerted number, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int power = 1, i;

	if (*b != '0' && *b != '1')
		return (0);
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		sum += power * (b[i] - '0');
		power *= 2;
	}
	return (sum);
}
