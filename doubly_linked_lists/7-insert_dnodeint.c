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
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double pointer to the head of a dlistint_t list
 * @idx: the index of a dlistint_t list where the new node should be added
 * index starts at 0
 * @n: the data to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currNode;
	dlistint_t *newNode;
	unsigned int i = 0;

	size_t length = dlistint_len(*h);

	currNode = *h;

	if (idx > length)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (length == idx)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	while (i < idx - 1)
	{
		currNode = currNode->next;
		i++;
	}

	newNode->n = n;
	newNode->prev = currNode;
	newNode->next = currNode->next;
	currNode->next->prev = newNode;
	currNode->next = newNode;

	return (newNode);
}
