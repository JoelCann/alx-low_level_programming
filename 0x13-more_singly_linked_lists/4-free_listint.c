#include "lists.h"
/**
 * free_listint - frees a listint_t list from memory
 * @head: points to the head of the linked list
 *
 * frees each node from the list beginning from the head
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *fnode;

	while (head != NULL)
	{
		fnode = head;
		head = head->next;
		free(fnode);
	}
}

