#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, j = (length_of_the_string - 1) / 2
 * @str: the string
 * Return: half of the string inputed
 */
void puts_half(char *str)
{
	int i, j, li;

	li = 0;

	for (i = 0; str[i] != '\0'; i++)
		li++;

	j = (li / 2);

	if ((li % 2) == 1)
		j = ((li + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
