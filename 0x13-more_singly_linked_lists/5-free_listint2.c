#include "lists.h"

/**
 * free_listint2 - frees a list of type listint_t
 *
 * @head: head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *holder, *temp;

	if (head == NULL)
		return;
	holder = *head;

	for (; holder != NULL; holder = temp)
	{
		temp = holder->next;
		free(holder);
	}
	*head = NULL;
}
