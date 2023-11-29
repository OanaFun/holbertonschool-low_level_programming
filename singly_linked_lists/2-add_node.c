#include "lists.h"
/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: double pointer to the head of a list_t list
 * @str: string to duplicate and add in the new node
 * Return: the address of the new element or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
