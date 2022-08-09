#include "hash_tables.h"

/**
 * hash_table_create - a function that creates
 * hash tables
 * @size: the size of the hash table
 * Return: Address of the hash tables or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);

}
