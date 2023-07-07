#include "hash_tables.h"

/**
 * hash_table_delete - prints all keys and value in a hashtable
 *
 * @ht: The hashtable to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *holder, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			holder = ht->array[i];
			while (holder)
			{
				temp = holder->next;
				free(holder->key);
				free(holder->value);
				free(holder);
				holder = temp;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
