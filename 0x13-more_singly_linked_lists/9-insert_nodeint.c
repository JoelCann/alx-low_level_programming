#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a particulat position in a linked list.
 * @head: points to the first node in a list.
 * @idx: the index of the list where new node is
 * placed.
 * @n: data to insert in the new node
 *
 * Return: NULL or a pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *fresh;
	listint_t *temp = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh || !head)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	for (a = 0; temp && a < idx; a += 1)
	{
		if (a == idx - 1)
		{
			fresh->next = temp->next;
			temp->next = fresh;
			return (fresh);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
