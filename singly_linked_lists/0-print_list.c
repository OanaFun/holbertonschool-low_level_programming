#include "lists.h"
/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to the head of a list_t list
 * Return: the number of nodes in a list_t list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
