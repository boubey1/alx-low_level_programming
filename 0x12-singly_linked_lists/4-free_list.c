#include "lists.h"

/**
 * free_list - to free the list_t list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *a;

	for (a = 0; head; head = a)
	{
		a = head->next;
		free(head->str);
		free(head);
	}
}
