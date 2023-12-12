#include "lists.h"
#include <stdio.h>

/**
 * listint_len - number of elements
 * @h: pointer
 *
 * Return: number of elements in list
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
