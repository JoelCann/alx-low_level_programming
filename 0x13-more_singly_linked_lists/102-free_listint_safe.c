#include "lists.h"

/**
 * free_listint_safe - frees elements in a linked list
 * @h: points to the very first node in the linked list
 *
 * Return: total no. of numbers inside a freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *temporary;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			length += 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			length += 1;
			break;
		}
	}

	*h = NULL;

	return (length);
}
