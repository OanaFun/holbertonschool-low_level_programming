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
