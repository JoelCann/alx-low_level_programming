#include "main.h"
/**
 * clear_bit - sets bit value at given index to zero.
 * @n: pointer for the no.
 * @index: the index of the bit to be made 0
 *
 * Return: 1 if success/ -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= 8 * sizeof(unsigned long int))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

