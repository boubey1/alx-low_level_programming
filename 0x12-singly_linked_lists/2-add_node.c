#include "lists.h"

/**
 * add_node - to Add new node to the beginning
 *            of a list_t list
 * @head: pointer to the beginging of the list_t
 * @str: element to add to the list_t
 *
 * Return: NULL when function faillure
 *         if success returns the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *a;
	int len = 0;

	new = malloc(sizeof(list_t));
	a = strdup(str);
	if (new == NULL || a == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new->str = a;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
