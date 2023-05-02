#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at a given index
 *
 * @head: head of the node
 * @index: the given index
 * Return: node at given index or NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *holder;

	holder = head;

	while (holder != NULL && i < index)
	{
		holder = holder->next;
		i++;
	}
	return (holder);
}
