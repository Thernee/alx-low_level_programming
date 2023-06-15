#include "lists.h"

/**
 * sum_dlistint - Sums all data in dlistint_t list
 *
 * @head: head of the list
 * Return: Sum of all data in list, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *holder;
	int sum = 0;

	if (head == NULL)
		return (0);

	holder = head;
	while (holder->next != NULL)
	{
		sum += holder->n;
		holder = holder->next;
	}
	return (sum);
}
