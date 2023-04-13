#include <stdlib.h>
#include "main.h"
/**
 * create_array - array of type char
 * @c: characters/string
 * @size: number of characters
 * Return: null
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i + 1)
	{
		array[i] = c;
	}
	return (array);
}

