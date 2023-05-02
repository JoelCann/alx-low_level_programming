#include <stdio.h>
/**
 * swap_int - change positions of numbers
 * @a: first number
 * @b: second number
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;

	*b = swp;
}
