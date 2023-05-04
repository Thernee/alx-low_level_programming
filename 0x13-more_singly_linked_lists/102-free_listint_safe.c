#include "lists.h"

/**
 * free_listint_safe - frees a list safe
 *
 * @h: pointer to the head of the list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *behind, *ahead, *holder;
	int count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	behind = *h;
	ahead = (*h)->next;

	while (ahead != NULL && ahead < behind)
	{
		holder = ahead->next;

		if (ahead == *h)
			(*h) = holder;

		free(ahead);
		count++;

		ahead = holder;
	}

	while (behind != NULL)
	{
		holder = behind->next;
		free(behind);
		count++;

		if (holder != NULL && holder < behind)
			break;

		behind = holder;
	}

	*h = NULL;
	return (count);
}
