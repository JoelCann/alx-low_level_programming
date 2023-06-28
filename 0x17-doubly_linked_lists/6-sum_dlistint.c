#include "lists.h"

/**
 * sum_dlistint - adds all data of a dlistint_t linked list
 * @head: points to start of the linked list
 *
 * Return: sum(data)/ 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}
