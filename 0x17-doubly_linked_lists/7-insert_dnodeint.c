#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index
 *
 * @h: pointer to the head of the list
 * @idx: the given index
 * @n: Data to put in list
 * Return: Address of new node, NUll if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *holder, *new_node, *temp;

	if (idx < 0)
		return (NULL);

	if (h == NULL || *h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	while (idx != 1)
	{
		if (holder->next != NULL)
		{
			holder = holder->next;
			idx--;
		}
		else
			return (NULL);
	}
	temp = holder->next;
	new_node->next = temp;
	new_node->prev = holder;
	holder->next = new_node;
	temp->prev = new_node;

	return (*h);
}
