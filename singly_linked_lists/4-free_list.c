#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: double pointer to the head of the list_t list
*/
void free_list(list_t *head)
{

	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
