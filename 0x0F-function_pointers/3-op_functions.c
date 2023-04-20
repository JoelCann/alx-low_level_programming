#include "3-calc.h"

/**
 * op_add - sums up two integers
 * @x: int one
 * @y: int two
 *
 * Return: total
 */
int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - difference of two integers.
 * @x: int one
 * @y: int two
 *
 * Return: total difference
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - mulplies an integer by another
 * @x: int one
 * @y: int two
 *
 * Return: total product
 */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - divides an integer by another
 * @x: int one
 * @y: int two
 *
 * Return: final quotient.
 */
int op_div(int x, int y)
{
	return (x / y);
}

/**
 * op_mod - modulo of two integers
 * @x: int one
 * @y: int two
 *
 * Return: the remainder
 */
int op_mod(int x, int y)
{
	return (x % y);
}
