#include "main.h"
/**
* string_nconcat - concatenates two strings.
*
* @s1: first string
* @s2: secound string
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; a += 1)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; b += 1)
			;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < a; c += 1)
		s[c] = s1[c];
	for (c = 0; c < b; c += 1)
		s[c + a] = s2[c];
	s[a + b] = '\0';
	return (s);
}
