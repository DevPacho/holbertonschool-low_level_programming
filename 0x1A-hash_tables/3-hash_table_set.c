#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table.
* @ht: the hash table you want to add or update the key/value to.
* @key: the key and can not be an empty string.
* @value: the value associated with the key.
* Return: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int table_index;
	hash_node_t *new_element = NULL, *traverse_table_index = NULL;

	if (!ht || !key || !*key || *key == ' ' || !value)
		return (0);

	table_index = key_index((unsigned char *)key, ht->size);

	traverse_table_index = ht->array[table_index];

	while (traverse_table_index)
	{
		if (strcmp(traverse_table_index->key, key) == 0)
		{
			free(traverse_table_index->value);
			traverse_table_index->value = strdup(value);
			return (1);
		}
		traverse_table_index = traverse_table_index->next;
	}

	new_element = malloc(sizeof(hash_node_t));
	if (!new_element)
		return (0);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = ht->array[table_index];
	ht->array[table_index] = new_element;

	return (1);
}
