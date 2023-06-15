#include "lists.h"

/**
 * get_dnodeint_at_index - return node at given index
 *
 * @head: head of the list
 * @index: given index
 * Return: returns node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *holder;

	node += 1;

	if (head == NULL || *head == NULL)
		return (NULL);

	holder = *head;

	while (index != 1)
	{
		if (holder->next != NULL)
		{
			holder = holder->next;
			index--;
		}

		else
		{
			return (NULL);
		}
	}
	return (holder);
}
