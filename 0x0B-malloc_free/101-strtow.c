#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts number of words in string
 * @s: The string
 *
 * Return: total word count
 */
int count_word(char *s)
{
	int a, b, flag;

	b = 0;
	flag = 0;

	for (a = 0; s[a] != '\0'; a += 1)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b += 1;
		}
	}
	return (b);
}

/**
 * **strtow - splits string into two
 * @str: The string
 *
 * Return: pointer to an array of strings otherwise NULL
 */
char **strtow(char *str)
{
	char *tmp, **mtx;
	int x, y = 0, a = 0, len = 0, words, start, stop;

	while (*(str + len))
		len += 1;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mtx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mtx == NULL)
		return (NULL);

	for (x = 0; x <= len; x += 1)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (a)
			{
				stop = x;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < stop)
					*tmp++ = str[start++];
				*tmp = '\0';
				mtx[y] = tmp - a;
				y += 1;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = x;
	}
	mtx[y] = NULL;

	return (mtx);
}
