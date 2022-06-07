#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table.
* @ht: the hash table to delete.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int traverse_to_delete = 0;
	hash_node_t *to_table_index, *to_free;

	for (; traverse_to_delete < ht->size; traverse_to_delete++)
	{
		to_table_index = ht->array[traverse_to_delete];
		while (to_table_index)
		{
			to_free = to_table_index;
			to_table_index = to_table_index->next;
			free(to_free->key);
			free(to_free->value);
			free(to_free);
		}
	}
	free(ht->array);
	free(ht);
}
