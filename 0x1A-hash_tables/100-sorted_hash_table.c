#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hashtable
 *
 * @size: The size of table to be created
 * Return: pointer to the created table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_table->array == NULL)
		return (NULL);

	new_table->shead = NULL;
	new_table->stail = NULL;
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}

/**
 * shash_table_set -  sets up a sorted hashtable with values
 *
 * @ht: The hashtable to be set/initialized
 * @key: The key of a node in the table
 * @value: value to be paored with th key
 * Return: returns 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - finds a value in the hashtable
 *
 * @ht: the hashtable to be searched
 * @key: the key of the value to be found
 * Return: value on success, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the values of a sorted hashtable
 * @ht: the sorted table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *holder;
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

/**
 * shash_table_print_rev - prints the values of a sorted hashtable in reverse
 *
 * @ht:the table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *holder;
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

/**
 * shash_table_delete - Deletes a sorted hashtable
 * @ht: table to eb deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *holder, *temp;
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
