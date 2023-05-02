#include "main.h"

/**
 * print_array - prints a number of items(n) from an array
 * @a: the array
 * @n: is the number of elements OF the array to be printed
 * Return: selected numbers
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b += 1)
	{
		printf("%d, ", a[b]);
	}
		if (b == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
