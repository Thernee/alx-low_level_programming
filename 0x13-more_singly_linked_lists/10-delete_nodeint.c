#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index
 *
 * @head: pointer to head of the list
 * @index: the given index
 * Return: Address of new node, NULL if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *holder, *my_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		my_node = (*head)->next;
		free(*head);
		*head = my_node;
		return (0);
	}

	holder = *head;

	while (i < index - 1 && holder->next != NULL)
	{
		holder = holder->next;
		i++;
	}

	if (i < index - 1)
		return (-1);

	my_node = holder->next;
	holder->next = my_node->next;
	free(my_node);

	return (0);
}

