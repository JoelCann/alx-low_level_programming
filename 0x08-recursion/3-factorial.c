#include "main.h"
#include <stddef.h>

/**
 * factorial - computes the factorial of a number
 * @n: argument for factorial
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}

