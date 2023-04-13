#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function to produce pointers
 * @str: string variable
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *strp;

	if (str == NULL)
	{
		return (NULL);
	}
	strp = malloc((strlen(str) + 1) * sizeof(char));
	if (strp == NULL)
	{
		return (NULL);
	}
	strcpy(strp, str);
	return (strp);
}

