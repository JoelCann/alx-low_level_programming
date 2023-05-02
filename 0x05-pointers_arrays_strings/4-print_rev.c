#include "main.h"
/**
 * print_rev - reverses a string and puts it on a new line
 * @s: the string
 * return: nothing
 */
void print_rev(char *s)
{
	int li;

	for (li = 0; s[li] != '\0'; li++)
	char *end = s + li - 1;

	for (char *p = end; p >= s; p--)
	{
		_putchar(*p);
	}
	puts("");
}
