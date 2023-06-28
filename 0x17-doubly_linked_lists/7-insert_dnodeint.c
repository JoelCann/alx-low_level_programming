#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - adds a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index/point to insert the new node
 * @n: data to be entered into new node
 *
 * Return: points to new node/ NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (a = 0; a < idx - 1 && current != NULL; a += 1)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prv = NULL;
	}
	else
	{
		new->prv = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prv = new;
	return (new);
}
