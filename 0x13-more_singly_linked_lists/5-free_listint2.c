#include "lists.h"

/**
 * free_listint2 - frees a list of type listint_t
 *
 * @head: head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *holder = *head;

	if (head == NULL)
		return;

	for (; *head != NULL; holder = *head)
	{
		*head = (*head)->next;
		free(holder);
	}
	head = NULL;
}
