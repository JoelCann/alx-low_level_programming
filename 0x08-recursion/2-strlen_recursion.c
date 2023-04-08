#include "main.h"
/**
 * _strlen_recursion - determine the length of a string.
 * @s: the string .
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count += 1;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
