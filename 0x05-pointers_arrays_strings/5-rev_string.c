#include "main.h"

/**
 * rev_string - returns the reverse of a string
 * @s: the string
 * Return: String reversed
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int a;

	while (s[count] != '\0')
	count++;
	for (a = 0; a < count; a++)
	{
		count--;
		rev = s[a];
		s[a] = s[count];
		s[count] = rev;
	}
}
