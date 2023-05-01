#include "lists.h"
/**
 * print_listint - Prints out all elements in the listint_t list.
 * @h: Points to the head of the listint_t list.
 * Return: The total no. of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *y)
{
	size_t x = 0;

	while (y != NULL)
	{
		printf("%d\n", y->n);
		y = y->next;
		x += 1;
	}
	return (x);
}

