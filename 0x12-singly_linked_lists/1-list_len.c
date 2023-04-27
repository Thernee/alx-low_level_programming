#include "lists.h"

/**
 * list_len - counts the number of elements ina linked list
 *
 * @h: the head element
 * Return: Total number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
