#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t a;
	const listint_t *temp = h;

	for (a = 0; temp; a++)
	{
		temp = temp->next;
	}

	return (a);
}
