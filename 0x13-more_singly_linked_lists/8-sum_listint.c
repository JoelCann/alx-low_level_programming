#include "lists.h"

/**
 * sum_listint - computes the sum of all items in the linked list
 * @head: node one in the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		total += temp->n;
	}

	return (total);
}
