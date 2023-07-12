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
	shash_node_t *current, *prev, *new_node, *tmp;

	if (ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	prev = NULL;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		prev = current;
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (prev == NULL)
		ht->array[index] = new_node;
	else
		prev->next = new_node;

	/* Update sorted linked list */
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (strcmp(new_node->key, ht->stail->key) > 0)
	{
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, new_node->key) < 0)
			tmp = tmp->snext;
		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		tmp->snext->sprev = new_node;
		tmp->snext = new_node;
	}

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
	if (ht == NULL)
		return;

	printf("{");
	print_rev_recursive(ht->shead);
	printf("}\n");
}
/**
 * print_rev_recursive - prints a sorted hash table recursively
 *
 * @node: node of the hash tabel to print
 */
void print_rev_recursive(const shash_node_t *node)
{
	if (node == NULL)
		return;

	printf("'%s': '%s'", node->key, node->value);

	if (node->sprev != NULL)
		printf(", ");

	print_rev_recursive(node->sprev);
}


/**
 * shash_table_delete - Deletes a sorted hashtable
 * @ht: table to eb deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *holder, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		holder = ht->array[i];
		while (holder)
		{
			next = holder->next;
			free(holder->key);
			free(holder->value);
			free(holder);
			holder = next;
		}
	}

	free(ht->array);
	free(ht);
}
