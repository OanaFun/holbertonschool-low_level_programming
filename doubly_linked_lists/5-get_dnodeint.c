#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: double pointer to the head of a dlistint_t list
 * @index: the index of the new node, starting from 0
 * Return: the nth node of the list, or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
