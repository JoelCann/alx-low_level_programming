#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - produces the elements of a dlistint_t list
 * @h: points to the start of the linked list
 *
 * Return: no. of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a += 1)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
