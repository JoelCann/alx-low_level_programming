#include "lists.h"
/**
 * add_nodeint - creates a new node at the begining of the linked list.
 * @head: points to the pointer that points to the main node' location
 * @n: integer stored in the new node.
 * Return: the pointer or location/address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn = NULL;

	if (head == NULL)
		return (NULL);
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}

