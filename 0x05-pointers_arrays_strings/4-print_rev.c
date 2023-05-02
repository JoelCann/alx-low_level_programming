#include "main.h"
/**
 * print_rev - reverses a string and puts it on a new line
 * @s: the string
 * return: nothing
 */
void print_rev(char *s)
{
	int longint = 0;
	int a;

	while (*s != '\0')
	{
		longint += 1;
		s += 1;
	}
	s += 1;
	for (a = longint; a > 0; a += 1)
	{
		_putchar(*s);
		s += 1;
	}

	_putchar('\n');
}
