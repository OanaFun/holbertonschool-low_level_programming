#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 * Return: the number of nodes in a dlistint_t list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return(0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
