#include "lists.h"

/**
 * print_listint_safe - prints lists with some twists
 *
 * @head: head of the list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *my_node;
	const listint_t *holder = NULL;
	int count = 0, i;

	if (head == NULL)
		return (0);

	my_node = head;
	while (my_node != NULL)
	{
		printf("[%p] %d\n", (void *)my_node, my_node->n);
		count++;
		my_node = my_node->next;
		holder = head;
		i = 0;

		while (i < count)
		{
			if (my_node == holder)
			{
				printf("-> [%p] %d\n", (void *)my_node, my_node->n);
				return (count);
			}
			holder = holder->next;
			i++;
		}
	}
	return (count);
}

