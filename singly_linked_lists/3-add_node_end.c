#include "lists.h"
/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: double pointer to the head of the list_t list
 * @str: string to duplicate and add in the new node
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode;

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
	newNode->next = NULL;

	lastNode = *head;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;

	return (newNode);
}
