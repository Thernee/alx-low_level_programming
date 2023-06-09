#include "lists.h"

/**
 * free_listint - frees a list of type listint_t
 *
 * @head: head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *holder = head;

	for (; head != NULL; holder = head)
	{
		head = head->next;
		free(holder);
	}
}
