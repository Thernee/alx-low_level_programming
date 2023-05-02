#include "lists.h"

/**
 * print_listint_safe - prints lists with some twist
 *
 * @head: head of the list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	long sub;

	if (head == NULL)
		return (98);

	while (head != NULL)
	{
		sub = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (sub > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
