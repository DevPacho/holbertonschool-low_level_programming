#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table.
* @size: size of the array.
* Return: If something went wrong, return NULL, else
* returns a pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int creating;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table->array);
		return (NULL);
	}

	table->size = size;
	for (; creating < size; creating++)
		table->array[creating] = NULL;
	return (table);
}
