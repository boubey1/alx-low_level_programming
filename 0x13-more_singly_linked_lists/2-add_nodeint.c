#include "lists.h"

/**
 * add_nodeint - func to add a new node to the beginning
 *               of a list
 * @head: pointer to the head of the list
 * @n: integer for nodes
 *
 * Return: Null if the function faillure
 *         Otherwise - returns the address of the newly created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));


	if (temp)
	{
		temp->n = n;
		temp->next = *head;

		*head = temp;


		return (temp);

	}
	else
	return (NULL);



}
