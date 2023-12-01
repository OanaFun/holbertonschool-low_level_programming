#include "lists.h"
/**
 * sum_dlistint - return the sum node of all the data (n) of a dlistint_t list
 * @head: double pointer to the head of a dlistint_t list
 * Return: the sum of all data of the list, or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
