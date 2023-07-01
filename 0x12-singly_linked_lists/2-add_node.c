#include "lists.h"

/**
 * add_node - a function to add new nodes to a list_t list beginning
 * @head: pointer that links to the head of the list_t list
 * @str: a to fix in the list_t list
 *
 * Return: NULL otherwise returns the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_element);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_element->str = duplicate;
	new_element->len = len;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}

