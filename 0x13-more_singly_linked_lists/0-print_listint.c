#include "lists.h"


/**
 * print_listint - func to prints elements of listint_t list
 * @h: is a pointer at the begining of list_t
 *
 * Return: number of nodes a of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	const listint_t *temp = h;

	for (a = 0; temp; a++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (a);
}
