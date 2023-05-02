#include "main.h"
/**
 * print_rev - reverses a string and puts it on a new line
 * @s: the string
 * return: nothing
 */
void print_rev(char *s)
{
	int li = 0;
	int o;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	s--;
	for (o = li; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
