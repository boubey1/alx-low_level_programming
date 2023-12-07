#include "lists.h"

/**
 * add_node_end - function to ddd a new node                of a list_t list.
 * @head: pointer begining of the list
 * @str: a string to add to list_t
 *
 * Return: NULL if faillure, 0 if success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *node_end;
	char *a;
	int len = 0;


	new_node = malloc(sizeof(list_t));
	a = strdup(str);
	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_node->str = a;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		node_end = *head;
		while (node_end->next != NULL && *head != NULL)
		{
			node_end = node_end->next;
		}
		node_end->next = new_node;
	}

	return (*head);
}
