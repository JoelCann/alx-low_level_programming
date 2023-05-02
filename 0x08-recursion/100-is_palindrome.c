#include "main.h"

int check_pal(char *s, int a, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - verifies if a string is a palindrome
 * @s: string to be reversed
 *
 * Return: returns one if result is palindrome and
 * zero if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string for which the length is to be calculated
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - will check recursively, characters for the palindrome
 * @s: String
 * @a: Iterator
 * @length: Length of string
 *
 * Return: one if palindrome and zero if not
 */
int check_pal(char *s, int a, int length)
{
	if (*(s + a) != *(s + length - 1))
		return (0);
	if (a >= length)
		return (1);
	return (check_pal(s, a + 1, length - 1));
}
