#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a list safe
 *
 * @h: pointer to the head of the list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *my_node, *holder, *visited[1024];

	if (h == NULL)
		return (count);

	while (*h != NULL)
	{
		count++;
		my_node = *h;
		*h = (*h)->next;
		my_node->next = NULL;

		if (contains_node(visited, my_node))
		{
			break;
		}

		visited[count % 1024] = my_node;

		for (holder = *h; holder != NULL && holder != my_node; holder = holder->next)
		{
			if (holder->next == my_node)
			{
				holder->next = NULL;
				if (holder == *h)
					*h = holder->next;
				if (my_node != NULL)
					free(my_node);
				my_node = NULL;
				break;
			}
		}

		free(my_node);
	}

	return (count);
}

/**
 * contains_node - checks if an array of nodes contains a given node
 *
 * @arr: array of nodes to search
 * @node: node to search for
 * Return: true if the array contains the node, false otherwise
 */
int contains_node(listint_t **arr, listint_t *node)
{
	int i;
	for (i = 0; i < 1024; i++)
	{
		if (arr[i] == node)
		{
			return (1);
		}
	}
	return (0);
}

