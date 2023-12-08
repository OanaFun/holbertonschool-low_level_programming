#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table, or NULL if it fails
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
	{
		free(newTable);
		return (NULL);
	}

	newTable->array = malloc(sizeof(hash_node_t *) * size);

	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	newTable->size = size;

	for (i = 0; i < size; i++)
	{
		newTable->array[i] = NULL;
	}

	return (newTable);
}
