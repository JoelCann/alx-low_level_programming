#include "main.h"
#include <stddef.h>

/**
 * _pow_recursion - returns the result of a numher a
 * raised to the power b
 * @a: base
 * @b: exponent
 *
 * Return: int as result or negative one if error
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b > 0)
		return (a * _pow_recursion(a, b - 1));
	return (1);
}
