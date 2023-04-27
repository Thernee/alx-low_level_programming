#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: pointer to head of the list
 * @str: string to be added to beginning new node
 * Return: pointer to new element, NULL if not successful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0, count = 0;
	list_t *my_node;
	list_t *last_node;

	if (head == NULL)
		return (NULL);

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	my_node = malloc(sizeof(list_t));
	if (my_node == NULL)
		return (NULL);
	last_node = *head;

	my_node->len = count;
	my_node->str = strdup(str);
	my_node->next = NULL;

	if (*head == NULL)
	{
		*head = my_node;
		return (*head);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = my_node;
	return (*head);

	/*return (my_node);*/
}
