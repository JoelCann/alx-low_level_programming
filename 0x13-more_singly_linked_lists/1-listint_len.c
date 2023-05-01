#include "lists.h"
/**
 * listint_len - returns the total no. of objects in the linked list
 * @h: A pointer to the head of address
 * Return: total no of objects in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}

