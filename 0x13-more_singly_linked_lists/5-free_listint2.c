#include "lists.h"
/**
 * free_listint2 - Sets the head node to NULL
 * after Freeing the  listint_t list.
 *
 * @head: points to the head of the listint_t list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *cfnode, *temploc;

	if (head == NULL)
		return;
	fnode = *head;
	while (fnode != NULL)
	{
		temploc = fnode;
		fnode = fnode->next;
		free(temploc);
	}
	*head = NULL;
}

