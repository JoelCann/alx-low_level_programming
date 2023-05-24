#include "main.h"
/**
 * print_binary - prints out the binary form of a no.
 * @n: unsigned long integer that will be printed
 * in binary/base 2
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

