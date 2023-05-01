#include "lists.h"

/**
 * pop_listint - supposed to remove/delete the head
 * node in a linked list
 * @head: points to the very first element inside a linked list
 *
 * Return: items in deleted node/ 0 if the list was empty
 */
int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);

	int number = (*head)->n;
	listint_t *temploc = (*head)->next;

	free(*head);
	*head = temploc;
	return (number);
}
