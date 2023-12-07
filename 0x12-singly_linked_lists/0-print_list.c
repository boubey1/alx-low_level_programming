#include "lists.h"


/**
 * print_list - function to print elements of the list_t list.
 * @h: pointer to the list_t list.
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t links;

	for (links = 0; h; links++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			printf("\n");
		}

		else
		{
			printf("[%d] %s", h->len, h->str);
			printf("\n");
		}
		h = h->next;
	}

	return (links);
}

