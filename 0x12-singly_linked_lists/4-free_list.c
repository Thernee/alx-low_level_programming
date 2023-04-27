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
	list_t *node;

	if (head == NULL)
		return;
	node = head;
	while (head != NULL)
	{
		holder = node->next;
		free(node->str);
		free(node);
		node = holder;
	}
}
