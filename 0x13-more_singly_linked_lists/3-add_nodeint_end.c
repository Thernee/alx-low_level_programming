#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of alist
 *
 * @head: pointer to head of the list
 * @n: An integer member on the list
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *my_node;
	listint_t *holder;

	if (head == NULL)
		return (NULL);

	holder = *head;

	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
		return (NULL);

	my_node->n = n;
	my_node->next = NULL;
	if (*head == NULL)
	{
		*head = my_node;
		return (*head);
	}

	for (; holder->next != NULL; holder = holder->next)
		;

	holder->next = my_node;

	return (my_node);
}
