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

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (head->n)
		return (head);
	else
	{

		return (NULL);
	}
}
