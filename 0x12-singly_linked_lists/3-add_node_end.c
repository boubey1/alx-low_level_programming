#include "lists.h"

/**
 * add_node_end - a new function to handle adding new nodes
 *               to the en of a list_t list
 * @head: pointer to the head of list_t
 * @str: string to add to list_t
 *
 * Return:  NULL if fals, otherwise returns the address of new_element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_element, *last_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new_element);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_element->str = duplicate;
	new_element->len = len;
	new_element->next = NULL;

	if (*head == NULL)
		*head = new_element;

	else
	{
		last_element = *head;
		while (last_element->next != NULL)
			last_element = last_element->next;
		last_element->next = new_element;
	}

	return (*head);
}

