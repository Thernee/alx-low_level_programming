#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at given index
 *
 * @head: pointer to head of the list
 * @idx: the given index
 * @n: value to put at index
 * Return: Address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *holder, *my_node;

	if (head == NULL)
		return (NULL);

	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
		return (NULL);

	holder = *head;
	if (idx == 0)
	{
		my_node->n = n;
		my_node->next = holder;
		*head = my_node;
		return (my_node);
	}

	while (holder != NULL)
	{
		if (i == (idx - 1))
		{
			my_node->n = n;
			my_node->next = holder->next;
			holder->next = my_node;
			return (my_node);
		}
		holder = holder->next;
		i++;
	}
	return (NULL);
}
