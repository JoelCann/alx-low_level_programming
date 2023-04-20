#include "main.h"
/**
* _realloc - a funcrion to reallocate memory blocks
*
* @ptr: pointer to the memory previously allocated
* @old_size: the size(in bytes) of the originl memory space for ptr
* @new_size: the size (in bytes) of the new memory space
*
* Return: pointer to newly allocated space/ memory or a  NULL value
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *origee = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = origee[i];
	free(ptr);
	return (p);
}
