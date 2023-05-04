#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: head of the list
 * Return: Address of node, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ahead, *behind;

	if (head == NULL)
		return (NULL);

	while ((behind != NULL) && (ahead != NULL) && (ahead->next != NULL))
	{
		ahead = ahead->next->next;
		behind = behind->next;

		if (ahead == behind)
		{
			behind = head;

			while (behind != ahead)
			{
				behind = behind->next;
				ahead = ahead->next;
			}
			return (ahead);
		}
	}

	return (NULL);
}
