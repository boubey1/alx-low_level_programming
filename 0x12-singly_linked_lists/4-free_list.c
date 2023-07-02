#include "lists.h"


/**
 * free_list -function to free a list_t list.
 * @head: is a pointer to the list.
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}

