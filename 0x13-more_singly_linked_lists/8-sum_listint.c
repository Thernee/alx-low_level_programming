#include "lists.h"

/**
 * sum_listint - sums all the data in a listint_t list
 *
 * @head: head of the list
 * Return: sum of data in list, 0 if list if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
