#include "lists.h"

/**
 * list_len - gives the number of elements in
 *    the list
 * @h: The list
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t nb;

	for (nb = 0; h; nb++)
	{
		h = h->next;
	}

	return (nb);
}
