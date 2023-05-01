#include "lists.h"

/**
 * pop_listint - supposed to remove/delete the head
 * node in a linked list
 * @head: points to the very first element inside a linked list
 *
 * Return: items in deleted node/ zero if the list was empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
