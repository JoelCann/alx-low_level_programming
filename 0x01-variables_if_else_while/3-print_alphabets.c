#include <stdio.h>
/**
 * main - printing alphabets
 * Return: 0
 */
int main(void)
{
	char al;
	char Alpha;

	al = 'a';
	Alpha = 'A';
	while (al <= 'z' && Alpha <= 'Z')
	{
		putchar(al, Alpha);
		al++;
		Alpha++;
	}
	putchar('\n');
	return (0);
}
