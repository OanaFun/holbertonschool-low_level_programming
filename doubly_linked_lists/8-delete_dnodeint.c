#include "lists.h"
/**
 * dlistint_len - return the number of elements in a dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 * Return: the number of elements in a dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - delete the node at index index
 * of a dlistint_t list
 * @head: double pointer to the head of a dlistint_t list
 * @index: the index of the node that should be deleted, it starts from 0
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *currNode = *head;
	unsigned int i = 0;

	size_t length = dlistint_len(*head);

	if (*head == NULL)
		return (-1);

	if (index >= length)
		return (-1);

	if (index == 0 && length > 0)
	{
		*head = (*head)->next;

		if (length != 1)
			(*head)->prev = NULL;
		free(currNode);
		return (1);
	}

	while (i < index)
	{
		currNode = currNode->next;
		i++;
	}

	if (index == length - 1)
	{
		currNode->prev->next = NULL;
		free(currNode);
		return (1);
	}

	currNode->prev->next = currNode->next;
	currNode->next->prev = currNode->prev;
	free(currNode);
	return (1);
}
