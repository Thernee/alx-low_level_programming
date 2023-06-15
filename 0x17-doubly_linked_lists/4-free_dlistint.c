#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder, *temp;

	if (head != NULL)
	{
		while (holder->next != NULL)
		{
			temp = holder->next;
			free(holder);
			holder = temp;
			holder = holder->next;
		}
		free(holder);
	}
}
