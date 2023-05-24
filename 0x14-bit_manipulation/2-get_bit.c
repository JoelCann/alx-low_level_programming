#include "main.h"
/**
 * get_bit - produces bit value at a particular index
 * @n: unsigned long int number to check
 * @index: the index we are looking for
 *
 * Return: the value of the bit at index or
 * -1 when index is null or not valid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	return ((n >> index) & 1);
}

