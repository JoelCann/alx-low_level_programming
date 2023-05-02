#include "main.h"
int actual_prime(int a, int b);

/**
 * is_prime_number - determine whether input is a prime
 * number or not
 * @a: no. being analysed
 *
 * Return: returns one if result is a prime number and
 * zero if not
 */

int is_prime_number(int a)
{
	if (a <= 1)
		return (0);
	return (actual_prime(a, a - 1));
}

/**
 * actual_prime - will calculate if a number is prime recursively
 * @a: no. being anslysed
 * @b: represents the iterator
 *
 * Return: 1 if n is Prime number and 0 if not.
 */

int actual_prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && x > 0)
		return (0);
	return (actual_prime(a, b - 1));
}
