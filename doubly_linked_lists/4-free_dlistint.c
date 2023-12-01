#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: double pointer to the head of a dlistint_t list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
