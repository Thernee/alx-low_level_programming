#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: head for the linked list
 * Return: number of strings printed
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	/*unsigned int i = 0;*/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			/*return (1);*/
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
