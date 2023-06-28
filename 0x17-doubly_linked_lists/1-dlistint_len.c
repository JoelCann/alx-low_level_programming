#include "lists.h"

/**
 * dlistint_len - count the no. of nodes in the linked list
 * @h: points to the beginning of a linked list
 *
 * Return: no. of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;
	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
