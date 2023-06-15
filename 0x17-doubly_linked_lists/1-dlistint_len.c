#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlistint list
 *
 * @h: head of the list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *holder;
	size_t count = 0;

	if (h == NULL)
		return (0);

	holder = h;
	while (holder->next != NULL)
	{
		count++;
		holder = holder->next;
	}

	return (count);
}
