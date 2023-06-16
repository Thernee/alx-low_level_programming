#include "lists.h"

/**
 * add_dnodeint_end - Add node at end of dlistint list
 *
 * @head: pointer to the head of the list
 * @n: Data to insert in the list
 * Return: pointer new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *holder, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	holder = *head;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (holder->next != NULL)
		holder = holder->next;

	holder->next = new_node;
	new_node->prev = holder;
	return (*head);
}
