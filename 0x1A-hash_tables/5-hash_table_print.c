#include "hash_tables.h"

/**
 * hash_table_print - prints all keys and value in a hashtable
 *
 * @ht: The hashtable to print from
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *holder;
	unsigned long int i = 0;
	int not_first = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			holder = ht->array[i];
			while (holder)
			{
				if (not_first)
					printf(", ");
				else
					not_first = 1;
				printf("'%s': '%s'", holder->key, holder->value);
				holder = holder->next;
			}
		}
		i++;
	}
	printf("}\n");
}
