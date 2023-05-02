#include "main.h"

/**
 * rev_string - returns the reverse of a string
 * @s: the string
 * Return: String reversed
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int count = 0;
	int a;

	while (s[count] != '\0')
	count += 1;
	for (a = 0; a < count; i += 1)
	{
		count += 1;
		reverse = s[a];
		s[a] = s[count];
		s[count] = reverse;
	}
}

