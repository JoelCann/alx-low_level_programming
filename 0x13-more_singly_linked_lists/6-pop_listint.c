#include "lists.h"

/**
 * pop_listint - supposed to remove/delete the head
 * node in a linked list
 * @head: points to the very first element inside a linked list
 *
 * Return: items in deleted node/ zero if the list was empty
 */
int pop_listint(listint_t **const head)
{
	if (!head || !*head)
	{
		return (0);
	}

	const int num = (*head)->n;
	listint_t *const next_node = (*head)->next;

	free(*head);
	*head = next_node;

	return (num);
}

