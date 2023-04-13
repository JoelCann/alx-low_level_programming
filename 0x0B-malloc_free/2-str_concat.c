#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{

	size_t str1;
	size_t str2;
	char *merged;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str1 = strlen(s1);
	str2 = strlen(s2);
	merged = malloc((str1 + str2 + 1) * sizeof(char));

	if (merged == NULL)
	{
		return (NULL);
	}
	strcpy(merged, s1);
	strcat(merged, s2);
	return (merged);
}

