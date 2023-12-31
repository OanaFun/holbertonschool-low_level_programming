#include "lists.h"
/**
 * list_len - return the number of elements in a linked list_t list
 * @h: pointer to the head of a list_t list
 * Return: the number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL || h->len > 0)
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
