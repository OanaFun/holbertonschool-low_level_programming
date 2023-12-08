#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table where to update the key/value
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	char *newValue;
	unsigned long int i, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	newValue = strdup(value);
	if (newValue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = newValue;
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(newValue);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = newValue;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
