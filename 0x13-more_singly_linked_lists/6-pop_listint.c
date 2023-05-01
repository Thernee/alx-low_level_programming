#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 *
 * @head: pointer to the head of the list
 * Return: Data stored in headnode
 */
int pop_listint(listint_t **head)
{
	listint_t *holder, *temp;
	int n_holder = 0;

	if (head == NULL || *head == NULL)
		return (0);

	holder = *head;
	n_holder = holder->n;

	temp = holder;
	holder = holder->next;
	free(temp);

	return (n_holder);
}
