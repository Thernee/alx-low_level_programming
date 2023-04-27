#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 *
 * @head: pointer to head of the list
 * @str: string to be added to beginning new node
 * Return: pointer to new element, NULL if not successful
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0, count = 0;
	list_t *my_node;

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

	my_node->len = count;
	my_node->str = strdup(str);
	my_node->next = *head;
	*head = my_node;

	return (my_node);
}
