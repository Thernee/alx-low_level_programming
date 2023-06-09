#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at given index
 *
 * @head: pointer to the head of the list
 * @index: Given index
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder, *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (-1);

	holder = *head;
	if (index == 0)
	{
		*head = holder->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(holder);
		return (1);
	}

	while (index > 0)
	{
		if (holder == NULL)
			return (-1);
		holder = holder->next;
		index--;
	}

	if (holder != NULL)
	{
		ahead = holder->next;
		behind = holder->prev;

		if (ahead != NULL)
			ahead->prev = behind;

		if (behind != NULL)
			behind->next = ahead;
		else
			*head = ahead;

		free(holder);
		return (1);
	}
	return (-1);
}
