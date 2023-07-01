#include "lists.h"

/**
 * print_list - a function that prints the elements contained in a list_t list
 * @h: The list to be printed (list_t list).
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *str = h;

    while (str != NULL)
    {
        int digit = str->data;

        char ch = '0' + digit;

        _putchar(ch);


        _putchar(' ');

        str = str->next;
        count++;
    }

    return count;
}

