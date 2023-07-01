#include "lists.h"

/**
 * print_list - a function that prints the elements contained in a list_t list
 * @h: The list to be printed (list_t list).
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			int len = h->len;
			char *str = h->str;

			_putchar('[');
			print_number(len); // Helper function to print an integer
			_putchar(']');
			_putchar(' ');

			while (*str)
			{
				_putchar(*str);
				str++;
			}

			_putchar('\n');
		}

		nodes++;
		h = h->next;
	}

	return nodes;
}
