#include "function_pointers.h"

/**
 * int_index - searches for integers.
 * @array: array of integers
 * @size: sixe of array
 * @cmp: performs comparison in function
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a += 1;
		}
	return (-1);
}
