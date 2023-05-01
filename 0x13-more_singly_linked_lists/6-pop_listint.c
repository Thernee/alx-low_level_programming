#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 *
 * @head: pointer to the head of the list
 * Return: Data stored in headnode
 */
int pop_listint(listint_t **head)
{
	listint_t *holder;
	int n_holder = 0;

	if (head == NULL || *head == NULL)
		return (0);

	holder = *head;
	n_holder = holder->n;

	*head = holder->next;
	free(holder);

	return (n_holder);
}
