#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node from a particular
 * index in a linked list
 * @head: points to the first object in a linked list.
 * @idx: index of the node to be deleted.
 *
 *insert_nodeint_at_index - inserts node into particular index
 *
 * Return: 1 if successful or -1 if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	listint_t *temp = *head;

	for (unsigned int i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
