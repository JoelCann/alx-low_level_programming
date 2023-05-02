#include "main.h"

/**
 * char *_strcpy - a function to copy a string to a buffer
 * @dest: specifies the buffer
 * @src: specifies what to copy
 * Return: the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a += 1;
	}
	for ( ; b < a ; b += 1)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

