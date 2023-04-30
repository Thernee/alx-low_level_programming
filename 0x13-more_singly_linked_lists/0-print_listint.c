#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h: head of the list
 * Return: total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
