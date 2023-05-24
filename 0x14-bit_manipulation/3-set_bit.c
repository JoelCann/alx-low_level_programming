#include "main.h"
/**
 * set_bit - changes bit value at given index to 1
 * @n: pointer to no. to be modified
 * @index: index of the bit in question
 *
 * Return: 1 if success/-1 if failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	*n |= 1ul << index;
	return (1);
}

