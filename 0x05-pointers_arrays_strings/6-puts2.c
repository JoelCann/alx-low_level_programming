#include "main.h"
/**
 * puts2 - prints the first character in a string of two
 * @str: the string
 * Return: one character, the first one
 */
void puts2(char *str)
{
	int li = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		li += 1;
	}
	t = li - 1;
	for (a = 0 ; a <= t ; a += 1)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}
