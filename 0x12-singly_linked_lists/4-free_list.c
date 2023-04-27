#include "lists.h"

/**
 * free_list - frees list_t list
 *
 * @head: pointer to first element of list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *holder;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
