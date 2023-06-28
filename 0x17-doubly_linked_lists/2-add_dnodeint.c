#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at beginning of a linked list
 * @head: d_pointer to the beginning of the linked list
 * @n: number to add to the new node
 *
 * Return: pointer to new node/ NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
