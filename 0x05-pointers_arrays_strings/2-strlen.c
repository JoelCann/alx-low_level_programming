#include <stdio.h>
/**
 * _strlen - returns length of string
 * @s: the string
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len += 1;
	return (len);
}
