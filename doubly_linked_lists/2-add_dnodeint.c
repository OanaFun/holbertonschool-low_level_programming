#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of a dlistint_t list
 * @n: the data to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
