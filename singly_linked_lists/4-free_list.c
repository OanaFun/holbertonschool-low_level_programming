#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: double pointer to the head of the list_t list
*/
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
