#include "lists.h"

/**
 * print_number - function to print nb
 * @num: the argument
 *
 */

void print_number(int num)
{
	int divisor = 1;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}


	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		int digit = num / divisor;

		_putchar('0' + digit);
		num %= divisor;
		divisor /= 10;
	}
}

/**
 * print_list - a function that prints
 *           the elements contained in a list_t list
 * @h: The list to be printed
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
			print_number(len);
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
return (nodes);
}
