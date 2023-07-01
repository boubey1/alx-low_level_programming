#include "lists.h"

/**
 * list_len - a function to search the number of
 *            elements in a given linked list_t list.
 * @h: argument of the list_t list.
 *
 * Return: retrun the number  nb of elements found in h.
 */
size_t list_len(const list_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}

	return (nb);
}

