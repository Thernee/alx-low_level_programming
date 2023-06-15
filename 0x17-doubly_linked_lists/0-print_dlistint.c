#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list's list
 *
 * @h: Head of the lis
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *holder;
	size_t count = 0;

	if (h == NULL)
		return (0);

	holder = head;
	while (holder->next != NULL)
	{
		count++;
		printf("%d\n", holder->n);
		holder = holder->next;
	}

	return (count);
}