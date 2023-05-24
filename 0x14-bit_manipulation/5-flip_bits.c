#include "main.h"
/**
 * flip_bits - produce the no. of bits you will need
 * to flip from one no. to another.
 * @n: first no.
 * @m: second no.
 *
 * Return: total no. of bits needed to do the flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int counter = 0;

	while (a > 0)
	{
		if (a & 1)
			counter += 1;
		a >>= 1;
	}

	return (counter);
}

