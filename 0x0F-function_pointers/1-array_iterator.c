#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array += 1);
}
