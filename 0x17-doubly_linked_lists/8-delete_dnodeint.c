#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at given index
 *
 * @head: pointer to the haed of the list
 * @index: Given index
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *holder, *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index < 0)
		return (-1);

	index += 1;
	holder = *head;

	while (index != 1)
	{
		if (holder->next != NULL)
			holder = holder->next;

		else
			return (-1);
	}
	if (holder->next != NULL)
	{
		ahead = holder->next;
		behind = holder->prev;
		temp = holder;
		behind->next = ahead;
		ahead->prev = behind;
		return (0);
	}
	else if (holder->next == NULL)
	{
		holder->prev = temp;
		temp->next = NULL;
		holder->prev = NULL;
		return (1);
	}

}
