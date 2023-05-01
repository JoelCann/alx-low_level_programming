#include "lists.h"
/**
 * print_listint_safe - prints a linked list with a loop.
 * @head: points to the first node in a linked list
 * Return: returns a new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmpn = NULL;
	const listint_t *ln = NULL;
	size_t counter = 0;
	size_t newn;

	tmpn = head;
	while (tmpn)
	{
		printf("[%p] %d\n", (void *)tmpn, tmpn->n);
		counter++;
		tmpn = tmpn->next;
		ln = head;
		newn = 0;
		while (newn < counter)
		{
			if (tmpn == ln)
			{
				printf("-> [%p] %d\n", (void *)tmpn, tmpn->n);
				return (counter);
			}
			ln = ln->next;
			newn += 1;
		}
		if (!head)
		exit(98);
	}
	return (counter);
}
