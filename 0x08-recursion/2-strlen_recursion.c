#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: Finding length of string s
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
