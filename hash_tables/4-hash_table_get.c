#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 * Return: the value associated with the element,
 * or NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	hash_node_t *currentNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[i];

	while (currentNode != NULL)
	{
		if (strcmp(key, currentNode->key) == 0)
			return (currentNode->value);
		currentNode = currentNode->next;
	}
	return (NULL);
}
