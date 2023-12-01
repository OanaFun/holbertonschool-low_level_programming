#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: double pointer to the head of a dlistint_t list
 * @n: the data to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	temp = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	newNode->prev = temp;
	temp->next = newNode;

	return (newNode);
}
