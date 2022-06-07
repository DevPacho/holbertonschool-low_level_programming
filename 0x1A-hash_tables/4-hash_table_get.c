#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: the hash table to look into.
* @key: the key to looking for.
* Return: the value associated with the element,
* or NULL if key couldn’t be found.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int table_index;
	hash_node_t *node_to_check = NULL;

	if (!ht || !key || !*key)
		return (NULL);

	table_index = key_index((unsigned char *)key, ht->size);
	node_to_check = ht->array[table_index];

	while (node_to_check)
	{
		if (strcmp(node_to_check->key, key) == 0)
			return (node_to_check->value);
		node_to_check = node_to_check->next;
	}

	return (NULL);
}
