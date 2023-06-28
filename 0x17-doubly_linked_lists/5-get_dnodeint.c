#include "lists.h"

/**
 * get_dnodeint_at_index - finds a particular node of a linked list
 * @head: points to start of the list
 * @index: index of the node to retrieve
 *
 * Return: points to the indexed node/ NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (a = 0; a < index; a += 1)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
