#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: one if succesful or negative one if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *curr = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		a += 1;
	}


	curr = temporary->next;
	temporary->next = curr->next;
	free(curr);

	return (1);
}
