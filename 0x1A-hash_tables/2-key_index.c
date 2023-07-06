#include "hash_tables.h"

/**
 * key_index - Finds the index of a given key
 *
 * @key: The given key
 * @size: size of the array of the hash table
 * Return: The index to store key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, ascii_sum;

	ascii_sum = hash_djb2(key);

	if (ascii_sum == 0 || size == 0)
		return (0);

	index = ascii_sum % size;
	return (index);
}
