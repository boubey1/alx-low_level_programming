#include "lists.h"

/**
 * _putchar - function that reproduce putchar to print
 * @c: The parameter
 *
 * Return: 1.
 * 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


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
			_putchar("[0] (nil)\n");

		else
			
			_putchar("[%d] %s\n", h->len, h->str);

		nb_node++;
		h = h->next;
	}

	return (nb_node);
}

