#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a list
 *
 * @head: pointer to head of the list
 * @n: An integer member of the list
 * Return: Address of new element if successful, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *my_node;

	if (head == NULL)
		return (NULL);

	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
		return (NULL);

	my_node->n = n;
	my_node->next = *head;
	*head = my_node;

	return (*head); /*could be: return(my_node)*/
}
