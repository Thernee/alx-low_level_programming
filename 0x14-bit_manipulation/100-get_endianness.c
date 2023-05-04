#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *checker;

	checker = (char *) &i;

	if (*checker == 1)
		return (1);

	else
		return (0);


}
