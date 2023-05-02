#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 *
 * @head: pointer to the head of the list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead;
	listint_t *behind = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head  = ahead;
	}
	*head = ahead;
	return (*head);
}
