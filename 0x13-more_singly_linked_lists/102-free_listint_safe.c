#include "lists.h"

/**
 * free_listint_safe - frees elements in a linked list
 * @h: points to the very first node in the linked list
 *
 * Return: total no. of numbers inside a freed list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *ft = head;

	if (!head)
		return (NULL);

	while (sl && ft && ft->next)
	{
		ft = ft->next->next;
		sl = sl->next;
		if (ft == sl)
		{
			sl = head;
			while (sl != ft)
			{
				sl = sl->next;
				ft = ft->next;
			}
			return (ft);
		}
	}

	return (NULL);
}
