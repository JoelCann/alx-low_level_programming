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
	if (head == NULL)
		return (NULL);

	listint_t *fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	listint_t *temp = *head;

	for (unsigned int a = 0; a < idx - 1 && temp != NULL; a += 1)
		temp = temp->next;

	if (temp == NULL)
	{
		free(fresh);
		return (NULL);
	}
	fresh->next = temp->next;
	temp->next = fresh;

	return (fresh);
}
