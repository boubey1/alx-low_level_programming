#include "lists.h"

/**
 * print_list - a function that prints the elements contained in a list_t list
 * @h: The list to be printed (list_t list).
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nb_node = 0;
	
	while (h)
	{
		if (h->str == NULL)
			_putchar(list_t["[0] (nil)\n"];

		else
			
			_putchar(list_t[h->len], list_t[h->str]);

		nb_node++;
		h = h->next;
	}

	return (nb_node);
}

