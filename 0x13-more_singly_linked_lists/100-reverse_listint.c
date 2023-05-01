#include "lists.h"

/**
 * reverse_listint - reverses the contents of a  linked list
 * @head: points to the first element in a list
 *
 * Return: returns a pointer to the first element in a list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->after;
		(*head)->after = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}
