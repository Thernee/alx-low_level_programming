#include "lists.h"

/**
 * free_listint_safe - frees a list safe
 *
 * @h: pointer to the head of the list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *holder;
	listint_t *my_node;
	int count = 0;

	if (h == NULL)
		return (0);

	my_node = *h;
	while (my_node != NULL)
	{
		holder = my_node;
		my_node = my_node->next;

		if ((void *)holder < (void *)my_node)
		{
			free(holder);
			count++;
		}
		else
		{
			holder->next = NULL;
		}
	}
	*h = NULL;
	return (count);
}
