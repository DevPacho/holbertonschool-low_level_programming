#include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table.
* @ht: the hash table to print.
* If ht is NULL, don’t print anything.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int traverse_to_print = 0, activator = 0;
	hash_node_t *to_table_index;

	if (!ht)
		return;

	printf("{");

	for (; traverse_to_print < ht->size; traverse_to_print++)
	{
		to_table_index = ht->array[traverse_to_print];
		while (to_table_index)
		{
			if (activator != 0)
				printf(", ");
			activator = 1;

			printf("'%s': '%s'", to_table_index->key, to_table_index->value);
			to_table_index = to_table_index->next;
		}

	}
	printf("}\n");
}
