#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index
 *
 * @h: pointer to the head of the list
 * @idx: the given index
 * @n: Data to put in list
 * Return: Address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *holder, *new_node, *temp;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	holder = *h;
	while (idx != 0)
	{
		if (holder == NULL)
			return (NULL);

		holder = holder->next;
		idx--;
	}

	temp = holder->prev;
	new_node->next = holder;
	new_node->prev = temp;
	holder->prev = new_node;

	if (temp != NULL)
		temp->next = new_node;
	else
		*h = new_node;

	return (new_node);
}

