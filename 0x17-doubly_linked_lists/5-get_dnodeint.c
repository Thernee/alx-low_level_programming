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


	if (head == NULL)
		return (NULL);

	index += 1;
	holder = head;

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
