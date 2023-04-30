#include "lists.h"

/**
 * listint_len - prints the number of elements in a list
 *
 * @h: head of the list
 * Return: total number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
