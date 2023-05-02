#include "main.h"
#include <stddef.h>

/**
 * do_sqrt_recursion - computes the square root of a given
 * number
 * @a: the number whose root were finding
 * @b: the root
 *
 * Return: the resulting root of a or -1 if not found
 */
int do_sqrt_recursion(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (do_sqrt_recursion(a, b + 1));
}

/**
 * _sqrt_recursion - produce the square root of int x
 * @a: the number were finding the root of.
 *
 * Return: int as result or negative one on error
 */
int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);

	return (do_sqrt_recursion(a, 0));
}
